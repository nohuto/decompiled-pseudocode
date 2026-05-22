/*
 * XREFs of ?OnHitTest@LightDismissProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180051800
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDismissableClients@LightDismissProcessor@@AEAA?AV?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@PEAUHitTestResult@@@Z @ 0x18005188C (-GetDismissableClients@LightDismissProcessor@@AEAA-AV-$vector@PEAVLightDismissClientProxy@@V-$al.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?Dismiss@BamoLightDismissClientProxy@@UEAAJXZ @ 0x18015FEB0 (-Dismiss@BamoLightDismissClientProxy@@UEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LightDismissProcessor::OnHitTest(
        LightDismissProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  __int64 v5; // rbx
  __int64 i; // rdi
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  *(_DWORD *)a4 = 0;
  if ( (*(_BYTE *)a2 & 0x3B) != 0 && (*((_DWORD *)a2 + 8) & 0x10000) != 0 )
  {
    LightDismissProcessor::GetDismissableClients(this, &v7, *((_QWORD *)a3 + 22));
    v5 = v7;
    for ( i = v7; i != v8; i += 8LL )
      BamoLightDismissClientProxy::Dismiss((BamoLightDismissClientProxy *)(*(_QWORD *)i + 8LL));
    if ( v5 )
      std::_Deallocate<16>(v5, (v9 - v5) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  return 0LL;
}
