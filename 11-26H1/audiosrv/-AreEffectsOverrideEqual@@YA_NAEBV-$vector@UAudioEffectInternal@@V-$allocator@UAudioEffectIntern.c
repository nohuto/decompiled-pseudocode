/*
 * XREFs of ?AreEffectsOverrideEqual@@YA_NAEBV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBV?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@2@1@Z @ 0x1800FA874
 * Callers:
 *     ?CompareStreamingEffectsOverrideProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x180070320 (-CompareStreamingEffectsOverrideProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProc.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?FilterSettableEffectsOverride@@YAJAEBV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBV?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@2@AEAV32@@Z @ 0x1800AA57C (-FilterSettableEffectsOverride@@YAJAEBV-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectI.c)
 */

char __fastcall AreEffectsOverrideEqual(_QWORD **a1, __m128i **a2, __m128i **a3, const char *a4)
{
  const char *v6; // r9
  void *v7; // r8
  __int128 *i; // rcx
  int v9; // r11d
  __int64 j; // rax
  __int64 v11; // rdx
  __int128 v13; // [rsp+20h] [rbp-50h] BYREF
  __int64 v14; // [rsp+30h] [rbp-40h]
  __int128 v15; // [rsp+38h] [rbp-38h] BYREF
  __int64 v16; // [rsp+48h] [rbp-28h]
  __int128 v17; // [rsp+50h] [rbp-20h]
  int v18; // [rsp+60h] [rbp-10h]

  v15 = 0LL;
  v16 = 0LL;
  FilterSettableEffectsOverride(a1, a2, (__int64)&v15, a4);
  v13 = 0LL;
  v14 = 0LL;
  FilterSettableEffectsOverride(a1, a3, (__int64)&v13, v6);
  v7 = (void *)v15;
  if ( *((_QWORD *)&v15 + 1) - (_QWORD)v15 == *((_QWORD *)&v13 + 1) - (_QWORD)v13 )
  {
    for ( i = (__int128 *)v15; i != *((__int128 **)&v15 + 1); i = (__int128 *)((char *)i + 20) )
    {
      v17 = *i;
      v9 = *((_DWORD *)i + 4);
      v18 = v9;
      for ( j = v13; j != *((_QWORD *)&v13 + 1); j += 20LL )
      {
        v11 = v17 - *(_QWORD *)j;
        if ( (_QWORD)v17 == *(_QWORD *)j )
          v11 = *((_QWORD *)&v17 + 1) - *(_QWORD *)(j + 8);
        if ( !v11 && v9 == *(_DWORD *)(j + 16) )
          break;
      }
      if ( j == *((_QWORD *)&v13 + 1) )
        goto LABEL_12;
    }
    if ( (_QWORD)v13 )
    {
      std::_Deallocate<16>((void *)v13, (struct std::nothrow_t *)(4 * ((v14 - (__int64)v13) >> 2)));
      v13 = 0LL;
      v14 = 0LL;
      v7 = (void *)v15;
    }
    if ( v7 )
      std::_Deallocate<16>(v7, (struct std::nothrow_t *)(4 * ((v16 - (__int64)v7) >> 2)));
    return 1;
  }
  else
  {
LABEL_12:
    if ( (_QWORD)v13 )
    {
      std::_Deallocate<16>((void *)v13, (struct std::nothrow_t *)(4 * ((v14 - (__int64)v13) >> 2)));
      v13 = 0LL;
      v7 = (void *)v15;
      v14 = 0LL;
    }
    if ( v7 )
      std::_Deallocate<16>(v7, (struct std::nothrow_t *)(4 * ((v16 - (__int64)v7) >> 2)));
    return 0;
  }
}
