/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180220074
 * Callers:
 *     _CControlCenterExperienceManager::CControlCenterExperienceManager_::_1_::dtor$18 @ 0x1806B48C2 (_CControlCenterExperienceManager--CControlCenterExperienceManager_--_1_--dtor$18.c)
 *     _CActionCenterExperienceManager::CActionCenterExperienceManager_::_1_::dtor$15 @ 0x1806BE2AF (_CActionCenterExperienceManager--CActionCenterExperienceManager_--_1_--dtor$15.c)
 *     _MeetNowExperienceManager::MeetNowExperienceManager_::_1_::dtor$11 @ 0x1806C0796 (_MeetNowExperienceManager--MeetNowExperienceManager_--_1_--dtor$11.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>>(
        struct _TP_TIMER **a1)
{
  struct _TP_TIMER *v1; // rcx

  v1 = *a1;
  if ( v1 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v1);
}
