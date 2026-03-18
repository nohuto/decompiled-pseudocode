/*
 * XREFs of ?ShouldNotify@CInteractionTracker2@@AEAA_NUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18021EBC4
 * Callers:
 *     ?SendPendingCallbacks@CInteractionTracker2@@AEAAXXZ @ 0x1801E0DB0 (-SendPendingCallbacks@CInteractionTracker2@@AEAAXXZ.c)
 *     ?NotifyRequestIgnored@CInteractionTracker2@@AEAAXH@Z @ 0x180274550 (-NotifyRequestIgnored@CInteractionTracker2@@AEAAXH@Z.c)
 *     ?SendValuesChangedCallbackIfNecessary@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@M_N@Z @ 0x1802760A8 (-SendValuesChangedCallbackIfNecessary@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@M_N@Z.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18010BE20 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 */

char __fastcall CInteractionTracker2::ShouldNotify(CNotificationResource *a1)
{
  int v1; // edx
  __int64 v2; // rcx
  char v3; // r8
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx

  if ( !CNotificationResource::ShouldNotify(a1) )
    return 0;
  v3 = 1;
  if ( *(_DWORD *)(v2 + 900) != 1 )
    return 0;
  v4 = (unsigned int)(v1 - 23);
  if ( (unsigned int)v4 > 0x32 )
    return 0;
  v5 = 0x4080000000001LL;
  if ( !_bittest64(&v5, v4) )
    return 0;
  return v3;
}
