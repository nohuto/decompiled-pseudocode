/*
 * XREFs of wil::details::lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___::reset @ 0x1805ED134
 * Callers:
 *     wil::details::lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___::_lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___ @ 0x1805E32D4 (wil--details--lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___--_lambda_call__lambda_84c7.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x1800F0FF8 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 *     _anonymous_namespace_::PinConsentPromptManager::RemoveOutstandingPromptForOperation @ 0x1805E82C8 (_anonymous_namespace_--PinConsentPromptManager--RemoveOutstandingPromptForOperation.c)
 */

void __fastcall wil::details::lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___::reset(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx
  RTL_SRWLOCK *v3; // rsi
  std::_Ref_count_base *v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rdx
  RTL_SRWLOCK *v7; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v8[4]; // [rsp+28h] [rbp-20h] BYREF

  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    v2 = *(std::_Ref_count_base **)(a1 + 8);
    if ( v2 )
    {
      if ( std::_Ref_count_base::_Incref_nz(v2) )
      {
        v3 = *(RTL_SRWLOCK **)a1;
        v4 = *(std::_Ref_count_base **)(a1 + 8);
        if ( *(_QWORD *)a1 )
        {
          v7 = 0LL;
          wil::AcquireSRWLockExclusive(&v7, v3 + 2);
          v5 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
                 v8,
                 (_QWORD *)(a1 + 16));
          anonymous_namespace_::PinConsentPromptManager::RemoveOutstandingPromptForOperation((__int64)v3, v6, v5);
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
        }
        if ( v4 )
          std::_Ref_count_base::_Decref(v4);
      }
    }
  }
}
