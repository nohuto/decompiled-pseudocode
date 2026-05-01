/*
 * XREFs of ?EnterBroadcastMode@BroadcastDVRComponent@@UEAAJE@Z @ 0x180311BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAllowedSku@@YA_NXZ @ 0x1800C4E4C (-IsAllowedSku@@YA_NXZ.c)
 *     ?IsMRPInstalled@BroadcastDVRComponent@@AEAA_NXZ @ 0x1800C59EC (-IsMRPInstalled@BroadcastDVRComponent@@AEAA_NXZ.c)
 *     ?BroadcastDVRComponent_EnterBroadcastMode@GameDVRTraceProvider@@SAXPEBG@Z @ 0x1803110D8 (-BroadcastDVRComponent_EnterBroadcastMode@GameDVRTraceProvider@@SAXPEBG@Z.c)
 */

__int64 __fastcall BroadcastDVRComponent::EnterBroadcastMode(BroadcastDVRComponent *this, char a2)
{
  BroadcastDVRComponent *v4; // rcx
  const unsigned __int16 *v5; // rcx

  if ( *((_BYTE *)this + 432) && IsAllowedSku() && BroadcastDVRComponent::IsMRPInstalled(v4) )
  {
    v5 = L"Enabled";
    if ( !a2 )
      v5 = L"Disabled";
    GameDVRTraceProvider::BroadcastDVRComponent_EnterBroadcastMode(v5);
    *((_BYTE *)this + 448) = 1;
    *((_BYTE *)this + 447) = a2 != 0;
  }
  return 0LL;
}
