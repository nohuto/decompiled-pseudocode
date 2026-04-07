/*
 * XREFs of ?Release@CDWMDisplay@@QEBAKXZ @ 0x180068014
 * Callers:
 *     ?IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x18006601C (-IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@.c)
 *     ??1?$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800666C0 (--1-$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x180066B0C (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 *     ??1CDWMDisplaySet@@QEAA@XZ @ 0x180067FA0 (--1CDWMDisplaySet@@QEAA@XZ.c)
 *     ??1?$ComPtr@$$CBVCDWMDisplay@@@WRL@Microsoft@@QEAA@XZ @ 0x1800AC028 (--1-$ComPtr@$$CBVCDWMDisplay@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetDisplaySDRWhiteLevel@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEAM@Z @ 0x1800ACE54 (-GetDisplaySDRWhiteLevel@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEAM@Z.c)
 *     ?StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800B1200 (-StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ??1CDWMDisplay@@AEAA@XZ @ 0x180068058 (--1CDWMDisplay@@AEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
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
