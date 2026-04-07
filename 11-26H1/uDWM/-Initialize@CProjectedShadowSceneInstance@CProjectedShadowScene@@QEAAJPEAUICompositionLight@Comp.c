/*
 * XREFs of ?Initialize@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUICompositionLight@Composition@UI@Windows@@W4ProjectedShadowSceneType@5WindowsInternal@@@Z @ 0x180034FC4
 * Callers:
 *     ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x18003517C (-Initialize@CProjectedShadowScene@@QEAAJ_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C124 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConfigureProjectedShadowScene@UI@WindowsInternal@@YAJPEAUICompositionProjectedShadow@Composition@1Windows@@W4ProjectedShadowSceneType@12@@Z @ 0x1800BDE0C (-ConfigureProjectedShadowScene@UI@WindowsInternal@@YAJPEAUICompositionProjectedShadow@Compositio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProjectedShadowScene::CProjectedShadowSceneInstance::Initialize(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64); // rbx
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64); // rdi
  int v8; // eax
  unsigned int v9; // edi
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(__int64, __int64); // rdi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                           + 32LL);
  if ( v6 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64)))(*v6)[1])(v6);
  v7 = **v6;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 88));
  v8 = v7(v6, &GUID_a2e6330e_8a60_5a38_bb85_b44ea901677c, a1 + 88);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC9,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
      (const char *)(unsigned int)v8,
      v16);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64)))(*v6)[2])(v6);
    return v9;
  }
  v11 = *(_QWORD *)(a1 + 88);
  v12 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 56LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 96));
  v13 = v12(v11, a1 + 96);
  v9 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCC,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
      (const char *)(unsigned int)v13,
      v16);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64)))(*v6)[2])(v6);
    return v9;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 96) + 80LL))(*(_QWORD *)(a1 + 96), a2);
  v9 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCD,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
      (const char *)(unsigned int)v14,
      v16);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64)))(*v6)[2])(v6);
    return v9;
  }
  v15 = WindowsInternal::UI::ConfigureProjectedShadowScene(*(_QWORD *)(a1 + 96), a3);
  v9 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCE,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
      (const char *)(unsigned int)v15,
      v16);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64)))(*v6)[2])(v6);
    return v9;
  }
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64)))(*v6)[2])(v6);
  return 0LL;
}
