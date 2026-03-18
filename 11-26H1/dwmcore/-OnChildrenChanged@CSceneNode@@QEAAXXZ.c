/*
 * XREFs of ?OnChildrenChanged@CSceneNode@@QEAAXXZ @ 0x18028179C
 * Callers:
 *     ?SetOrAppendChildren@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@_N@Z @ 0x180209630 (-SetOrAppendChildren@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAVCS.c)
 * Callees:
 *     ?SetParent@CSceneNode@@AEAAXPEAV1@@Z @ 0x18028186C (-SetParent@CSceneNode@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSceneNode::OnChildrenChanged(CSceneNode *this)
{
  CSceneNode **v1; // rsi
  CSceneNode **i; // rdi

  v1 = (CSceneNode **)*((_QWORD *)this + 11);
  for ( i = (CSceneNode **)*((_QWORD *)this + 10); i != v1; ++i )
    CSceneNode::SetParent(*i, this);
  if ( *((_QWORD *)this + 18) )
    (*(void (__fastcall **)(CSceneNode *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
}
