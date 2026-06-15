/*
 * XREFs of ?ReloadVolumeState@CVolumeHardware@@MEAAXXZ @ 0x180119550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CVolumeHardware::ReloadVolumeState(CVolumeHardware *this)
{
  CVolumeHardware::ReadChannelLevelsFromHardware(this);
}
