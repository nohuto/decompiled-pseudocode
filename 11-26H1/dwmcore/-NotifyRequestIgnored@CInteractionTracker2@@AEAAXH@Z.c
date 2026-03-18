/*
 * XREFs of ?NotifyRequestIgnored@CInteractionTracker2@@AEAAXH@Z @ 0x180274550
 * Callers:
 *     ?ProcessApplyPositionImpulse@CInteractionTracker2@@AEAAXXZ @ 0x1802747FC (-ProcessApplyPositionImpulse@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessApplyScaleImpulse@CInteractionTracker2@@AEAAXXZ @ 0x180274928 (-ProcessApplyScaleImpulse@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessSetRequestedDeltaPosition@CInteractionTracker2@@AEAAXXZ @ 0x180275164 (-ProcessSetRequestedDeltaPosition@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessSetRequestedPosition@CInteractionTracker2@@AEAAXXZ @ 0x1802751FC (-ProcessSetRequestedPosition@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessSetRequestedPositionAnimation@CInteractionTracker2@@AEAAXXZ @ 0x180275298 (-ProcessSetRequestedPositionAnimation@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessSetRequestedScale@CInteractionTracker2@@AEAAXXZ @ 0x180275350 (-ProcessSetRequestedScale@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessSetRequestedScaleAnimation@CInteractionTracker2@@AEAAXXZ @ 0x1802753D0 (-ProcessSetRequestedScaleAnimation@CInteractionTracker2@@AEAAXXZ.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18004AFB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?ShouldNotify@CInteractionTracker2@@AEAA_NUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18021EBC4 (-ShouldNotify@CInteractionTracker2@@AEAA_NUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker2::NotifyRequestIgnored(CInteractionTracker2 *this, int a2)
{
  unsigned int ChannelCallbackId; // eax
  __int64 v5; // r10
  __int64 v6; // [rsp+38h] [rbp-20h]
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( CInteractionTracker2::ShouldNotify(this) )
  {
    if ( (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6384LL) + 72LL))(
           *(_QWORD *)(*((_QWORD *)this + 3) + 6384LL),
           6LL) )
    {
      ChannelCallbackId = CNotificationResource::GetChannelCallbackId(this);
      v7[0] = ChannelCallbackId;
      v7[1] = *((unsigned int *)this + 18);
      CoreUICallSend(v5, v7, 2LL, 6LL, 2, &unk_1802F5AFB, a2, v6, ChannelCallbackId);
    }
  }
}
