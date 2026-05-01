/*
 * XREFs of _lambda_84c775889c05b89f12ed6d0ff428b333_::operator() @ 0x1805BFE90
 * Callers:
 *     wil::details::lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___::_lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___ @ 0x1805BF2F8 (wil--details--lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___--_lambda_call__lambda_84c7.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x180084510 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _anonymous_namespace_::PinConsentPromptManager::RemoveOutstandingPromptForOperation @ 0x1805C41A8 (_anonymous_namespace_--PinConsentPromptManager--RemoveOutstandingPromptForOperation.c)
 */

void __fastcall lambda_84c775889c05b89f12ed6d0ff428b333_::operator()(RTL_SRWLOCK **a1)
{
  std::_Ref_count_base *v2; // rbx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx
  RTL_SRWLOCK *v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  RTL_SRWLOCK *v9; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0LL;
  v3 = (std::_Ref_count_base *)a1[1];
  if ( v3 && std::_Ref_count_base::_Incref_nz(v3) && (v5 = *a1, v2 = v4, *a1) )
  {
    v9 = 0LL;
    wil::AcquireSRWLockExclusive(&v9, v5 + 2);
    v6 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v8, a1 + 2);
    anonymous_namespace_::PinConsentPromptManager::RemoveOutstandingPromptForOperation(v5, v7, v6);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v9);
  }
  else if ( !v2 )
  {
    return;
  }
  std::_Ref_count_base::_Decref(v2);
}
