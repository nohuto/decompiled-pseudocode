/*
 * XREFs of ?UnregisterObserverClient@?$CBaseInputObserverServer@$0L@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x18013C4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeIntOnOverflow@SafeIntErrorPolicy_SafeIntException@utilities@msl@@SAXXZ @ 0x18009573C (-SafeIntOnOverflow@SafeIntErrorPolicy_SafeIntException@utilities@msl@@SAXXZ.c)
 *     ??R?$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z @ 0x1800A5514 (--R-$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800F9B48 (-find@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash_compare@_KU-$hash@.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18013BCCC (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CB_KUInputObserverClient@-$CBaseInputObserverS.c)
 *     ?GetClientId@@YA_KPEAVBamoInputObserverClientProxy@@@Z @ 0x18013C2E0 (-GetClientId@@YA_KPEAVBamoInputObserverClientProxy@@@Z.c)
 *     ?UpdateObservationState@?$CBaseInputObserverServer@$0L@@@AEAAXXZ @ 0x18013C5CC (-UpdateObservationState@-$CBaseInputObserverServer@$0L@@@AEAAXXZ.c)
 */

__int64 __fastcall CBaseInputObserverServer<11>::UnregisterObserverClient(
        __int64 a1,
        __int64 a2,
        struct BamoInputObserverClientProxy *a3)
{
  __int64 v4; // r11
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rax
  __int64 *v8; // r11
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 ClientId; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+20h] BYREF

  ClientId = GetClientId(a3);
  std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::find(
    (_QWORD *)(a1 + 160),
    &v14,
    (const unsigned __int8 *)&ClientId);
  v4 = v14;
  v5 = *(_QWORD *)(a1 + 168);
  if ( v14 != v5 )
  {
    if ( *(_DWORD *)(v14 + 32) == 4 )
    {
      v6 = *(_DWORD *)(a1 + 224);
      if ( !v6 )
        msl::utilities::SafeIntErrorPolicy_SafeIntException::SafeIntOnOverflow();
      *(_DWORD *)(a1 + 224) = v6 - 1;
    }
    v7 = std::_Conditionally_enabled_hash<unsigned __int64,1>::operator()((unsigned __int8 *)(v4 + 16));
    v9 = *(_QWORD *)(a1 + 184);
    v10 = 2 * (*(_QWORD *)(a1 + 208) & v7);
    if ( *(__int64 **)(v9 + 16 * (*(_QWORD *)(a1 + 208) & v7) + 8) == v8 )
    {
      if ( *(__int64 **)(v9 + 16 * (*(_QWORD *)(a1 + 208) & v7)) == v8 )
        *(_QWORD *)(v9 + 16 * (*(_QWORD *)(a1 + 208) & v7)) = v5;
      else
        v5 = v8[1];
      *(_QWORD *)(v9 + 8 * v10 + 8) = v5;
    }
    else if ( *(__int64 **)(v9 + 16 * (*(_QWORD *)(a1 + 208) & v7)) == v8 )
    {
      *(_QWORD *)(v9 + 16 * (*(_QWORD *)(a1 + 208) & v7)) = *v8;
    }
    v11 = *v8;
    --*(_QWORD *)(a1 + 176);
    *(_QWORD *)v8[1] = v11;
    *(_QWORD *)(v11 + 8) = v8[1];
    std::_List_node<std::pair<unsigned __int64 const,CBaseInputObserverServer<11>::InputObserverClient>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned __int64 const,CBaseInputObserverServer<11>::InputObserverClient>,void *>>>(
      v11,
      v8);
    CBaseInputObserverServer<11>::UpdateObservationState(a1);
  }
  return 0LL;
}
