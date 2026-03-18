/*
 * XREFs of ProcessIrpCommand @ 0x14002B710
 * Callers:
 *     NVMeHwUnitControl @ 0x140010210 (NVMeHwUnitControl.c)
 * Callees:
 *     AssignQueueId @ 0x14000F070 (AssignQueueId.c)
 *     NVMeIsLunValid @ 0x1400119D0 (NVMeIsLunValid.c)
 *     ProcessPendingIoCommands @ 0x14002C2D0 (ProcessPendingIoCommands.c)
 */

__int64 __fastcall ProcessIrpCommand(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v5; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r9d
  __int64 v10; // r11
  __int64 v11; // r8
  unsigned __int64 v12; // r10
  unsigned __int128 v13; // rax
  unsigned __int16 v14; // r8
  __int64 v15; // rax
  int v16; // edx
  int v17; // r9d
  int v18; // eax

  v3 = a2[3];
  v5 = *a2;
  if ( !*((_DWORD *)a2 + 4)
    || (*(_DWORD *)(a1 + 4064) & 0x100) != 0
    || !NVMeIsLunValid(a1, *(_BYTE *)(v5 + 10))
    || (*(_DWORD *)(v8 + 24) & 1) == 0 && (*(_DWORD *)(*(_QWORD *)(v8 + 8 * v7 + 1672) + 20LL) & 0x200) == 0 )
  {
    return StorPortNotification(0x2000LL, a1, v3);
  }
  v10 = *(_QWORD *)(v8 + 8 * v7 + 1672);
  v11 = *(unsigned int *)(v10 + 52);
  v12 = *(_QWORD *)(v10 + 56);
  if ( (_DWORD)v11 )
  {
    if ( v9 % (unsigned int)v11 )
      return StorPortNotification(0x2000LL, a1, v3);
    *(_QWORD *)&v13 = a2[1] / v11;
    *((_QWORD *)&v13 + 1) = a2[1] % v11;
    if ( v13 >= v12 || v12 - a2[1] / v11 < (unsigned int)(__PAIR64__(DWORD2(v13), v9) / (unsigned int)v11) )
      return StorPortNotification(0x2000LL, a1, v3);
  }
  if ( (*(_DWORD *)(v10 + 20) & 0x200) != 0 )
    v14 = 1;
  else
    v14 = AssignQueueId(a1, *((_DWORD *)a2 + 12), *((unsigned __int16 *)a2 + 26), v9, 0, 0, (a2[7] & 0x10) != 0);
  v15 = *(unsigned __int8 *)(v5 + 10);
  *(_BYTE *)(v3 + 3) = v15;
  *(_WORD *)v3 = 1;
  v16 = *((_DWORD *)a2 + 4);
  *(_DWORD *)(v3 + 4) = v16;
  *(_DWORD *)(v3 + 16) = 1;
  v17 = *(_DWORD *)(a1 + 120);
  if ( v17 )
  {
    if ( a2[1] )
    {
      v18 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v15 + 1672) + 52LL);
      *(_DWORD *)(v3 + 4) = v16 - (-v18 & (v18 + v17 - 1));
    }
  }
  return ProcessPendingIoCommands(a1, 208LL * v14 + *(_QWORD *)(a1 + 936) - 208LL, v3, a2);
}
