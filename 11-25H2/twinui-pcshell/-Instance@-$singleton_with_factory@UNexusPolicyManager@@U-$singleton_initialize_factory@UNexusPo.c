/*
 * XREFs of ?Instance@?$singleton_with_factory@UNexusPolicyManager@@U?$singleton_initialize_factory@UNexusPolicyManager@@@xblib@@@xblib@@SA?AV?$shared_ptr@UNexusPolicyManager@@@std@@XZ @ 0x1803481BC
 * Callers:
 *     ?ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18034F714 (-ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005D480 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$?4UNexusPolicyManager@@$0A@@?$weak_ptr@UNexusPolicyManager@@@std@@QEAAAEAV01@AEBV?$shared_ptr@UNexusPolicyManager@@@1@@Z @ 0x18033B0B8 (--$-4UNexusPolicyManager@@$0A@@-$weak_ptr@UNexusPolicyManager@@@std@@QEAAAEAV01@AEBV-$shared_ptr.c)
 *     ??$make_shared@UNexusPolicyManager@@$$V@std@@YA?AV?$shared_ptr@UNexusPolicyManager@@@0@XZ @ 0x18033FEFC (--$make_shared@UNexusPolicyManager@@$$V@std@@YA-AV-$shared_ptr@UNexusPolicyManager@@@0@XZ.c)
 *     ?lock@?$weak_ptr@UNexusPolicyManager@@@std@@QEBA?AV?$shared_ptr@UNexusPolicyManager@@@2@XZ @ 0x18035356C (-lock@-$weak_ptr@UNexusPolicyManager@@@std@@QEBA-AV-$shared_ptr@UNexusPolicyManager@@@2@XZ.c)
 *     ?SingletonInitialize@NexusPolicyManager@@QEAAXXZ @ 0x18035AFD4 (-SingletonInitialize@NexusPolicyManager@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall xblib::singleton_with_factory<NexusPolicyManager,xblib::singleton_initialize_factory<NexusPolicyManager>>::Instance(
        __int64 *a1)
{
  std::_Ref_count_base *v3[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 *v4; // [rsp+38h] [rbp-18h]
  RTL_SRWLOCK *v5; // [rsp+40h] [rbp-10h] BYREF

  v4 = a1;
  v5 = 0LL;
  wil::AcquireSRWLockExclusive(
    &v5,
    &xblib::singleton_with_factory<NexusPolicyManager,xblib::singleton_initialize_factory<NexusPolicyManager>>::s_lock);
  *(_OWORD *)a1 = 0LL;
  std::weak_ptr<NexusPolicyManager>::lock(
    &xblib::singleton_with_factory<NexusPolicyManager,xblib::singleton_initialize_factory<NexusPolicyManager>>::s_instance,
    a1);
  if ( !*a1 )
  {
    *(_OWORD *)v3 = 0LL;
    std::make_shared<NexusPolicyManager,>((__int64)v3);
    NexusPolicyManager::SingletonInitialize(v3[0]);
    std::shared_ptr<KBViewInfo>::operator=(a1, (__int64 *)v3);
    if ( v3[1] )
      std::_Ref_count_base::_Decref(v3[1]);
    std::weak_ptr<NexusPolicyManager>::operator=<NexusPolicyManager,0>(
      &xblib::singleton_with_factory<NexusPolicyManager,xblib::singleton_initialize_factory<NexusPolicyManager>>::s_instance,
      a1);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
  return a1;
}
