/*
 * XREFs of ?VidSchiValidatePageFaultFlags@@YAXW4_DXGK_PAGE_FAULT_FLAGS@@@Z @ 0x14005785C
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1400297B0 (VidSchDdiNotifyInterruptWorker.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x140057EA8 (VidSchiProcessHwQueuePageFaultedDpc.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiValidatePageFaultFlags(enum _DXGK_PAGE_FAULT_FLAGS a1)
{
  __int64 v1; // rdx

  v1 = a1;
  if ( (a1 & 0x10) != 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 12LL, a1, 0LL, 0LL);
    WdLogGlobalForLineNumber = 916;
  }
  if ( (v1 & 0xC) == 0xC )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 13LL, v1, 0LL, 0LL);
    WdLogGlobalForLineNumber = 916;
  }
  if ( (unsigned int)v1 >= 0x200 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 13LL, v1, 0LL, 0LL);
    WdLogGlobalForLineNumber = 916;
  }
  if ( (v1 & 0xFFFFFEF3) != 0 && (v1 & 0x100) != 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 13LL, v1, 0LL, 0LL);
    WdLogGlobalForLineNumber = 916;
  }
}
