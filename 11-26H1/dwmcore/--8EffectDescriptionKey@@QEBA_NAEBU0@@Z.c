/*
 * XREFs of ??8EffectDescriptionKey@@QEBA_NAEBU0@@Z @ 0x18014F364
 * Callers:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18014F11C (-_Forced_rehash@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V-$_U.c)
 *     ??$_Find_last@UEffectDescriptionKey@@@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@PEAX@std@@@1@AEBUEffectDescriptionKey@@_K@Z @ 0x18014F2D4 (--$_Find_last@UEffectDescriptionKey@@@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffect.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18021C5B4 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall EffectDescriptionKey::operator==(__int64 a1, _QWORD *a2)
{
  char v2; // bl

  v2 = 0;
  if ( *(_QWORD *)a1 == *a2 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 96LL))(*(_QWORD *)(a1 + 8), a2[1]);
    if ( !v2 )
      MicrosoftTelemetryAssertTriggeredNoArgs();
  }
  return v2;
}
