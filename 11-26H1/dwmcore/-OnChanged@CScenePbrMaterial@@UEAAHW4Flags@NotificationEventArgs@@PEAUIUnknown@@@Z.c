/*
 * XREFs of ?OnChanged@CScenePbrMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180280FD0
 * Callers:
 *     ?OnChanged@CSceneMetallicRoughnessMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180280B00 (-OnChanged@CSceneMetallicRoughnessMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800CF0B0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCSceneMeshRen.c)
 *     ?AddDirtySceneObject@CSceneComponent@@QEAAXPEAVCSceneObject@@@Z @ 0x18028B0BC (-AddDirtySceneObject@CSceneComponent@@QEAAXPEAVCSceneObject@@@Z.c)
 */

__int64 __fastcall CScenePbrMaterial::OnChanged(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 && (a3 == *(_QWORD *)(a1 + 128) || a3 == *(_QWORD *)(a1 + 136) || a3 == *(_QWORD *)(a1 + 144)) )
  {
    v4 = **(_QWORD **)(a1 + 80);
    v6 = v4;
    while ( v4 != *(_QWORD *)(a1 + 80) )
    {
      CSceneComponent::AddDirtySceneObject(*(CSceneComponent **)(v4 + 32), (struct CSceneObject *)a1);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v6);
      v4 = v6;
    }
  }
  return 1LL;
}
