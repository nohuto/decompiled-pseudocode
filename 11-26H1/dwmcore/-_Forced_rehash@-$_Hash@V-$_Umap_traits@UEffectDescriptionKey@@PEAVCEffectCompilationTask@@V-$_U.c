/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18014F11C
 * Callers:
 *     ??$emplace@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@std@@_N@1@AEAUEffectDescriptionKey@@$$QEAPEAVCEffectCompilationTask@@@Z @ 0x18014EFC0 (--$emplace@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@-$_Hash@V-$_Umap_traits@UEffec.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800E8884 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_s.c)
 *     ??8EffectDescriptionKey@@QEBA_NAEBU0@@Z @ 0x18014F364 (--8EffectDescriptionKey@@QEBA_NAEBU0@@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  _QWORD *v2; // rsi
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rcx
  __int64 *v6; // r15
  __int64 v7; // rbx
  _QWORD *result; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // r15
  __int64 v12; // r14
  _QWORD *v13; // rsi
  _QWORD *v14; // r13
  _QWORD **v15; // r8
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  _QWORD *v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v20; // rcx
  __int64 v21; // r8
  _QWORD *v22; // rdx
  _QWORD *v23; // rcx

  v2 = a1;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = v2[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = v2 + 3;
  v7 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<IUnknown *>>,std::_Iterator_base0>>>::_Assign_grow(
    (__int64)(v2 + 3),
    2 * v7,
    v4);
  result = (_QWORD *)(v7 - 1);
  v2[7] = v7;
  v2[6] = v7 - 1;
  v9 = *(_QWORD **)v2[1];
  v10 = v9;
  while ( v9 != (_QWORD *)v4 )
  {
    v11 = *v6;
    v12 = 2LL * (v9[2] & v2[6]);
    v10 = (_QWORD *)*v10;
    if ( *(_QWORD *)(v11 + 16LL * (v9[2] & v2[6])) == v4 )
    {
      *(_QWORD *)(v11 + 16LL * (v9[2] & v2[6])) = v9;
      *(_QWORD *)(v11 + 8 * v12 + 8) = v9;
    }
    else
    {
      v13 = *(_QWORD **)(v11 + 16LL * (v9[2] & v2[6]) + 8);
      result = (_QWORD *)EffectDescriptionKey::operator==(v9 + 2, v13 + 2);
      if ( (_BYTE)result )
      {
        v18 = (_QWORD *)*v13;
        if ( (_QWORD *)*v13 != v9 )
        {
          v19 = (_QWORD *)v9[1];
          *v19 = v10;
          v20 = (_QWORD *)v10[1];
          *v20 = v18;
          result = (_QWORD *)v18[1];
          *result = v9;
          v18[1] = v20;
          v10[1] = v19;
          v9[1] = result;
        }
        *(_QWORD *)(v11 + 8 * v12 + 8) = v9;
      }
      else
      {
        v14 = v13;
        do
        {
          v15 = (_QWORD **)(v13 + 1);
          if ( *(_QWORD **)(v11 + 8 * v12) == v14 )
          {
            v16 = (_QWORD *)v9[1];
            *v16 = v10;
            result = (_QWORD *)v10[1];
            *result = v13;
            v17 = *v15;
            *v17 = v9;
            *v15 = result;
            v10[1] = v16;
            v9[1] = v17;
            *(_QWORD *)(v11 + 8 * v12) = v9;
            goto LABEL_9;
          }
          v13 = *v15;
          v14 = *v15;
        }
        while ( !(unsigned __int8)EffectDescriptionKey::operator==(v9 + 2, *v15 + 2) );
        v21 = *v13;
        v22 = (_QWORD *)v9[1];
        *v22 = v10;
        v23 = (_QWORD *)v10[1];
        *v23 = v21;
        result = *(_QWORD **)(v21 + 8);
        *result = v9;
        *(_QWORD *)(v21 + 8) = v23;
        v10[1] = v22;
        v9[1] = result;
      }
LABEL_9:
      v2 = a1;
    }
    v9 = v10;
    v6 = v2 + 3;
  }
  return result;
}
