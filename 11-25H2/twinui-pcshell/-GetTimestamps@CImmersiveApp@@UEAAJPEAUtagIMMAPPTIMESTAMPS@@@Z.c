/*
 * XREFs of ?GetTimestamps@CImmersiveApp@@UEAAJPEAUtagIMMAPPTIMESTAMPS@@@Z @ 0x180202E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::GetTimestamps(CImmersiveApp *this, struct tagIMMAPPTIMESTAMPS *a2)
{
  RTL_SRWLOCK *v4; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 572);
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 588);
  *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)this + 604);
  ReleaseSRWLockShared(v4);
  return 0LL;
}
