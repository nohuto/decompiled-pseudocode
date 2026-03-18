/*
 * XREFs of ?VidMmEnsureUpdatePageTableChaData@@YAJPEAVVIDMM_CPU_HOST_APERTURE@@IPEAUVIDMM_UPDATEPAGETABLE_CHA_DATA@@@Z @ 0x14009B818
 * Callers:
 *     ReservePageTableResourcesFromSegment @ 0x1400B020C (ReservePageTableResourcesFromSegment.c)
 *     ?EnsureUpdatePageTableChaRange@VIDMM_MEMORY_SEGMENT@@UEAAJI@Z @ 0x140125730 (-EnsureUpdatePageTableChaRange@VIDMM_MEMORY_SEGMENT@@UEAAJI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?AddReservedRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@PEAPEAXPEAPEAU_MDL@@_K3@Z @ 0x1400BC208 (-AddReservedRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@PEAPEAXPEA.c)
 */

__int64 __fastcall VidMmEnsureUpdatePageTableChaData(
        struct VIDMM_CPU_HOST_APERTURE *a1,
        unsigned int a2,
        struct VIDMM_UPDATEPAGETABLE_CHA_DATA *a3)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rcx
  unsigned __int64 v8; // [rsp+20h] [rbp-38h]

  if ( *(_QWORD *)a3 || !a1 )
    return 0LL;
  v4 = VIDMM_CPU_HOST_APERTURE::AddReservedRange(
         a1,
         (struct VIDMM_CPU_HOST_APERTURE_RANGE **)a3,
         (void **)a3 + 1,
         (struct _MDL **)a3 + 2,
         v8,
         a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry2(1LL, a2, v4);
    WdLogGlobalForLineNumber = 1241;
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
  }
  return v5;
}
