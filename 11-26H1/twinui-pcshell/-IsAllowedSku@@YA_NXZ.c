/*
 * XREFs of ?IsAllowedSku@@YA_NXZ @ 0x1800C4E4C
 * Callers:
 *     ?SubscribeToServices@BroadcastDVRComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800C4AE0 (-SubscribeToServices@BroadcastDVRComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800C53F0 (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 *     ?ProcessCommand@BroadcastDVRComponent@@UEAAJW4_BCASTDVR_COMMAND@@@Z @ 0x1800C5A30 (-ProcessCommand@BroadcastDVRComponent@@UEAAJW4_BCASTDVR_COMMAND@@@Z.c)
 *     ?EnterBroadcastMode@BroadcastDVRComponent@@UEAAJE@Z @ 0x180311BC0 (-EnterBroadcastMode@BroadcastDVRComponent@@UEAAJE@Z.c)
 *     ?SetCameraCaptureState@BroadcastDVRComponent@@UEAAJPEAUHWND__@@EE@Z @ 0x180314660 (-SetCameraCaptureState@BroadcastDVRComponent@@UEAAJPEAUHWND__@@EE@Z.c)
 *     ?SetMicrophoneCaptureState@BroadcastDVRComponent@@UEAAJPEAUHWND__@@EE@Z @ 0x1803147B0 (-SetMicrophoneCaptureState@BroadcastDVRComponent@@UEAAJPEAUHWND__@@EE@Z.c)
 * Callees:
 *     ?IsActiveSessionCountLimited@@YA_NXZ @ 0x180026C6C (-IsActiveSessionCountLimited@@YA_NXZ.c)
 *     ?IsWindowsServer@@YA_NXZ @ 0x1800C5334 (-IsWindowsServer@@YA_NXZ.c)
 */

char IsAllowedSku(void)
{
  char v0; // bl

  v0 = 0;
  if ( !IsWindowsServer() || !IsActiveSessionCountLimited() )
    return 1;
  return v0;
}
