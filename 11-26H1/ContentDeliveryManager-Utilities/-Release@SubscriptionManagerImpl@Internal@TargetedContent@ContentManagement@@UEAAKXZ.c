/*
 * XREFs of ?Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAKXZ @ 0x180063EE0
 * Callers:
 *     ?Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@W7EAAKXZ @ 0x180063EF0 (-Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@W7EAAKXZ.c)
 *     ?Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAKXZ @ 0x180063F00 (-Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAKXZ.c)
 *     ?Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBI@EAAKXZ @ 0x180063F10 (-Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::Release(
        __int64 this,
        volatile int *a2)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::FtmBase>::Release(
           this,
           a2);
}
