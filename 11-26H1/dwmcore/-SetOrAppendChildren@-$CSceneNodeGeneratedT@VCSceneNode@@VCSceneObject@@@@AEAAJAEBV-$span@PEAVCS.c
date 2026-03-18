/*
 * XREFs of ?SetOrAppendChildren@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@_N@Z @ 0x180209630
 * Callers:
 *     ?SetChildren@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@@Z @ 0x180209514 (-SetChildren@CSceneNode@@QEAAJAEBV-$span@PEAVCSceneNode@@$0-0@gsl@@@Z.c)
 *     ?AppendChildren@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@QEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@@Z @ 0x180209620 (-AppendChildren@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@QEAAJAEBV-$span@PEAVCSceneN.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ??$UnRegisterNotifiers@VCTransform@@$00@CResource@@QEAAXPEAV?$vector@PEAVCTransform@@V?$allocator@PEAVCTransform@@@std@@@std@@@Z @ 0x18019F918 (--$UnRegisterNotifiers@VCTransform@@$00@CResource@@QEAAXPEAV-$vector@PEAVCTransform@@V-$allocato.c)
 *     ??$_Insert_counted_range@PEAPEAVCSceneNode@@@?$vector@PEAVCSceneNode@@V?$allocator@PEAVCSceneNode@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCSceneNode@@@std@@@std@@@1@PEAPEAVCSceneNode@@_K@Z @ 0x1801E7940 (--$_Insert_counted_range@PEAPEAVCSceneNode@@@-$vector@PEAVCSceneNode@@V-$allocator@PEAVCSceneNod.c)
 *     ?OnChildrenChanged@CSceneNode@@QEAAXXZ @ 0x18028179C (-OnChildrenChanged@CSceneNode@@QEAAXXZ.c)
 */

__int64 __fastcall CSceneNodeGeneratedT<CSceneNode,CSceneObject>::SetOrAppendChildren(
        struct CResource ***this,
        __int64 a2,
        char a3)
{
  struct CResource **v3; // rdi
  struct CResource **v7; // rbp

  v3 = *(struct CResource ***)(a2 + 8);
  v7 = &v3[*(_QWORD *)a2];
  while ( v3 != v7 )
    CResource::RegisterNotifier((CResource *)this, *v3++);
  if ( !a3 )
    CResource::UnRegisterNotifiers<CTransform,1>((CResource *)this, this + 10);
  std::vector<CSceneNode *>::_Insert_counted_range<CSceneNode * *>(
    this + 10,
    this[11],
    *(const void **)(a2 + 8),
    (8LL * *(_QWORD *)a2) >> 3);
  CSceneNode::OnChildrenChanged((CSceneNode *)this);
  return 0LL;
}
