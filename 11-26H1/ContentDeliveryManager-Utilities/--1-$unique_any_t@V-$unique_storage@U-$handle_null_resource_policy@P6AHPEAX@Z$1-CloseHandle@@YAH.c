/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180029D00
 * Callers:
 *     _std::make_shared_ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue_unsigned_short_const____FILETIME__::_1_::dtor$3 @ 0x1800BB490 (_std--make_shared_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--Subscri.c)
 *     _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$9 @ 0x1800BB6A0 (_CreativeFramework--SubscribedContentStore--ActivateSubscriptionIfInactive_--_1_--dtor$9.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>()
{
  return wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>();
}
