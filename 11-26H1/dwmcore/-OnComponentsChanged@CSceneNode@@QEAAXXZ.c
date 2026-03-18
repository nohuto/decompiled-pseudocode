/*
 * XREFs of ?OnComponentsChanged@CSceneNode@@QEAAXXZ @ 0x180281804
 * Callers:
 *     ?SetOrAppendComponents@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@_N@Z @ 0x1802097E4 (-SetOrAppendComponents@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAV.c)
 * Callees:
 *     ?HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z @ 0x18028B1A0 (-HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSceneNode::OnComponentsChanged(CSceneNode *this)
{
  CSceneComponent **v2; // rsi
  CSceneComponent **i; // rdi

  if ( *((_QWORD *)this + 18) )
  {
    v2 = (CSceneComponent **)*((_QWORD *)this + 14);
    for ( i = (CSceneComponent **)*((_QWORD *)this + 13); i != v2; ++i )
      CSceneComponent::HydrateSpectreResources(*i, this);
    (*(void (__fastcall **)(CSceneNode *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
  }
}
