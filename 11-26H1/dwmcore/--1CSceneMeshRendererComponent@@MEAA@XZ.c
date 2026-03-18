/*
 * XREFs of ??1CSceneMeshRendererComponent@@MEAA@XZ @ 0x18027FE0C
 * Callers:
 *     ??_ECSceneMeshRendererComponent@@MEAAPEAXI@Z @ 0x18027FEB0 (--_ECSceneMeshRendererComponent@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Erase_head@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@@Z @ 0x18027FC94 (--$_Erase_head@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCSceneMeshRendererComponent@@@std@@V?$allocator@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEAVCSceneMeshRendererComponent@@@Z @ 0x1802809C4 (-erase@-$_Tree@V-$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V-$com_ptr_t@UISpectreMaterial@@.c)
 */

void __fastcall CSceneMeshRendererComponent::~CSceneMeshRendererComponent(CSceneMeshRendererComponent *this)
{
  __int64 v2; // rcx
  CSceneMeshRendererComponent *v3; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CSceneMeshRendererComponent::`vftable';
  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    v3 = this;
    std::_Tree<std::_Tmap_traits<CSceneMeshRendererComponent *,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>,std::less<CSceneMeshRendererComponent *>,std::allocator<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>,0>>::erase(
      v2 + 80,
      &v3);
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 11));
  }
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 12));
  std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_head<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
    (void **)this + 13,
    (__int64)this + 104);
  CSceneComponent::~CSceneComponent(this);
}
