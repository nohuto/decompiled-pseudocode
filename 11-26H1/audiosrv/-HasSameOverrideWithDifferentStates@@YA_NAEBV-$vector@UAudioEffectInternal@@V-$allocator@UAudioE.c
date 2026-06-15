/*
 * XREFs of ?HasSameOverrideWithDifferentStates@@YA_NAEBV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBV?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@2@1@Z @ 0x1800AA3F4
 * Callers:
 *     ?CompareStreamingEffectsOverrideProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x180070320 (-CompareStreamingEffectsOverrideProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProc.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?FilterSettableEffectsOverride@@YAJAEBV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBV?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@2@AEAV32@@Z @ 0x1800AA57C (-FilterSettableEffectsOverride@@YAJAEBV-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectI.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall HasSameOverrideWithDifferentStates(__int64 a1, __int64 a2, __int64 a3)
{
  void *v5; // rcx
  __int128 *i; // r9
  int v7; // r11d
  __int64 j; // rax
  __int64 v9; // rdx
  __int128 v11; // [rsp+20h] [rbp-50h] BYREF
  __int64 v12; // [rsp+30h] [rbp-40h]
  __int128 v13; // [rsp+38h] [rbp-38h] BYREF
  __int64 v14; // [rsp+48h] [rbp-28h]
  __int128 v15; // [rsp+50h] [rbp-20h]
  int v16; // [rsp+60h] [rbp-10h]

  v13 = 0LL;
  v14 = 0LL;
  FilterSettableEffectsOverride(a1, a2, &v13);
  v11 = 0LL;
  v12 = 0LL;
  FilterSettableEffectsOverride(a1, a3, &v11);
  v5 = (void *)v13;
  for ( i = (__int128 *)v13; i != *((__int128 **)&v13 + 1); i = (__int128 *)((char *)i + 20) )
  {
    v15 = *i;
    v7 = *((_DWORD *)i + 4);
    v16 = v7;
    for ( j = v11; j != *((_QWORD *)&v11 + 1); j += 20LL )
    {
      v9 = v15 - *(_QWORD *)j;
      if ( (_QWORD)v15 == *(_QWORD *)j )
        v9 = *((_QWORD *)&v15 + 1) - *(_QWORD *)(j + 8);
      if ( !v9 && v7 != *(_DWORD *)(j + 16) )
        break;
    }
    if ( j != *((_QWORD *)&v11 + 1) )
    {
      if ( (_QWORD)v11 )
      {
        std::_Deallocate<16>((void *)v11, (struct std::nothrow_t *)(4 * ((v12 - (__int64)v11) >> 2)));
        v11 = 0LL;
        v12 = 0LL;
        v5 = (void *)v13;
      }
      if ( v5 )
        std::_Deallocate<16>(v5, (struct std::nothrow_t *)(4 * ((v14 - (__int64)v5) >> 2)));
      return 1;
    }
  }
  if ( (_QWORD)v11 )
  {
    std::_Deallocate<16>((void *)v11, (struct std::nothrow_t *)(4 * ((v12 - (__int64)v11) >> 2)));
    v11 = 0LL;
    v12 = 0LL;
    v5 = (void *)v13;
  }
  if ( v5 )
    std::_Deallocate<16>(v5, (struct std::nothrow_t *)(4 * ((v14 - (__int64)v5) >> 2)));
  return 0;
}
