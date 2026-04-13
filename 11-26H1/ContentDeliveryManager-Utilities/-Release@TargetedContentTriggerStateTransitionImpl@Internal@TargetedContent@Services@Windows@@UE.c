/*
 * XREFs of ?Release@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@UEAAKXZ @ 0x180045560
 * Callers:
 *     ?Release@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@W7EAAKXZ @ 0x180045570 (-Release@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@W7.c)
 *     ?Release@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@WBA@EAAKXZ @ 0x180045580 (-Release@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@WB.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::Release(
        __int64 this,
        volatile int *a2)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition,Microsoft::WRL::FtmBase>::Release(
           this,
           a2);
}
