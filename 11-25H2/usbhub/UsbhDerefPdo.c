/*
 * XREFs of UsbhDerefPdo @ 0x1400102D0
 * Callers:
 *     UsbhResetPortData @ 0x140010110 (UsbhResetPortData.c)
 *     UsbhBusUnlatchPdo @ 0x14001CCB0 (UsbhBusUnlatchPdo.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x14003A52C (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhDerefPdo(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r11
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 *v10; // rdi
  __int64 *v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  _DWORD *v14; // rcx
  int v15; // eax
  __int64 *v16; // rdx
  __int64 **v17; // rcx

  v4 = a4;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
        *(_DWORD *)v8 = 1348891236;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = a2;
        *(_QWORD *)(v8 + 24) = v4;
      }
    }
  }
  if ( !a2 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v9 = *(_QWORD *)(a2 + 64);
  if ( !v9 )
    UsbhTrapFatal_Dbg(a2, 0LL);
  if ( *(_DWORD *)v9 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v10 = (__int64 *)(v9 + 1272);
  v11 = *(__int64 **)(v9 + 1272);
  if ( v11 == (__int64 *)(v9 + 1272) )
  {
LABEL_15:
    v14 = (_DWORD *)(v9 + 1288);
    v15 = *(_DWORD *)(v9 + 1288);
    if ( v15 )
      *v14 = v15 - 1;
  }
  else
  {
    while ( 1 )
    {
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( a1 )
        {
          v12 = *(_QWORD *)(a1 + 64);
          if ( v12 )
          {
            v13 = *(_QWORD *)(v12 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
            *(_DWORD *)v13 = 1064591724;
            *(_QWORD *)(v13 + 8) = 0LL;
            *(_QWORD *)(v13 + 16) = v9;
            *(_QWORD *)(v13 + 24) = v4;
          }
        }
      }
      if ( *((_DWORD *)v11 + 4) == (_DWORD)v4 && v11[4] == a3 )
        break;
      v11 = (__int64 *)*v11;
      if ( v11 == v10 )
        goto LABEL_15;
    }
    v16 = (__int64 *)*v11;
    if ( *(__int64 **)(*v11 + 8) != v11 || (v17 = (__int64 **)v11[1], *v17 != v11) )
      __fastfail(3u);
    *v17 = v16;
    v16[1] = (__int64)v17;
    ExFreePoolWithTag(v11 - 1, 0);
    v14 = (_DWORD *)(v9 + 1288);
  }
  if ( (__int64 *)*v10 == v10 && !*v14 )
    KeSetEvent((PRKEVENT)(v9 + 1296), 0, 0);
}
