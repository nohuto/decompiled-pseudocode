/*
 * XREFs of ?AddCasterFromSharedHandle@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAXPEAVCVisual@@@Z @ 0x18005995C
 * Callers:
 *     ?AddCasterFromSharedHandle@CProjectedShadowScene@@QEAAJPEAX0PEAVCTopLevelWindow@@@Z @ 0x1800596A8 (-AddCasterFromSharedHandle@CProjectedShadowScene@@QEAAJPEAX0PEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800295E8 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindElement@?$CGenericTableMap@PEAVCVisual@@UVISUAL_RESOURCE_MAP_ENTRY_CASTER@CProjectedShadowSceneInstance@CProjectedShadowScene@@@@QEAAPEAUVISUAL_RESOURCE_MAP_ENTRY_CASTER@CProjectedShadowSceneInstance@CProjectedShadowScene@@PEAVCVisual@@@Z @ 0x180098D10 (-FindElement@-$CGenericTableMap@PEAVCVisual@@UVISUAL_RESOURCE_MAP_ENTRY_CASTER@CProjectedShadowS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CProjectedShadowScene::CProjectedShadowSceneInstance::AddCasterFromSharedHandle(
        CProjectedShadowScene::CProjectedShadowSceneInstance *this,
        void *a2,
        struct CVisual *a3)
{
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, void *, __int64 *); // rsi
  int v12; // eax
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(__int64, __int64 *); // rbx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // [rsp+20h] [rbp-20h] BYREF
  __int64 (__fastcall ***v30)(_QWORD, _QWORD, _QWORD); // [rsp+28h] [rbp-18h] BYREF
  _QWORD Buffer[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v33; // [rsp+80h] [rbp+40h] BYREF
  __int64 v34; // [rsp+98h] [rbp+58h] BYREF

  if ( !CGenericTableMap<CVisual *,CProjectedShadowScene::CProjectedShadowSceneInstance::VISUAL_RESOURCE_MAP_ENTRY_CASTER>::FindElement(
          (char *)this + 16,
          a3) )
  {
    v6 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 6)
                                                               + 32LL);
    v30 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v6;
    if ( v6 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v6)[1])(v6);
    v34 = 0LL;
    v7 = **v6;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v34);
    v8 = v7(v6, &GUID_f9230343_ced0_4699_866e_302f1e3c602b, &v34);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDB,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)(unsigned int)v8,
        v29);
      v28 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
      if ( v6 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v6)[2])(v6);
      return v9;
    }
    v33 = 0LL;
    v10 = v34;
    v11 = *(__int64 (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v34 + 56LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
    v12 = v11(v10, a2, &v33);
    v9 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDE,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)(unsigned int)v12,
        v29);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v34);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v30);
      return v9;
    }
    v29 = 0LL;
    v13 = *((_QWORD *)this + 12);
    v14 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 64LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v29);
    v15 = v14(v13, &v29);
    v9 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE2,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)(unsigned int)v15,
        v29);
      v16 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      v17 = v33;
      if ( v33 )
      {
        v33 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      v18 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
LABEL_13:
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v6)[2])(v6);
      return v9;
    }
    v20 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 72LL))(v29, v33);
    v9 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE3,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)(unsigned int)v20,
        v29);
      v25 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      }
      v26 = v33;
      if ( v33 )
      {
        v33 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      }
      v27 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      }
      goto LABEL_13;
    }
    Buffer[0] = a3;
    v21 = v33;
    v33 = 0LL;
    Buffer[1] = v21;
    if ( !RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 16), Buffer, 0x10u, 0LL) )
    {
      v9 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE8,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)0x8007000ELL,
        v29);
      v22 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      v23 = v33;
      if ( v33 )
      {
        v33 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
      v24 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      goto LABEL_13;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v29);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v34);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v30);
  }
  return 0LL;
}
