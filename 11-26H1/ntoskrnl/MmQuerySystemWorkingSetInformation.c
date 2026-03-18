/*
 * XREFs of MmQuerySystemWorkingSetInformation @ 0x1404C9E74
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x1402FE650 (MiUnlockWorkingSetCoreExclusive.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1402FE7B0 (MiLockWorkingSetCoreExclusive.c)
 *     MiMapWorkingSetTypeToVm @ 0x14039F9F0 (MiMapWorkingSetTypeToVm.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

unsigned __int64 __fastcall MmQuerySystemWorkingSetInformation(int a1, _QWORD *a2)
{
  int v2; // r14d
  unsigned __int64 result; // rax
  int *v4; // rsi
  __int64 Blink_high; // rdx
  __int64 v8; // rbp
  __int64 v9; // r8
  int *v10; // r12
  __int64 v11; // r13
  int v12; // ebx
  __int64 v13; // rdx
  _DWORD *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  char v19; // [rsp+50h] [rbp+8h]

  v2 = 0;
  result = (unsigned int)(a1 - 1);
  v4 = (int *)a2 + 15;
  *((_DWORD *)a2 + 15) = 0;
  if ( (unsigned int)result <= 3 )
  {
    v8 = (__int64)MiMapWorkingSetTypeToVm(a1);
    v10 = v4;
    if ( a1 == 1 )
    {
      Blink_high = HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink);
      v8 = (*(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * Blink_high) + 22592LL) & -(__int64)(*(_BYTE *)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * Blink_high) + 22300LL) != 0);
      if ( !v8 )
        return (unsigned __int64)memset_0(a2, 0, 0x40uLL);
      v10 = (int *)a2 + 15;
    }
    v11 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(v8 + 174));
    v19 = MiLockWorkingSetShared(v8, Blink_high, v9);
    MiLockWorkingSetCoreExclusive(v8);
    *a2 = *(_QWORD *)(v8 + 136);
    a2[1] = *(_QWORD *)(v8 + 8);
    *((_DWORD *)a2 + 4) = *(_DWORD *)(v8 + 4);
    a2[3] = *(_QWORD *)(v8 + 120);
    a2[4] = *(_QWORD *)(v8 + 128);
    v12 = *(_DWORD *)(v8 + 184);
    a2[6] = *(_QWORD *)(v11 + 8LL * (unsigned int)(a1 - 1) + 7624);
    MiUnlockWorkingSetCoreExclusive(v8);
    if ( (v12 & 0x20) != 0 )
      *v4 |= 4u;
    else
      v10 = v4;
    if ( (v12 & 0x10) != 0 )
      *v10 = *v4 | 1;
    LOBYTE(v13) = v19;
    MiUnlockWorkingSetShared(v8, v13);
    v14 = (_DWORD *)(v11 + 7588);
    v15 = 7LL;
    do
    {
      v2 += *v14++;
      --v15;
    }
    while ( v15 );
    *((_DWORD *)a2 + 14) = v2;
    v16 = *a2;
    v17 = a2[6];
    v18 = *a2 + *(_QWORD *)(v11 + 7616);
    a2[5] = v18;
    if ( v18 > v17 )
      a2[5] = v17;
    result = a2[1] << 12;
    a2[1] = result;
    *a2 = v16 << 12;
  }
  return result;
}
