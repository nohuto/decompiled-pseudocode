/*
 * XREFs of ?GetDismissableClients@LightDismissProcessor@@AEAA?AV?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@PEAUHitTestResult@@@Z @ 0x18005188C
 * Callers:
 *     ?OnHitTest@LightDismissProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180051800 (-OnHitTest@LightDismissProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 *     ?_Buy_nonzero@?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@AEAAX_K@Z @ 0x1800933F0 (-_Buy_nonzero@-$vector@PEAVLightDismissClientProxy@@V-$allocator@PEAVLightDismissClientProxy@@@s.c)
 *     ??$_Find_vectorized@QEAVInputSite@@PEAV1@@std@@YAPEBQEAVInputSite@@QEBQEAV1@0QEAV1@@Z @ 0x1800A9658 (--$_Find_vectorized@QEAVInputSite@@PEAV1@@std@@YAPEBQEAVInputSite@@QEBQEAV1@0QEAV1@@Z.c)
 *     ??$GetAttachedObject@UILightDismissClientProxy@@VLightDismissClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VLightDismissClientProxy@@@WRL@Microsoft@@XZ @ 0x1801601A0 (--$GetAttachedObject@UILightDismissClientProxy@@VLightDismissClientProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ??1?$_Tidy_guard@V?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@@std@@QEAA@XZ @ 0x180160384 (--1-$_Tidy_guard@V-$vector@PEAVLightDismissClientProxy@@V-$allocator@PEAVLightDismissClientProxy.c)
 *     ?erase@?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVLightDismissClientProxy@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVLightDismissClientProxy@@@std@@@std@@@2@@Z @ 0x18016049C (-erase@-$vector@PEAVLightDismissClientProxy@@V-$allocator@PEAVLightDismissClientProxy@@@std@@@st.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LightDismissProcessor::GetDismissableClients(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // rdi
  void *v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  __int128 v14; // [rsp+28h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-8h]
  __int64 v16; // [rsp+70h] [rbp+30h] BYREF
  __int64 v17; // [rsp+78h] [rbp+38h] BYREF

  v17 = a2;
  v16 = a1;
  v14 = 0LL;
  v15 = 0LL;
  if ( (qword_180254000 - (__int64)LightDismissProcessor::s_clients) >> 3 )
  {
    std::vector<LightDismissClientProxy *>::_Buy_nonzero(&v14);
    v6 = v14;
    v7 = qword_180254000;
    v8 = LightDismissProcessor::s_clients;
    std::_Copy_memmove<enum _Button *,enum _Button *>(LightDismissProcessor::s_clients, qword_180254000, (void *)v14);
    *((_QWORD *)&v14 + 1) = v6 + 8 * ((v7 - (__int64)v8) >> 3);
    v17 = 0LL;
    std::_Tidy_guard<std::vector<LightDismissClientProxy *>>::~_Tidy_guard<std::vector<LightDismissClientProxy *>>(&v17);
    if ( (_QWORD)v14 != *((_QWORD *)&v14 + 1) )
    {
      if ( a3 )
      {
        v9 = *(_QWORD *)(a3 + 104);
        v10 = *(_QWORD **)(v9 - 24);
        v11 = *(_QWORD **)(v9 - 16);
        while ( v10 != v11 )
        {
          InputSite::GetAttachedObject<ILightDismissClientProxy,LightDismissClientProxy>(*v10, &v17);
          v12 = v17;
          if ( v17 )
          {
            v13 = std::_Find_vectorized<InputSite * const,InputSite *>(v14, *((_QWORD *)&v14 + 1));
            std::vector<LightDismissClientProxy *>::erase(&v14, &v16, v13);
          }
          if ( v12 )
          {
            v17 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)(v12 + 16) + 8LL))(v12 + 16);
          }
          ++v10;
        }
      }
    }
  }
  *(_OWORD *)a2 = v14;
  *(_QWORD *)(a2 + 16) = v15;
  return a2;
}
