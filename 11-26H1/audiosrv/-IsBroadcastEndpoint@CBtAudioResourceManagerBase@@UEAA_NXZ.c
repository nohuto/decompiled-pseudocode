/*
 * XREFs of ?IsBroadcastEndpoint@CBtAudioResourceManagerBase@@UEAA_NXZ @ 0x1800F7AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBtAudioResourceManagerBase::IsBroadcastEndpoint(CBtAudioResourceManagerBase *this)
{
  return *((_BYTE *)this + 512);
}
