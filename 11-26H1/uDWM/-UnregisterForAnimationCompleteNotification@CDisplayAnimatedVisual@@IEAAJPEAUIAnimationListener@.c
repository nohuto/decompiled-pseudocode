/*
 * XREFs of ?UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@@PEAPEAII@Z @ 0x1800AF2A8
 * Callers:
 *     ?StopImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800AFF00 (-StopImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800B0D40 (-StopImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ @ 0x1800B1640 (-StopImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800B1D20 (-StopImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ @ 0x1800B2830 (-StopImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x1800B3A20 (-StopImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800B4050 (-StopImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800B4780 (-StopImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180013B64 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x1800537E8 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x18006EEC0 (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ??1?$com_ptr_t@VCAnimationEngine@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18008DAD0 (--1-$com_ptr_t@VCAnimationEngine@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayAnimatedVisual::UnregisterForAnimationCompleteNotification(
        CDisplayAnimatedVisual *this,
        struct IAnimationListener *a2,
        unsigned int **a3,
        unsigned int a4)
{
  __int64 v4; // rsi
  CAnimationEngine *v7; // rbx
  unsigned int v8; // ebx
  CAnimationEngine *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = this;
  v4 = a4;
  v7 = CDesktopManager::AcquireAnimationEngine();
  v10 = v7;
  if ( (_DWORD)v4 )
  {
    do
    {
      if ( **a3 != -1 )
      {
        CAnimationEngine::ScheduleStopAnimation(v7, **a3);
        **a3 = -1;
      }
      ++a3;
      --v4;
    }
    while ( v4 );
  }
  v8 = CAnimationEngine::UnregisterForAnimationCompleteNotification(v7, a2);
  wil::com_ptr_t<CAnimationEngine,wil::err_returncode_policy>::~com_ptr_t<CAnimationEngine,wil::err_returncode_policy>(&v10);
  return v8;
}
