/*
 * XREFs of ??$emplace@AEA_KPEAUAudioStateMonitor@@@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@_N@1@AEA_K$$QEAPEAUAudioStateMonitor@@@Z @ 0x1800295D8
 * Callers:
 *     ?RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x180005674 (-RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STRE.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180015160 (--2@YAPEAX_K@Z.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x1800293A0 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KV-$unique_ptr@UAudioStateMonitor@@U-$default_delete@U.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18002DF1C (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$unique_ptr@UAudioStateMo.c)
 *     ??R?$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z @ 0x180037E00 (--R-$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@IEBA_K_K@Z @ 0x18003AA80 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180049180 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@_KV-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UA.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>::emplace<unsigned __int64 &,AudioStateMonitor *>(
        float *a1,
        __int64 a2,
        unsigned __int8 *a3,
        _QWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  float v14; // xmm0_4
  __int64 v15; // rcx
  float v16; // xmm1_4
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r14
  _QWORD *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD *v25; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v26; // [rsp+28h] [rbp-40h]
  __int64 v27; // [rsp+30h] [rbp-38h] BYREF
  __int64 v28; // [rsp+70h] [rbp+8h]

  v28 = std::_Conditionally_enabled_hash<unsigned __int64,1>::operator()(a3);
  v8 = *((_QWORD *)a1 + 3);
  v9 = *(_QWORD *)(v8 + 16 * (*((_QWORD *)a1 + 6) & v28) + 8);
  v10 = *((_QWORD *)a1 + 1);
  if ( v9 == v10 )
  {
LABEL_7:
    if ( *((_QWORD *)a1 + 2) == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("unordered_map/set too long");
    v25 = a1 + 2;
    v12 = operator new(0x20uLL);
    v26 = v12;
    v12[2] = *(_QWORD *)a3;
    v12[3] = *a4;
    v13 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v13 < 0 )
      v14 = (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1))
          + (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1));
    else
      v14 = (float)(int)v13;
    v15 = *((_QWORD *)a1 + 7);
    if ( v15 < 0 )
    {
      v17 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v15 >> 1);
      v16 = (float)(int)v17 + (float)(int)v17;
    }
    else
    {
      v16 = (float)(int)v15;
    }
    if ( (float)(v14 / v16) <= *a1 )
    {
      v19 = v28;
    }
    else
    {
      v18 = std::_Hash<std::_Umap_traits<std::wstring,CRenderEndpointDuckingManagerContext,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>,0>>::_Desired_grow_bucket_count(a1);
      std::_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>::_Forced_rehash(
        a1,
        v18);
      v19 = v28;
      v10 = *std::_Hash<std::_Umap_traits<unsigned __int64,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>,0>>::_Find_last<unsigned __int64>(
               a1,
               &v27,
               v12 + 2,
               v28);
    }
    v26 = 0LL;
    v20 = *(_QWORD **)(v10 + 8);
    ++*((_QWORD *)a1 + 2);
    *v12 = v10;
    v12[1] = v20;
    *v20 = v12;
    *(_QWORD *)(v10 + 8) = v12;
    v21 = 2 * (v19 & *((_QWORD *)a1 + 6));
    v22 = *((_QWORD *)a1 + 3);
    v23 = *(_QWORD *)(v22 + 16 * (v19 & *((_QWORD *)a1 + 6)));
    if ( v23 == *((_QWORD *)a1 + 1) )
    {
      *(_QWORD *)(v22 + 16 * (v19 & *((_QWORD *)a1 + 6))) = v12;
LABEL_23:
      *(_QWORD *)(v22 + 8 * v21 + 8) = v12;
      goto LABEL_24;
    }
    if ( v23 == v10 )
    {
      *(_QWORD *)(v22 + 16 * (v19 & *((_QWORD *)a1 + 6))) = v12;
    }
    else if ( *(_QWORD **)(v22 + 16 * (v19 & *((_QWORD *)a1 + 6)) + 8) == v20 )
    {
      goto LABEL_23;
    }
LABEL_24:
    *(_QWORD *)a2 = v12;
    *(_BYTE *)(a2 + 8) = 1;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>,void *>>>(&v25);
    return a2;
  }
  v11 = *(_QWORD *)(v8 + 16 * (*((_QWORD *)a1 + 6) & v28));
  while ( *(_QWORD *)a3 != *(_QWORD *)(v9 + 16) )
  {
    if ( v9 == v11 )
    {
      v10 = v9;
      goto LABEL_7;
    }
    v9 = *(_QWORD *)(v9 + 8);
  }
  *(_QWORD *)a2 = v9;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
