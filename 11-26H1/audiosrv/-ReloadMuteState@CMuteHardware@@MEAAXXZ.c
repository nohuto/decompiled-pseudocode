/*
 * XREFs of ?ReloadMuteState@CMuteHardware@@MEAAXXZ @ 0x180109500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMuteHardware::ReloadMuteState(CMuteHardware *this)
{
  CMuteHardware::GetMuteValue(this, (int *)this + 6);
}
