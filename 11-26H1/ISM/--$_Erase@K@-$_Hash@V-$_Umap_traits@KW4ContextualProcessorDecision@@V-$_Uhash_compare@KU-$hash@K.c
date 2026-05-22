/*
 * XREFs of ??$_Erase@K@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x18005A808
 * Callers:
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18014FC80 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180154990 (-OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@.c)
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x180157F1C (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 *     ?RemoveContactFromBuffer@ContextualProcessorBuffer@@UEAAXK@Z @ 0x1801A7C10 (-RemoveContactFromBuffer@ContextualProcessorBuffer@@UEAAXK@Z.c)
 * Callees:
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Erase<unsigned long>(
        _QWORD *a1,
        unsigned __int8 *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r11
  __int64 *v7; // rax
  __int64 v8; // r11
  __int64 *v9; // rcx
  __int64 v10; // rdx

  v4 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()(a2);
  v5 = a1[3];
  v6 = a1[6] & v4;
  v7 = (__int64 *)a1[1];
  v8 = 2 * v6;
  v9 = *(__int64 **)(v5 + 8 * v8 + 8);
  if ( v9 == v7 )
  {
LABEL_5:
    v9 = 0LL;
  }
  else
  {
    while ( *(_DWORD *)a2 != *((_DWORD *)v9 + 4) )
    {
      if ( v9 == *(__int64 **)(v5 + 8 * v8) )
        goto LABEL_5;
      v9 = (__int64 *)v9[1];
    }
  }
  if ( !v9 )
    return 0LL;
  if ( *(__int64 **)(v5 + 8 * v8 + 8) == v9 )
  {
    if ( *(__int64 **)(v5 + 8 * v8) == v9 )
      *(_QWORD *)(v5 + 8 * v8) = v7;
    else
      v7 = (__int64 *)v9[1];
    *(_QWORD *)(v5 + 8 * v8 + 8) = v7;
  }
  else if ( *(__int64 **)(v5 + 8 * v8) == v9 )
  {
    *(_QWORD *)(v5 + 8 * v8) = *v9;
  }
  v10 = *v9;
  --a1[2];
  *(_QWORD *)v9[1] = v10;
  *(_QWORD *)(v10 + 8) = v9[1];
  std::_Deallocate<16>(v9, 24LL);
  return 1LL;
}
