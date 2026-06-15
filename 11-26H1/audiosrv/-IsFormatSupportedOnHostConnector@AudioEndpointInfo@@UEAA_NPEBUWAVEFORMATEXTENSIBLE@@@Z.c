/*
 * XREFs of ?IsFormatSupportedOnHostConnector@AudioEndpointInfo@@UEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x180143660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall AudioEndpointInfo::IsFormatSupportedOnHostConnector(
        EffectPack **this,
        const struct WAVEFORMATEXTENSIBLE *a2)
{
  return EffectPack::IsFormatSupportedOnHostConnector(this[1], a2);
}
