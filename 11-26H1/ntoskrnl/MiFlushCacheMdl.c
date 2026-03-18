/*
 * XREFs of MiFlushCacheMdl @ 0x140516770
 * Callers:
 *     MiAllocatePagesForMdl @ 0x14034898C (MiAllocatePagesForMdl.c)
 *     MiFlushCachedIoPfnRange @ 0x14052448C (MiFlushCachedIoPfnRange.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x14024FA80 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KeInvalidateAllCaches @ 0x14024FCE0 (KeInvalidateAllCaches.c)
 *     MiVaToFlushVm @ 0x1402843F8 (MiVaToFlushVm.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287EE0 (MiMapPageInHyperSpaceWorker.c)
 *     MiFlushTbList @ 0x140329040 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14035E7E0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140360920 (MiInitializeTbFlushList.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14040DF60 (MiUnmapPageInHyperSpaceWorker.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall MiFlushCacheMdl(__int64 a1, int a2, int a3)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  __int64 *v9; // r14
  int v10; // ebx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v12; // ebx
  __int64 v13; // r15
  __int64 v14; // rcx
  unsigned __int64 v15; // r15
  void *v16; // rax
  _BYTE v17[28]; // [rsp+30h] [rbp-108h] BYREF
  int v18; // [rsp+4Ch] [rbp-ECh]

  memset_0(v17, 0, 0xC8uLL);
  v7 = (unsigned __int64)*(unsigned int *)(a1 + 40) >> 12;
  if ( a3 || v7 >= (unsigned int)dword_140E2D734 )
  {
    ++dword_140E2D72C;
    KeInvalidateAllCaches();
    return 1LL;
  }
  else
  {
    v9 = (__int64 *)(a1 + 48);
    v10 = 2;
    if ( a2 != 2 )
      v10 = 0;
    CurrentIrql = KeGetCurrentIrql();
    if ( v7 )
    {
      v12 = v10 | 0xC0000000;
      do
      {
        v13 = *v9;
        if ( CurrentIrql < 2u )
        {
          v14 = KeGetCurrentIrql();
          if ( (_BYTE)v14 != 2 )
            __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v6) = 2;
            KiRaiseIrqlProcessIrqlFlags(v14, v6);
          }
        }
        v15 = MiMapPageInHyperSpaceWorker(v13, 0LL, v12);
        KeInvalidateRangeAllCachesNoIpi(v15, 0x1000u);
        MiUnmapPageInHyperSpaceWorker(v15, 0x11u, 0x80000000);
        if ( CurrentIrql < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
        if ( a2 == 3 )
        {
          if ( !v18 )
          {
            v16 = MiVaToFlushVm(v15);
            MiInitializeTbFlushList((__int64)v17, (__int64)v16, 20, 8, 1);
          }
          MiInsertTbFlushEntry((__int64)v17, v15, 1LL, 0);
        }
        ++v9;
        --v7;
      }
      while ( v7 );
    }
    if ( a2 == 3 )
      MiFlushTbList((__int64)v17);
    return 0LL;
  }
}
