/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@std@@@?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@1@PEAU01@@Z @ 0x180190ED8
 * Callers:
 *     ??1CProjectedShadowScene@@UEAA@XZ @ 0x180190D3C (--1CProjectedShadowScene@@UEAA@XZ.c)
 *     ?ClearReceivers@CProjectedShadowScene@@AEAAXXZ @ 0x180190DE8 (-ClearReceivers@CProjectedShadowScene@@AEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1ReceiverEntry@CProjectedShadowScene@@QEAA@XZ @ 0x1801A3FD8 (--1ReceiverEntry@CProjectedShadowScene@@QEAA@XZ.c)
 */

void __fastcall std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>::_Free_non_head<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      CProjectedShadowScene::ReceiverEntry::~ReceiverEntry((CProjectedShadowScene::ReceiverEntry *)(v2 + 2));
      std::_Deallocate<16>(v2, 0x78uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}
