/*
 * XREFs of ?StaticKGLSettingsRegistryChangeNotificationCallback@BroadcastDVRComponent@@CAXPEAXE@Z @ 0x180229A60
 * Callers:
 *     <none>
 * Callees:
 *     ?BroadcastDVRComponent_OneSettingsKGLDataNotification_OnEntry@GameDVRTraceProvider@@SAXXZ @ 0x180229A84 (-BroadcastDVRComponent_OneSettingsKGLDataNotification_OnEntry@GameDVRTraceProvider@@SAXXZ.c)
 */

void __fastcall BroadcastDVRComponent::StaticKGLSettingsRegistryChangeNotificationCallback(BroadcastDVRComponent *a1)
{
  GameDVRTraceProvider::BroadcastDVRComponent_OneSettingsKGLDataNotification_OnEntry();
  BroadcastDVRComponent::KGLSettingsRegistryChangeNotificationCallback(a1);
}
