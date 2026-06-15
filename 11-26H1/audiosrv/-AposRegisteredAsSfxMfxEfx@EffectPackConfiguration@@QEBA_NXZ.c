/*
 * XREFs of ?AposRegisteredAsSfxMfxEfx@EffectPackConfiguration@@QEBA_NXZ @ 0x18007F9A0
 * Callers:
 *     ?DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ @ 0x1800AEE64 (-DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x18013C178 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJAEAV-$basic_string@GU-$char_traits@G@std@.c)
 *     ?CreateGlobalEffectPackConfiguration@EffectPackConfiguration@@SAJU_GUID@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x18014ABF4 (-CreateGlobalEffectPackConfiguration@EffectPackConfiguration@@SAJU_GUID@@AEAV-$shared_ptr@$$CBUE.c)
 * Callees:
 *     <none>
 */

char __fastcall EffectPackConfiguration::AposRegisteredAsSfxMfxEfx(EffectPackConfiguration *this)
{
  char result; // al

  result = 0;
  if ( *((_DWORD *)this + 328)
    || *((_DWORD *)this + 336)
    || *((_DWORD *)this + 344)
    || *((_DWORD *)this + 352)
    || *((_DWORD *)this + 360) )
  {
    return 1;
  }
  return result;
}
