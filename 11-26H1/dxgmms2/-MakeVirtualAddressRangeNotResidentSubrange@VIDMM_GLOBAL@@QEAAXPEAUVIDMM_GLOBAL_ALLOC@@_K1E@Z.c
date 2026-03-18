/*
 * XREFs of ?MakeVirtualAddressRangeNotResidentSubrange@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1E@Z @ 0x1400A01D4
 * Callers:
 *     ?VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A8668 (-VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?MakeOneVirtualAddressRangeNotResidentSubrange@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_K1@Z @ 0x14009FD24 (-MakeOneVirtualAddressRangeNotResidentSubrange@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_K1@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E71D0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::MakeVirtualAddressRangeNotResidentSubrange(
        VIDMM_GLOBAL *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        __int64 a4)
{
  char *v8; // rsi
  char *i; // rbx
  char *j; // r14

  if ( (*((_BYTE *)this + 41064) & 0x10) != 0 )
  {
    v8 = (char *)a2 + 112;
    for ( i = (char *)*((_QWORD *)a2 + 14); i != v8; i = *(char **)i )
    {
      for ( j = (char *)*((_QWORD *)i - 2); j != i - 16; j = *(char **)j )
        VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResidentSubrange(this, (struct VIDMM_ALLOC *)(j - 40), a3, a4);
    }
    if ( (*((_BYTE *)this + 41064) & 2) != 0 )
      VIDMM_GLOBAL::WaitForAllPagingEngines(this, a2);
  }
}
