/*
 * XREFs of ?MarkSystemEffectsForResolution@EffectPack@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x180008768
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x1800121EC (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@_N@Z @ 0x18013DA80 (-SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings.c)
 * Callees:
 *     ?MarkAsNeedsResolution@SystemEffectDescriptor@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x18000881C (-MarkAsNeedsResolution@SystemEffectDescriptor@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x180008980 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 */

_BYTE *__fastcall EffectPack::MarkSystemEffectsForResolution(__int64 a1, unsigned int a2)
{
  int *v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  _BYTE *result; // rax
  _DWORD v12[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v13[32]; // [rsp+28h] [rbp-20h] BYREF

  v12[0] = 0;
  v12[1] = 1;
  v3 = v12;
  v4 = a1 + 1440;
  v5 = a1 + 1456;
  v6 = a1 + 1472;
  do
  {
    v7 = *v3;
    v8 = gsl::span<SystemEffectDescriptor,-1>::operator[](v4, v7);
    SystemEffectDescriptor::MarkAsNeedsResolution(v8, a2);
    v9 = gsl::span<SystemEffectDescriptor,-1>::operator[](v5, v7);
    SystemEffectDescriptor::MarkAsNeedsResolution(v9, a2);
    v10 = gsl::span<SystemEffectDescriptor,-1>::operator[](v6, v7);
    SystemEffectDescriptor::MarkAsNeedsResolution(v10, a2);
    result = v13;
    ++v3;
  }
  while ( v3 != (int *)v13 );
  return result;
}
