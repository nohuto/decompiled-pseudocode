/*
 * XREFs of ?DehydrateSpectreResources@CSceneNode@@QEAAXXZ @ 0x1802814E4
 * Callers:
 *     ?DehydrateSpectreResources@CSceneNode@@QEAAXXZ @ 0x1802814E4 (-DehydrateSpectreResources@CSceneNode@@QEAAXXZ.c)
 *     ?SetParent@CSceneNode@@AEAAXPEAV1@@Z @ 0x18028186C (-SetParent@CSceneNode@@AEAAXPEAV1@@Z.c)
 *     ?OnSceneLost@CSceneWorld@@EEAAJPEAUISpectreRenderer@@@Z @ 0x180288AC0 (-OnSceneLost@CSceneWorld@@EEAAJPEAUISpectreRenderer@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?DehydrateSpectreResources@CSceneNode@@QEAAXXZ @ 0x1802814E4 (-DehydrateSpectreResources@CSceneNode@@QEAAXXZ.c)
 *     ?DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z @ 0x18028B108 (-DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSceneNode::DehydrateSpectreResources(CSceneNode *this)
{
  __int64 *v2; // rsi
  CSceneNode **v3; // rbp
  CSceneNode **i; // rdi
  CSceneComponent **v5; // rbp
  CSceneComponent **j; // rdi
  __int64 v7; // rcx

  if ( *((_QWORD *)this + 16) )
  {
    v2 = (__int64 *)((char *)this + 144);
    if ( *((_QWORD *)this + 18) )
    {
      v3 = (CSceneNode **)*((_QWORD *)this + 11);
      for ( i = (CSceneNode **)*((_QWORD *)this + 10); i != v3; ++i )
      {
        if ( *((CSceneNode **)*i + 17) == this )
          CSceneNode::DehydrateSpectreResources(*i);
      }
      v5 = (CSceneComponent **)*((_QWORD *)this + 14);
      for ( j = (CSceneComponent **)*((_QWORD *)this + 13); j != v5; ++j )
        CSceneComponent::DehydrateSpectreResources(*j, this);
      v7 = *((_QWORD *)this + 17);
      if ( v7 )
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v7 + 144) + 40LL))(*(_QWORD *)(v7 + 144), *v2);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v2);
    }
    *((_QWORD *)this + 16) = 0LL;
  }
}
