/*
 * XREFs of ?SetOrAppendComponents@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@_N@Z @ 0x1802097E4
 * Callers:
 *     ?SetComponents@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@@Z @ 0x1802096D0 (-SetComponents@CSceneNode@@QEAAJAEBV-$span@PEAVCSceneComponent@@$0-0@gsl@@@Z.c)
 *     ?AppendComponents@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@QEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@@Z @ 0x1802097D4 (-AppendComponents@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@QEAAJAEBV-$span@PEAVCScen.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ??$_Insert_counted_range@PEAPEAVCBaseExpression@@@?$vector@PEAVCBaseExpression@@V?$allocator@PEAVCBaseExpression@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCBaseExpression@@@std@@@std@@@1@PEAPEAVCBaseExpression@@_K@Z @ 0x18019F4C4 (--$_Insert_counted_range@PEAPEAVCBaseExpression@@@-$vector@PEAVCBaseExpression@@V-$allocator@PEA.c)
 *     ??$UnRegisterNotifiers@VCTransform@@$00@CResource@@QEAAXPEAV?$vector@PEAVCTransform@@V?$allocator@PEAVCTransform@@@std@@@std@@@Z @ 0x18019F918 (--$UnRegisterNotifiers@VCTransform@@$00@CResource@@QEAAXPEAV-$vector@PEAVCTransform@@V-$allocato.c)
 *     ?OnComponentsChanged@CSceneNode@@QEAAXXZ @ 0x180281804 (-OnComponentsChanged@CSceneNode@@QEAAXXZ.c)
 */

__int64 __fastcall CSceneNodeGeneratedT<CSceneNode,CSceneObject>::SetOrAppendComponents(
        CResource *this,
        __int64 a2,
        char a3)
{
  struct CResource **v3; // rdi
  struct CResource **v7; // rbp

  v3 = *(struct CResource ***)(a2 + 8);
  v7 = &v3[*(_QWORD *)a2];
  while ( v3 != v7 )
    CResource::RegisterNotifier(this, *v3++);
  if ( !a3 )
    CResource::UnRegisterNotifiers<CTransform,1>(this, (struct CResource ***)this + 13);
  std::vector<CBaseExpression *>::_Insert_counted_range<CBaseExpression * *>(
    (__int64)this + 104,
    *((char **)this + 14),
    *(const void **)(a2 + 8),
    (8LL * *(_QWORD *)a2) >> 3);
  CSceneNode::OnComponentsChanged(this);
  return 0LL;
}
