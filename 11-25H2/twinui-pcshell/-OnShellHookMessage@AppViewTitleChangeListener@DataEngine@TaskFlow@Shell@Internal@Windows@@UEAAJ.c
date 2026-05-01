/*
 * XREFs of ?OnShellHookMessage@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_K_J@Z @ 0x1803F3E40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?TryUpdateAndReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_K@Z @ 0x1803F4428 (-TryUpdateAndReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Win.c)
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::OnShellHookMessage(
        RTL_SRWLOCK *this,
        __int64 a2,
        unsigned __int64 a3)
{
  RTL_SRWLOCK *v6; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 == 6 && (PVOID)a3 == this[11].Ptr )
  {
    wil::AcquireSRWLockExclusive(&v6, this + 10);
    Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::TryUpdateAndReportTitleChange(
      (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *)&this[-2],
      a3);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v6);
  }
  return 0LL;
}
