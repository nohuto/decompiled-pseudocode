/*
 * XREFs of ?Unregister@?$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplicationViewEventRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAXXZ @ 0x180292354
 * Callers:
 *     ?Register@?$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplicationViewEventRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAJPEAUIApplicationViewCollection@@@Z @ 0x180292150 (-Register@-$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplica.c)
 *     ??1?$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplicationViewEventRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAA@XZ @ 0x1806C1F1C (--1-$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplicationVie.c)
 * Callees:
 *     ?Unregister@?$EventRegistration@UIApplicationViewCollection@@UIApplicationViewChangeListener@@@details@AppViewEventHelpers@@QEAAXXZ @ 0x1806C2D2C (-Unregister@-$EventRegistration@UIApplicationViewCollection@@UIApplicationViewChangeListener@@@d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppViewEventHelpers::EventListener<IApplicationViewCollection,IApplicationViewChangeListener,AppViewEventHelpers::details::ApplicationViewEventRegistration>::Unregister(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( *(_QWORD *)(a1 + 8) )
  {
    result = AppViewEventHelpers::details::EventRegistration<IApplicationViewCollection,IApplicationViewChangeListener>::Unregister();
    v3 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = 0LL;
    if ( v3 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
