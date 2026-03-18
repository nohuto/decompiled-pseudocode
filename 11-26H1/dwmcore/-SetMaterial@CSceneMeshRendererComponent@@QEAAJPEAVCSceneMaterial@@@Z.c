/*
 * XREFs of ?SetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCSceneMaterial@@@Z @ 0x18020E800
 * Callers:
 *     ?ProcessSetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENEMESHRENDERERCOMPONENT_SETMATERIAL@@@Z @ 0x18020E790 (-ProcessSetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENEMES.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ?ApplyMaterialToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ @ 0x18027FF6C (-ApplyMaterialToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ.c)
 *     ??$_Try_emplace@AEBQEAVCSceneMeshRendererComponent@@$$V@?$map@PEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCSceneMeshRendererComponent@@@std@@V?$allocator@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBQEAVCSceneMeshRendererComponent@@@Z @ 0x18028047C (--$_Try_emplace@AEBQEAVCSceneMeshRendererComponent@@$$V@-$map@PEAVCSceneMeshRendererComponent@@V.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCSceneMeshRendererComponent@@@std@@V?$allocator@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEAVCSceneMeshRendererComponent@@@Z @ 0x1802809C4 (-erase@-$_Tree@V-$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V-$com_ptr_t@UISpectreMaterial@@.c)
 *     ?AddDirtySceneObject@CSceneComponent@@QEAAXPEAVCSceneObject@@@Z @ 0x18028B0BC (-AddDirtySceneObject@CSceneComponent@@QEAAXPEAVCSceneObject@@@Z.c)
 */

__int64 __fastcall CSceneMeshRendererComponent::SetMaterial(
        CSceneMeshRendererComponent *this,
        struct CSceneMaterial *a2)
{
  struct CSceneMaterial *v4; // rcx
  __int64 v5; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF
  CSceneComponent *v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = (struct CSceneMaterial *)*((_QWORD *)this + 11);
  if ( a2 != v4 )
  {
    if ( v4 )
    {
      v8 = this;
      std::_Tree<std::_Tmap_traits<CSceneMeshRendererComponent *,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>,std::less<CSceneMeshRendererComponent *>,std::allocator<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>,0>>::erase(
        (char *)v4 + 80,
        &v8);
      CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 11));
      *((_QWORD *)this + 11) = 0LL;
    }
    if ( a2 )
    {
      CResource::RegisterNotifier(this, a2);
      v8 = this;
      v5 = std::map<CSceneMeshRendererComponent *,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>::_Try_emplace<CSceneMeshRendererComponent * const &,>(
             (char *)a2 + 80,
             v7,
             &v8);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(*(_QWORD *)v5 + 40LL));
      CSceneComponent::AddDirtySceneObject(v8, a2);
      *((_QWORD *)this + 11) = a2;
    }
    CSceneMeshRendererComponent::ApplyMaterialToSpectreResources(this);
  }
  return 0LL;
}
