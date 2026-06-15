/*
 * XREFs of ?AddSpatialAudioProcessingSupport@EffectPack@@AEAAJXZ @ 0x18007FA60
 * Callers:
 *     ?AddOsProcessingModeSupport@EffectPack@@AEAAJXZ @ 0x180090378 (-AddOsProcessingModeSupport@EffectPack@@AEAAJXZ.c)
 * Callees:
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800089DC (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x18000E2D8 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EffectPack::AddSpatialAudioProcessingSupport(CEndpointCharacteristics **this)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !(*(unsigned int (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)this[198] + 56LL))(this[198]) )
  {
    v2 = EffectPack::AddSpatialAudioProcessingSupportForConnector((EffectPack *)this, 0);
    if ( v2 < 0 )
    {
      v3 = 2545LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v2);
      return (unsigned int)v2;
    }
    if ( (unsigned int)CEndpointCharacteristics::HasHardwareAudioEngine(this[198]) )
    {
      v2 = EffectPack::AddSpatialAudioProcessingSupportForConnector((EffectPack *)this, 1u);
      if ( v2 < 0 )
      {
        v3 = 2549LL;
        goto LABEL_4;
      }
    }
  }
  return 0LL;
}
