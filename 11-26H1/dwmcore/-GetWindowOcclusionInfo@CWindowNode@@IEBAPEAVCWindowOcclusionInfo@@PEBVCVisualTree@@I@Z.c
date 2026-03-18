/*
 * XREFs of ?GetWindowOcclusionInfo@CWindowNode@@IEBAPEAVCWindowOcclusionInfo@@PEBVCVisualTree@@I@Z @ 0x1800CB6D0
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180077EA0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?push_back@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@Z @ 0x18008C47C (-push_back@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@st.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800CC0E0 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _LIST_ENTRY *__fastcall CWindowNode::GetWindowOcclusionInfo(
        CWindowNode *this,
        const struct CVisualTree *a2,
        unsigned int a3)
{
  struct _LIST_ENTRY *v6; // rcx
  __int64 *v7; // rbx
  struct _LIST_ENTRY *j; // rax
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rdx
  struct _LIST_ENTRY *v13; // [rsp+38h] [rbp+10h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 192LL))(a2) )
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(this);
    if ( TreeDataListHead )
    {
      for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      {
        v6 = i - 22;
        if ( (const struct CVisualTree *)i[2].Flink == a2 )
          goto LABEL_3;
      }
    }
    return 0LL;
  }
  v6 = (struct _LIST_ENTRY *)((char *)this + 320);
LABEL_3:
  if ( !v6 )
    return 0LL;
  v7 = (__int64 *)&v6[11];
  for ( j = v6[11].Flink; j != v6[11].Blink; j = (struct _LIST_ENTRY *)((char *)j + 8) )
  {
    Flink = j->Flink;
    if ( LODWORD(j->Flink[2].Flink) == a3 )
    {
      if ( Flink )
        return Flink;
      break;
    }
  }
  ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, _QWORD))v6[15].Blink->Flink[22].Flink)(
    v6[15].Blink,
    &v13,
    a3);
  Flink = v13;
  detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::push_back(
    v7,
    (__int64 *)&v13);
  if ( v13 )
    ((void (__fastcall *)(struct _LIST_ENTRY *, __int64))v13->Flink->Flink)(v13, 1LL);
  return Flink;
}
