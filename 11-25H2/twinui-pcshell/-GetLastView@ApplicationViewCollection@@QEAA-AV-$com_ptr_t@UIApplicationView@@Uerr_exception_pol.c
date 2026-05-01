/*
 * XREFs of ?GetLastView@ApplicationViewCollection@@QEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1804E2860
 * Callers:
 *     _lambda_bf1ca8575d68b9366077aadb303b08d6_::operator() @ 0x1804E1A08 (_lambda_bf1ca8575d68b9366077aadb303b08d6_--operator().c)
 *     ?HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ @ 0x1804E2EFC (-HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800E8F1C (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

__int64 *__fastcall ApplicationViewCollection::GetLastView(RTL_SRWLOCK *a1, __int64 *a2)
{
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  wil::AcquireSRWLockExclusive(&v5, a1 + 3);
  if ( ((char *)a1[1].Ptr - (char *)a1->Ptr) >> 3 )
    wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
      a2,
      (__int64 *)a1[1].Ptr - 1);
  else
    *a2 = 0LL;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
  return a2;
}
