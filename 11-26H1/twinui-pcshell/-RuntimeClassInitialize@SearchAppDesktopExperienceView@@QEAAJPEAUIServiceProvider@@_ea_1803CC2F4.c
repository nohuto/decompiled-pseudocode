/*
 * XREFs of ?RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1803CC2F4
 * Callers:
 *     ?RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1803CC224 (-RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??4?$ComPtr@VISearchAppExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1803C7174 (--4-$ComPtr@VISearchAppExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     ??4?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803C71CC (--4-$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U-$default_delete@VICortanaWNFService@Cortan.c)
 *     ??R?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@QEBAXPEAVICortanaWNFService@Cortana@TwinUI@@@Z @ 0x1803C7320 (--R-$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@QEBAXPEAVICortanaWNFService@Cort.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SearchAppDesktopExperienceView::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 (__fastcall *v7)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v17; // [rsp+78h] [rbp+20h]

  v17 = a4;
  Microsoft::WRL::ComPtr<TwinUI::Cortana::ISearchAppExperienceManagerNotification>::operator=((__int64 *)(a1 + 80), a3);
  wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::operator=(
    (__int64 *)(a1 + 88),
    a4);
  *(_DWORD *)(a1 + 172) = 1134559232;
  *(_DWORD *)(a1 + 176) = 1143209984;
  v16 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  v8 = v7(a2, &IID_IImmersiveWindowMessageService, &GUID_fc62ce95_8396_401a_b74f_88df0d75e112, &v16);
  if ( v8 < 0 )
  {
    v9 = 320LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    v11 = *a4;
    *a4 = 0LL;
    if ( v11 )
      wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>::operator()(v10, v11);
    return (unsigned int)v8;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v16 + 24LL))(
         v16,
         26LL,
         (a1 + 32) & -(__int64)(a1 != 0),
         a1 + 208);
  if ( v8 < 0 )
  {
    v9 = 321LL;
    goto LABEL_3;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v16 + 24LL))(
         v16,
         1025LL,
         (a1 + 32) & -(__int64)(a1 != 0),
         a1 + 212);
  if ( v8 < 0 )
  {
    v9 = 322LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 96), a2);
  v8 = (***(__int64 (__fastcall ****)(_QWORD, __int64, _QWORD))(a1 + 88))(
         *(_QWORD *)(a1 + 88),
         (a1 + 56) & -(__int64)(a1 != 0),
         0LL);
  if ( v8 < 0 )
  {
    v9 = 328LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  v14 = *a4;
  *a4 = 0LL;
  if ( v14 )
    wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>::operator()(v13, v14);
  return 0LL;
}
