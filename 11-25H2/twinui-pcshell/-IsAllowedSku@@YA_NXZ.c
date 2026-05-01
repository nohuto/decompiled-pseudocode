/*
 * XREFs of ?IsAllowedSku@@YA_NXZ @ 0x1800BB138
 * Callers:
 *     ?ProcessCommand@BroadcastDVRComponent@@UEAAJW4_BCASTDVR_COMMAND@@@Z @ 0x1800B0EE0 (-ProcessCommand@BroadcastDVRComponent@@UEAAJW4_BCASTDVR_COMMAND@@@Z.c)
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800B0FCC (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 *     ?SubscribeToServices@BroadcastDVRComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800BADC0 (-SubscribeToServices@BroadcastDVRComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?EnterBroadcastMode@BroadcastDVRComponent@@UEAAJE@Z @ 0x180315A00 (-EnterBroadcastMode@BroadcastDVRComponent@@UEAAJE@Z.c)
 *     ?SetCameraCaptureState@BroadcastDVRComponent@@UEAAJPEAUHWND__@@EE@Z @ 0x180318490 (-SetCameraCaptureState@BroadcastDVRComponent@@UEAAJPEAUHWND__@@EE@Z.c)
 *     ?SetMicrophoneCaptureState@BroadcastDVRComponent@@UEAAJPEAUHWND__@@EE@Z @ 0x1803185D0 (-SetMicrophoneCaptureState@BroadcastDVRComponent@@UEAAJPEAUHWND__@@EE@Z.c)
 * Callees:
 *     ?IsActiveSessionCountLimited@@YA_NXZ @ 0x1800A726C (-IsActiveSessionCountLimited@@YA_NXZ.c)
 *     ?IsWindowsServer@@YA_NXZ @ 0x18022C87C (-IsWindowsServer@@YA_NXZ.c)
 */

char IsAllowedSku(void)
{
  char v0; // bl

  v0 = 0;
  if ( !IsWindowsServer() || !IsActiveSessionCountLimited() )
    return 1;
  return v0;
}
