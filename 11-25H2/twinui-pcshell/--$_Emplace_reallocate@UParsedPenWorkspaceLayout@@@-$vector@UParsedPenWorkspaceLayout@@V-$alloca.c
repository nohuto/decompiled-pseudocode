/*
 * XREFs of ??$_Emplace_reallocate@UParsedPenWorkspaceLayout@@@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@AEAAPEAUParsedPenWorkspaceLayout@@QEAU2@$$QEAU2@@Z @ 0x1803E8050
 * Callers:
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1803E8780 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0II@@std@@YA_K_K@Z @ 0x18031F990 (--$_Get_size_of_n@$0II@@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@YAXPEAUParsedPenWorkspaceLayout@@QEAU1@AEAV?$allocator@UParsedPenWorkspaceLayout@@@0@@Z @ 0x1803E8014 (--$_Destroy_range@V-$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@YAXPEAUParsedPenWorkspaceL.c)
 *     ??$_Uninitialized_move@PEAUParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@YAPEAUParsedPenWorkspaceLayout@@QEAU1@0PEAU1@AEAV?$allocator@UParsedPenWorkspaceLayout@@@0@@Z @ 0x1803E81F4 (--$_Uninitialized_move@PEAUParsedPenWorkspaceLayout@@V-$allocator@UParsedPenWorkspaceLayout@@@st.c)
 *     ??$construct@UParsedPenWorkspaceLayout@@U1@@?$_Default_allocator_traits@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@SAXAEAV?$allocator@UParsedPenWorkspaceLayout@@@1@QEAUParsedPenWorkspaceLayout@@$$QEAU3@@Z @ 0x1803E8268 (--$construct@UParsedPenWorkspaceLayout@@U1@@-$_Default_allocator_traits@V-$allocator@UParsedPenW.c)
 */

char *__fastcall std::vector<ParsedPenWorkspaceLayout>::_Emplace_reallocate<ParsedPenWorkspaceLayout>(
        ParsedPenWorkspaceLayout **a1,
        ParsedPenWorkspaceLayout *a2,
        __int64 a3)
{
  __int64 v5; // r14
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  __int64 v12; // rcx
  ParsedPenWorkspaceLayout *v13; // rdi
  char *v14; // r14
  ParsedPenWorkspaceLayout *v15; // rdx
  ParsedPenWorkspaceLayout *v16; // rcx
  void *v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+20h] [rbp-48h]
  ParsedPenWorkspaceLayout *v20; // [rsp+70h] [rbp+8h]

  v5 = (a2 - *a1) / 136;
  v6 = 0xF0F0F0F0F0F0F0F1uLL * ((a1[1] - *a1) >> 3);
  v7 = 0x1E1E1E1E1E1E1E1LL;
  if ( v6 == 0x1E1E1E1E1E1E1E1LL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = 0xF0F0F0F0F0F0F0F1uLL * ((a1[2] - *a1) >> 3);
  v10 = v9 >> 1;
  if ( v9 <= 0x1E1E1E1E1E1E1E1LL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v8;
  }
  size_of = std::_Get_size_of_n<136>(v7);
  v13 = (ParsedPenWorkspaceLayout *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (char *)v13 + 136 * v5;
  try
  {
    std::_Default_allocator_traits<std::allocator<ParsedPenWorkspaceLayout>>::construct<ParsedPenWorkspaceLayout,ParsedPenWorkspaceLayout>(
      v12,
      v14,
      a3);
    v20 = (ParsedPenWorkspaceLayout *)v14;
    v15 = a1[1];
    v16 = *a1;
    if ( a2 == v15 )
    {
      std::_Uninitialized_move<ParsedPenWorkspaceLayout *>(v16, v15, v13, a1, v13);
    }
    else
    {
      std::_Uninitialized_move<ParsedPenWorkspaceLayout *>(v16, a2, v13, a1, v13);
      v20 = v13;
      std::_Uninitialized_move<ParsedPenWorkspaceLayout *>(a2, a1[1], v14 + 136, a1, v19);
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<ParsedPenWorkspaceLayout>>(v20, (ParsedPenWorkspaceLayout *)(v14 + 136));
    std::_Deallocate<16,0>(v18, (const struct std::nothrow_t *)(136 * v7));
    throw;
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<ParsedPenWorkspaceLayout>>(*a1, a1[1]);
    std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)(8 * ((a1[2] - *a1) >> 3)));
  }
  *a1 = v13;
  a1[1] = (ParsedPenWorkspaceLayout *)((char *)v13 + 136 * v8);
  a1[2] = (ParsedPenWorkspaceLayout *)((char *)v13 + 136 * v7);
  return v14;
}
