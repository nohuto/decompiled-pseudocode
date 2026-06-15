/*
 * XREFs of ?UsePostVolumeLoopback@CAudioStream@@UEAA_NXZ @ 0x180114400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAudioStream::UsePostVolumeLoopback(CAudioStream *this)
{
  return *((_BYTE *)this + 600);
}
