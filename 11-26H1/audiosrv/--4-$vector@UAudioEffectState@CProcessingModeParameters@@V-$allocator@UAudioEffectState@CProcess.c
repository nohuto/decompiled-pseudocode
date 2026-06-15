/*
 * XREFs of ??4?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180064A68
 * Callers:
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@PEBUMODE_PARAMS@@PEAUIAudioStreamInfo@@AEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x1800537B0 (-DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL.c)
 *     ?UpdatePMPStreamingEffectsOverride@CAudioStream@@AEAAXU_GUID@@H@Z @ 0x1800D61BC (-UpdatePMPStreamingEffectsOverride@CAudioStream@@AEAAXU_GUID@@H@Z.c)
 * Callees:
 *     ?_Clear_and_reserve_geometric@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAX_K@Z @ 0x1800A9CC0 (-_Clear_and_reserve_geometric@-$vector@UAudioEffectState@CProcessingModeParameters@@V-$allocator.c)
 *     ??$_Copy_memmove_n@PEAUAudioEffectState@CProcessingModeParameters@@PEAU12@@std@@YAPEAUAudioEffectState@CProcessingModeParameters@@PEAU12@_K0@Z @ 0x1800AE254 (--$_Copy_memmove_n@PEAUAudioEffectState@CProcessingModeParameters@@PEAU12@@std@@YAPEAUAudioEffec.c)
 */

char **__fastcall std::vector<CProcessingModeParameters::AudioEffectState>::operator=(char **a1, char **a2)
{
  char *v3; // r15
  char *v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  char *v7; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    v4 = *a1;
    v5 = 0xCCCCCCCCCCCCCCCDuLL * ((a2[1] - *a2) >> 2);
    if ( v5 > 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - *a1) >> 2) )
    {
      std::vector<CProcessingModeParameters::AudioEffectState>::_Clear_and_reserve_geometric(
        a1,
        0xCCCCCCCCCCCCCCCDuLL * ((a2[1] - *a2) >> 2));
      v4 = *a1;
    }
    else
    {
      v6 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - v4) >> 2);
      if ( v5 > v6 )
      {
        std::_Copy_memmove_n<CProcessingModeParameters::AudioEffectState *,CProcessingModeParameters::AudioEffectState *>(v3);
        v4 = a1[1];
        v7 = &v3[20 * v6];
        v5 -= v6;
        goto LABEL_5;
      }
    }
    v7 = v3;
LABEL_5:
    std::_Copy_memmove_n<CProcessingModeParameters::AudioEffectState *,CProcessingModeParameters::AudioEffectState *>(v7);
    a1[1] = &v4[20 * v5];
  }
  return a1;
}
