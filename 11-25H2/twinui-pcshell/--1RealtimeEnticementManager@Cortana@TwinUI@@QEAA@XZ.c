/*
 * XREFs of ??1RealtimeEnticementManager@Cortana@TwinUI@@QEAA@XZ @ 0x1803CE284
 * Callers:
 *     ??1CCortanaWNFService@Cortana@TwinUI@@QEAA@XZ @ 0x1803CE22C (--1CCortanaWNFService@Cortana@TwinUI@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall TwinUI::Cortana::RealtimeEnticementManager::~RealtimeEnticementManager(void **this)
{
  std::wstring::_Tidy_deallocate(this + 3);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,1>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,1>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>((struct _TP_TIMER **)this);
}
