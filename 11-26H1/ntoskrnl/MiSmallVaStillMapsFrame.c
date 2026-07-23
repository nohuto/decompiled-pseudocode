/*
 * XREFs of MiSmallVaStillMapsFrame @ 0x1403167FC
 * Callers:
 *     MiCopyTradePageMetaData @ 0x140292E3C (MiCopyTradePageMetaData.c)
 *     MiLockStealSystemVm @ 0x14044D760 (MiLockStealSystemVm.c)
 *     MiLockStealUserVm @ 0x140458690 (MiLockStealUserVm.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 */

__int64 __fastcall MiSmallVaStillMapsFrame(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // rax
  int v4; // r11d
  __int64 v5; // rbx
  __int64 *v6; // r9
  int v7; // edi
  __int64 v8; // rdx
  int v9; // edx
  __int64 v10; // r9
  unsigned __int64 PteShadow; // rax
  _KPROCESS *v13; // rax
  char v14; // r8
  unsigned __int64 v15; // r9
  unsigned __int64 KernelWaitTime; // rax
  __int64 v17; // rax
  _QWORD v19[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  memset(v19, 0, 32);
  v3 = 0LL;
  v4 = 4;
  do
  {
    a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v19[v3++] = a1;
  }
  while ( v3 < 4 );
  v5 = 4LL;
  do
  {
    v6 = (__int64 *)v19[v5 - 1];
    v7 = v4 - 1;
    --v5;
    --v4;
    v8 = *v6;
    if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (v8 & 1) == 0 )
        return 0LL;
      if ( (v8 & 0x20) == 0 || (v8 & 0x42) == 0 )
      {
        v13 = MiPteHasShadow();
        if ( v13 )
        {
          KernelWaitTime = v13[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v17 = *(_QWORD *)(KernelWaitTime + 8 * ((v15 >> 3) & 0x1FF));
            if ( (v17 & 0x20) != 0 )
              v14 |= 0x20u;
            LOBYTE(v8) = v14 | 0x42;
            if ( (v17 & 0x42) == 0 )
              LOBYTE(v8) = v14;
          }
        }
      }
    }
    if ( (v8 & 1) == 0 )
      return 0LL;
    v9 = v8 & 0x80;
  }
  while ( !v9 && v5 != 1 );
  if ( (v9 != 0LL ? v7 : 0) == 0 )
  {
    if ( v2 == -1 )
      return 1LL;
    v10 = v19[0];
    PteShadow = *(_QWORD *)v19[0];
    if ( v19[0] >= 0xFFFFF6FB7DBED000uLL && v19[0] <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v19[0], *(_QWORD *)v19[0]);
    if ( (PteShadow & 1) != 0
      && (((PteShadow >> 12) & 0xFFFFFFFFFFLL) == v2
       || v10 == 0xFFFFF6FB7DBEDF68uLL
       && (*(_QWORD *)(48 * v2 - 0x21FFFFFFFFD8LL) & 0xFFFFFFFFFFLL) == v2
       && v2 == KeGetCurrentThread()->ApcState.Process->UserDirectoryTableBase >> 12) )
    {
      return 1LL;
    }
  }
  return 0LL;
}
