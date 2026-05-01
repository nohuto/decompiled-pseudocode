/*
 * XREFs of ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1803D6AA0
 * Callers:
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1803D69D0 (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??4?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803C71CC (--4-$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U-$default_delete@VICortanaWNFService@Cortan.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CortanaDesktopExperienceView::RuntimeClassInitialize(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 (__fastcall *v14)(__int64, GUID *, GUID *, __int64 *); // rbx
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  int v19; // [rsp+70h] [rbp+40h] BYREF
  __int64 v20; // [rsp+78h] [rbp+48h] BYREF
  __int64 v21; // [rsp+80h] [rbp+50h] BYREF
  __int64 *v22; // [rsp+88h] [rbp+58h]

  v22 = a4;
  if ( *(_QWORD *)(a1 + 96) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
    v8 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 96) = a3;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::operator=(
    (__int64 *)(a1 + 104),
    a4);
  *(_DWORD *)(a1 + 212) = 1134559232;
  *(_DWORD *)(a1 + 216) = 1143209984;
  v20 = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  v10 = v9(a2, &IID_IImmersiveWindowMessageService, &GUID_fc62ce95_8396_401a_b74f_88df0d75e112, &v20);
  if ( v10 < 0 )
  {
    v11 = 359LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v10);
LABEL_9:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
    v12 = *a4;
    *a4 = 0LL;
    if ( v12 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 16LL))(v12, 1LL);
    return (unsigned int)v10;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v20 + 24LL))(
          v20,
          26LL,
          (a1 + 40) & -(__int64)(a1 != 0),
          a1 + 252);
  if ( v10 < 0 )
  {
    v11 = 360LL;
    goto LABEL_8;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v20 + 24LL))(
          v20,
          1025LL,
          (a1 + 40) & -(__int64)(a1 != 0),
          a1 + 256);
  if ( v10 < 0 )
  {
    v11 = 361LL;
    goto LABEL_8;
  }
  v21 = 0LL;
  v14 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
  v10 = v14(a2, &IID_IImmersiveSessionIdleDetector, &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29, &v21);
  if ( v10 < 0 )
  {
    v15 = 365LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
    goto LABEL_9;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64))(*(_QWORD *)v21 + 32LL))(
          v21,
          (a1 + 64) & ((unsigned __int128)-(__int128)a1 >> 64),
          a1 + 268);
  if ( v10 < 0 )
  {
    v15 = 366LL;
    goto LABEL_18;
  }
  v19 = 0;
  v16 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 24LL))(v21, &v19);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x170,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v16);
  *(_BYTE *)(a1 + 246) = v19 != 0;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 120), a2);
  v10 = (***(__int64 (__fastcall ****)(_QWORD, __int64, _QWORD))(a1 + 104))(
          *(_QWORD *)(a1 + 104),
          (a1 + 72) & -(__int64)(a1 != 0),
          0LL);
  if ( v10 < 0 )
  {
    v15 = 375LL;
    goto LABEL_18;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  v17 = *a4;
  *a4 = 0LL;
  if ( v17 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 16LL))(v17, 1LL);
  return 0LL;
}
