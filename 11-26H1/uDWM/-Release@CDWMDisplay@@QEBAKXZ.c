/*
 * XREFs of ?Release@CDWMDisplay@@QEBAKXZ @ 0x180008418
 * Callers:
 *     ?IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180006B90 (-IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@.c)
 *     ??1CDWMDisplaySet@@QEAA@XZ @ 0x18000845C (--1CDWMDisplaySet@@QEAA@XZ.c)
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18005721C (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 *     ??1?$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800770D8 (--1-$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$ComPtr@$$CBVCDWMDisplay@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A9FDC (--1-$ComPtr@$$CBVCDWMDisplay@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetDisplaySDRWhiteLevel@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEAM@Z @ 0x1800AB854 (-GetDisplaySDRWhiteLevel@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEAM@Z.c)
 *     ?StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800B0B70 (-StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ??1CDWMDisplay@@AEAA@XZ @ 0x18000818C (--1CDWMDisplay@@AEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

__int64 __fastcall CDWMDisplay::Release(CDWMDisplay *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v2 && this )
  {
    CDWMDisplay::~CDWMDisplay(this);
    DefaultHeap::Free(this);
  }
  return v2;
}
