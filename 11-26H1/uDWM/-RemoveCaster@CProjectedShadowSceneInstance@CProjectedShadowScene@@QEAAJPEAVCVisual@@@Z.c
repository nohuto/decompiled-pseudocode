/*
 * XREFs of ?RemoveCaster@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAVCVisual@@@Z @ 0x18004D424
 * Callers:
 *     ?RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z @ 0x1800BE080 (-RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C124 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindElement@?$CGenericTableMap@PEAVCVisual@@UVISUAL_RESOURCE_MAP_ENTRY_CASTER@CProjectedShadowSceneInstance@CProjectedShadowScene@@@@QEAAPEAUVISUAL_RESOURCE_MAP_ENTRY_CASTER@CProjectedShadowSceneInstance@CProjectedShadowScene@@PEAVCVisual@@@Z @ 0x18008C44C (-FindElement@-$CGenericTableMap@PEAVCVisual@@UVISUAL_RESOURCE_MAP_ENTRY_CASTER@CProjectedShadowS.c)
 *     ?RemoveElement@?$CGenericTableMap@PEAVCVisual@@UVISUAL_RESOURCE_MAP_ENTRY_CASTER@CProjectedShadowSceneInstance@CProjectedShadowScene@@@@QEAAXPEAUVISUAL_RESOURCE_MAP_ENTRY_CASTER@CProjectedShadowSceneInstance@CProjectedShadowScene@@@Z @ 0x18008D148 (-RemoveElement@-$CGenericTableMap@PEAVCVisual@@UVISUAL_RESOURCE_MAP_ENTRY_CASTER@CProjectedShado.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProjectedShadowScene::CProjectedShadowSceneInstance::RemoveCaster(
        CProjectedShadowScene::CProjectedShadowSceneInstance *this,
        struct CVisual *a2)
{
  char *v3; // rbp
  __int64 Element; // rsi
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  v3 = (char *)this + 16;
  Element = CGenericTableMap<CVisual *,CProjectedShadowScene::CProjectedShadowSceneInstance::VISUAL_RESOURCE_MAP_ENTRY_CASTER>::FindElement(
              (char *)this + 16,
              a2);
  if ( Element )
  {
    v16 = 0LL;
    v5 = *((_QWORD *)this + 12);
    v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 64LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
    v7 = v6(v5, &v16);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF4,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)(unsigned int)v7,
        v14);
      v9 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      return v8;
    }
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 88LL))(v16, *(_QWORD *)(Element + 8));
    v8 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF5,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)(unsigned int)v11,
        v14);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
      return v8;
    }
    v12 = *(_QWORD *)(Element + 8);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    CGenericTableMap<CVisual *,CProjectedShadowScene::CProjectedShadowSceneInstance::VISUAL_RESOURCE_MAP_ENTRY_CASTER>::RemoveElement(
      v3,
      Element);
    v13 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  return 0LL;
}
