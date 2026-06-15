/*
 * XREFs of ?IsLegacyVssRelevant@CSpatialAudioTech@@UEBA_NXZ @ 0x180091C90
 * Callers:
 *     <none>
 * Callees:
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800B5998 (IsGetDefaultSpatialRenderingModePresent.c)
 *     ?IsVssApoAvailable@EffectPack@@SA_NXZ @ 0x18013B0E0 (-IsVssApoAvailable@EffectPack@@SA_NXZ.c)
 */

char __fastcall CSpatialAudioTech::IsLegacyVssRelevant(CSpatialAudioTech *this, __int64 a2, __int64 a3, __int64 a4)
{
  bool IsVssApoAvailable; // bl

  IsVssApoAvailable = 0;
  if ( byte_1801D795A )
    return byte_1801D795B;
  byte_1801D795A = 1;
  if ( !(unsigned __int8)IsGetDefaultSpatialRenderingModePresent(this, a2, a3, a4)
    || (unsigned int)IsVirtualSurroundAllowedOnCurrentPlatform() )
  {
    IsVssApoAvailable = EffectPack::IsVssApoAvailable();
    byte_1801D795B = IsVssApoAvailable;
  }
  else
  {
    byte_1801D795B = 0;
  }
  return IsVssApoAvailable;
}
