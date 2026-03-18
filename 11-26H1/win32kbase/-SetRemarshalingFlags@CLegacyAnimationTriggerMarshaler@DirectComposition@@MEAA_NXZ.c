/*
 * XREFs of ?SetRemarshalingFlags@CLegacyAnimationTriggerMarshaler@DirectComposition@@MEAA_NXZ @ 0x14023FB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CLegacyAnimationTriggerMarshaler::SetRemarshalingFlags(
        DirectComposition::CLegacyAnimationTriggerMarshaler *this)
{
  return (*((_DWORD *)this + 4) & 0x40) != 0;
}
