/*
 * XREFs of ?DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z @ 0x1401A24DC
 * Callers:
 *     DrvProcessDxgkDisplayCallout @ 0x14013D67C (DrvProcessDxgkDisplayCallout.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memcmp @ 0x14024C590 (memcmp.c)
 */

__int64 __fastcall DrvUpdateDpiInfoOnOptimizedModeChange(struct _MDEV *a1, unsigned __int8 *a2)
{
  unsigned int v2; // ebp
  unsigned int i; // esi
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 DxgkWin32kInterface; // rax
  int v15; // eax
  _OWORD Buf1[6]; // [rsp+30h] [rbp-78h] BYREF

  v2 = 0;
  *a2 = 0;
  if ( a1 )
  {
    for ( i = 0; i < *((_DWORD *)a1 + 5); ++i )
    {
      v6 = 56LL * i;
      v7 = *(_QWORD *)((char *)a1 + v6 + 40);
      v8 = *(_QWORD *)(v7 + 2568);
      if ( v8 && v8 != -4 && (*(_DWORD *)(v8 + 160) & 0x800000) != 0 )
      {
        v9 = *(_OWORD *)(v7 + 2456);
        Buf1[0] = *(_OWORD *)(v7 + 2440);
        v10 = *(_OWORD *)(v7 + 2472);
        Buf1[1] = v9;
        v11 = *(_OWORD *)(v7 + 2488);
        Buf1[2] = v10;
        v12 = *(_OWORD *)(v7 + 2504);
        Buf1[3] = v11;
        v13 = *(_OWORD *)(v7 + 2520);
        Buf1[4] = v12;
        Buf1[5] = v13;
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
        v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64))(DxgkWin32kInterface + 520))(
                *(_QWORD *)(*(_QWORD *)(v7 + 2568) + 232LL),
                *(unsigned int *)(*(_QWORD *)(v7 + 2568) + 248LL),
                0LL,
                v7 + 2120,
                v7 + 2440);
        v2 = v15;
        if ( v15 >= 0 )
        {
          if ( memcmp(Buf1, (const void *)(v7 + 2440), 0x60uLL) )
          {
            *(_DWORD *)((char *)a1 + v6 + 72) = *(_DWORD *)(v7 + 2448);
            *a2 = 1;
          }
        }
        else
        {
          WdLogSingleEntry3(2LL, v15);
          WdLogGlobalForLineNumber = 17209;
        }
      }
    }
  }
  return v2;
}
