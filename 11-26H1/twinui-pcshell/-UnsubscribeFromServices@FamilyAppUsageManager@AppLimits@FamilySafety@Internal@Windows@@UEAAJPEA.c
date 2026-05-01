/*
 * XREFs of ?UnsubscribeFromServices@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUIServiceProvider@@@Z @ 0x180570900
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?StopUsageTracking@AppUsageTelemetry@@SAXXZ @ 0x1805706B4 (-StopUsageTracking@AppUsageTelemetry@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::UnsubscribeFromServices(
        RTL_SRWLOCK *this,
        struct IServiceProvider *a2)
{
  __int64 v3; // rcx
  PVOID Ptr; // rcx
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  wil::AcquireSRWLockExclusive(&v8, this + 27);
  try
  {
    if ( this[26].Ptr )
    {
      AppUsageTelemetry::StopUsageTracking(v3);
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)this[26].Ptr + 40LL))(this[26].Ptr);
      Ptr = this[26].Ptr;
      this[26].Ptr = 0LL;
      if ( Ptr )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4E,
                           (int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                           v5);
  }
  return result;
}
