/*
 * XREFs of ?SetProperty@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024DB90
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800CF0B0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCSceneMeshRen.c)
 *     ?SetMetallicFactor@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@QEAAJM@Z @ 0x18024C17C (-SetMetallicFactor@-$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@.c)
 *     ?SetRoughnessFactor@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@QEAAJM@Z @ 0x18024E874 (-SetRoughnessFactor@-$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial.c)
 *     ?ApplyBaseColorFactorToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x180280A64 (-ApplyBaseColorFactorToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMateria.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSceneMetallicRoughnessMaterialGeneratedT<CSceneMetallicRoughnessMaterial,CScenePbrMaterial>::SetProperty(
        CSceneMetallicRoughnessMaterial *this,
        int a2,
        int a3,
        float *a4)
{
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // rax
  struct ISpectreMaterial *v9; // rdx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  switch ( a2 )
  {
    case 10:
      if ( a3 != 69 )
      {
        v6 = 10856LL;
        goto LABEL_15;
      }
      *(_OWORD *)((char *)this + 152) = *(_OWORD *)a4;
      v8 = **((_QWORD **)this + 10);
      v10[0] = v8;
      while ( v8 != *((_QWORD *)this + 10) )
      {
        v9 = *(struct ISpectreMaterial **)(v8 + 40);
        if ( v9 )
        {
          CSceneMetallicRoughnessMaterial::ApplyBaseColorFactorToSpectreResource(this, v9);
          if ( *((_QWORD *)this + 6) )
            CResource::InvalidateConsumingAnimationsInternal((__int64)this);
          (*(void (__fastcall **)(CSceneMetallicRoughnessMaterial *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(
            this,
            0LL,
            0LL);
        }
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(v10);
        v8 = v10[0];
      }
      break;
    case 11:
      if ( a3 != 18 )
      {
        v6 = 10861LL;
        goto LABEL_15;
      }
      v7 = CSceneMetallicRoughnessMaterialGeneratedT<CSceneMetallicRoughnessMaterial,CScenePbrMaterial>::SetMetallicFactor(
             (float *)this,
             *a4);
      if ( v7 < 0 )
      {
        v6 = 10862LL;
        goto LABEL_16;
      }
      break;
    case 13:
      if ( a3 != 18 )
      {
        v6 = 10866LL;
LABEL_15:
        v7 = -2147024809;
        goto LABEL_16;
      }
      v7 = CSceneMetallicRoughnessMaterialGeneratedT<CSceneMetallicRoughnessMaterial,CScenePbrMaterial>::SetRoughnessFactor();
      if ( v7 < 0 )
      {
        v6 = 10867LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v6,
          (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
          (const char *)(unsigned int)v7);
        return (unsigned int)v7;
      }
      break;
    default:
      return CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetProperty();
  }
  return 0LL;
}
