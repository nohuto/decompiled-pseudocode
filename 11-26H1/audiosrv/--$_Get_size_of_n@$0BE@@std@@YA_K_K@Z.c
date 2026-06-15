/*
 * XREFs of ??$_Get_size_of_n@$0BE@@std@@YA_K_K@Z @ 0x1800A9D7C
 * Callers:
 *     ?_Clear_and_reserve_geometric@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAX_K@Z @ 0x1800A9CC0 (-_Clear_and_reserve_geometric@-$vector@UAudioEffectState@CProcessingModeParameters@@V-$allocator.c)
 *     ??$_Emplace_reallocate@UAudioEffectState@CProcessingModeParameters@@@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAPEAUAudioEffectState@CProcessingModeParameters@@QEAU23@$$QEAU23@@Z @ 0x1800D3E58 (--$_Emplace_reallocate@UAudioEffectState@CProcessingModeParameters@@@-$vector@UAudioEffectState@.c)
 *     ??$_Emplace_reallocate@AEBU_tagpropertykey@@@?$vector@U_tagpropertykey@@V?$allocator@U_tagpropertykey@@@std@@@std@@AEAAPEAU_tagpropertykey@@QEAU2@AEBU2@@Z @ 0x18014E650 (--$_Emplace_reallocate@AEBU_tagpropertykey@@@-$vector@U_tagpropertykey@@V-$allocator@U_tagproper.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800A9EA0 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<20>(unsigned __int64 a1)
{
  if ( a1 > 0xCCCCCCCCCCCCCCCLL )
    std::_Throw_bad_array_new_length();
  return 20 * a1;
}
