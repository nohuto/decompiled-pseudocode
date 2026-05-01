/*
 * XREFs of ?StaticKGLSettingsRegistryChangeNotificationCallback@BroadcastDVRComponent@@CAXPEAXE@Z @ 0x18021AC80
 * Callers:
 *     <none>
 * Callees:
 *     ?BroadcastDVRComponent_OneSettingsKGLDataNotification_OnEntry@GameDVRTraceProvider@@SAXXZ @ 0x18021ACA4 (-BroadcastDVRComponent_OneSettingsKGLDataNotification_OnEntry@GameDVRTraceProvider@@SAXXZ.c)
 */

void __fastcall BroadcastDVRComponent::StaticKGLSettingsRegistryChangeNotificationCallback(BroadcastDVRComponent *a1)
{
  GameDVRTraceProvider::BroadcastDVRComponent_OneSettingsKGLDataNotification_OnEntry();
  BroadcastDVRComponent::KGLSettingsRegistryChangeNotificationCallback(a1);
}
