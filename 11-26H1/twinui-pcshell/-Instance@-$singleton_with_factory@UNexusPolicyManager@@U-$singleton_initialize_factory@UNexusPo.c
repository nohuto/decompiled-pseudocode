/*
 * XREFs of ?Instance@?$singleton_with_factory@UNexusPolicyManager@@U?$singleton_initialize_factory@UNexusPolicyManager@@@xblib@@@xblib@@SA?AV?$shared_ptr@UNexusPolicyManager@@@std@@XZ @ 0x18034B674
 * Callers:
 *     ?ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ @ 0x180353E2C (-ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18013AB58 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?4UNexusPolicyManager@@$0A@@?$weak_ptr@UNexusPolicyManager@@@std@@QEAAAEAV01@AEBV?$shared_ptr@UNexusPolicyManager@@@1@@Z @ 0x18033ADB4 (--$-4UNexusPolicyManager@@$0A@@-$weak_ptr@UNexusPolicyManager@@@std@@QEAAAEAV01@AEBV-$shared_ptr.c)
 *     ??$make_shared@UNexusPolicyManager@@$$V@std@@YA?AV?$shared_ptr@UNexusPolicyManager@@@0@XZ @ 0x180340084 (--$make_shared@UNexusPolicyManager@@$$V@std@@YA-AV-$shared_ptr@UNexusPolicyManager@@@0@XZ.c)
 *     ?lock@?$weak_ptr@UNexusPolicyManager@@@std@@QEBA?AV?$shared_ptr@UNexusPolicyManager@@@2@XZ @ 0x180359980 (-lock@-$weak_ptr@UNexusPolicyManager@@@std@@QEBA-AV-$shared_ptr@UNexusPolicyManager@@@2@XZ.c)
 *     ?SingletonInitialize@NexusPolicyManager@@QEAAXXZ @ 0x1803619D8 (-SingletonInitialize@NexusPolicyManager@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall xblib::singleton_with_factory<NexusPolicyManager,xblib::singleton_initialize_factory<NexusPolicyManager>>::Instance(
        __int64 *a1)
{
  RTL_SRWLOCK *v3; // [rsp+28h] [rbp-28h] BYREF
  std::_Ref_count_base *v4[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 *v5; // [rsp+40h] [rbp-10h]

  v5 = a1;
  v3 = 0LL;
  wil::AcquireSRWLockExclusive(
    &v3,
    &xblib::singleton_with_factory<NexusPolicyManager,xblib::singleton_initialize_factory<NexusPolicyManager>>::s_lock);
  *(_OWORD *)a1 = 0LL;
  std::weak_ptr<NexusPolicyManager>::lock(
    &xblib::singleton_with_factory<NexusPolicyManager,xblib::singleton_initialize_factory<NexusPolicyManager>>::s_instance,
    a1);
  if ( !*a1 )
  {
    *(_OWORD *)v4 = 0LL;
    std::make_shared<NexusPolicyManager,>((__int64)v4);
    NexusPolicyManager::SingletonInitialize(v4[0]);
    std::shared_ptr<KBViewInfo>::operator=(a1, (__int64 *)v4);
    if ( v4[1] )
      std::_Ref_count_base::_Decref(v4[1]);
    std::weak_ptr<NexusPolicyManager>::operator=<NexusPolicyManager,0>(
      &xblib::singleton_with_factory<NexusPolicyManager,xblib::singleton_initialize_factory<NexusPolicyManager>>::s_instance,
      a1);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v3);
  return a1;
}
