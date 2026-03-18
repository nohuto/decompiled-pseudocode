/*
 * XREFs of ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1400422B8
 * Callers:
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x14019275C (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1401BADEC (DxgkChangeVideoMemoryReservationInternal.c)
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1401F80B0 (DxgkGetProcessDeviceRemovalSupport.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1401F8310 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1401F8A30 (DxgkReleaseProcessVidPnSourceOwners.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1401F8BC0 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1402C0A40 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkQueryProcessOfferInfo @ 0x1402C3CA0 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x14033BBA0 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkTrimProcessCommitment @ 0x14040B170 (DxgkTrimProcessCommitment.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1404144A0 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1404257E0 (DxgkSetProcessSchedulingPriorityClass.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x14042B1B0 (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

struct DXGPROCESS *__fastcall DXGPROCESSMUTEXBYHANDLE::GetProcess(DXGPROCESSMUTEXBYHANDLE *this)
{
  if ( !*((_BYTE *)this + 28) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1846;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_Acquired != FALSE", 1846LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_QWORD *)this + 2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1847;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pProcess != NULL", 1847LL, 0LL, 0LL, 0LL, 0LL);
  }
  return (struct DXGPROCESS *)*((_QWORD *)this + 2);
}
