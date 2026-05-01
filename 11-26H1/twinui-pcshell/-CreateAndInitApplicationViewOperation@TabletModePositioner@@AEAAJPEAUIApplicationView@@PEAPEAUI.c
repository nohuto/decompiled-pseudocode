/*
 * XREFs of ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x180517674
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180515B74 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z @ 0x180516670 (-CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z.c)
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1805168F0 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 *     ?InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180519020 (-InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresenta.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewOperation@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewOperation@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800AF3D4 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationView.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AF5E4 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x1800AF8BC (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180517840 (-CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationV.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabletModePositioner::CreateAndInitApplicationViewOperation(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        struct IApplicationViewOperation **a3)
{
  ApplicationViewOperation *v5; // rbx
  unsigned int v6; // ebx
  __int64 v7; // rsi
  void (__fastcall *v8)(__int64, __int64, __int64 *); // rdi
  struct IApplicationView *v9; // rcx
  int v10; // eax
  _BYTE v12[24]; // [rsp+30h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IApplicationViewTitlebarConfiguration *v14; // [rsp+88h] [rbp+38h] BYREF
  __int64 v15; // [rsp+90h] [rbp+40h] BYREF
  ApplicationViewOperation *v16; // [rsp+98h] [rbp+48h] BYREF

  v14 = a2;
  *a3 = 0LL;
  Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v16);
  v5 = v16;
  if ( v16 )
  {
    *((_DWORD *)v16 + 27) = 255;
    *((_DWORD *)v5 + 28) = 23;
    *((_DWORD *)v5 + 42) = 1;
    *((_DWORD *)v5 + 48) = 0;
    *(_QWORD *)((char *)v5 + 212) = 0LL;
    *(_QWORD *)((char *)v5 + 220) = 0LL;
    *(_QWORD *)((char *)v5 + 196) = 0LL;
    *(_QWORD *)((char *)v5 + 204) = 0LL;
    *((_BYTE *)v5 + 228) = 1;
    *((_QWORD *)v5 + 29) = 0LL;
    v15 = 0LL;
    v7 = *((_QWORD *)this + 56);
    v8 = *(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v7 + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    v8(v7, 2LL, &v15);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v5 + 22, v15);
    *(_QWORD *)v12 = 0LL;
    *(__m128i *)&v12[8] = _mm_load_si128((const __m128i *)&_xmm);
    *(_OWORD *)((char *)v5 + 124) = 0LL;
    *(_OWORD *)((char *)v5 + 140) = *(_OWORD *)v12;
    *(_QWORD *)((char *)v5 + 156) = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v12[8], *(__m128d *)&v12[8]);
    *((_DWORD *)v5 + 41) = 0;
    *((_BYTE *)v5 + 120) = 1;
    v14 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    TabletModePositioner::CreateTitlebarConfiguration(v9, &v14);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v5 + 23, (__int64)v14);
    *((_DWORD *)v5 + 29) = 1;
    v10 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewOperation,Microsoft::WRL::FtmBase>>(
            (__int64)v5,
            &GUID_cc6192be_2002_4cd1_a603_e3b6795b4000,
            a3);
    v6 = v10;
    if ( v10 >= 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBA6,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    }
  }
  else
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB87,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)0x8007000ELL);
  }
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v16);
  return v6;
}
