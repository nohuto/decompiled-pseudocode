/*
 * XREFs of ?_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1803FE11C
 * Callers:
 *     ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803FBE04 (-_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803FCBB8 (-_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18011691C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x180116BF4 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1802C2908 (--4-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _LogEventWithViewHostItemData__ @ 0x1803F6D60 (_LogEventWithViewHostItemData__.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1803FC820 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     ?_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransitionDirection@@@Z @ 0x1803FDFB4 (-_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransit.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall HolographicPositioner::_TransitionViewFromHolographic(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct Windows::Internal::Shell::Holographic::IViewHostItem *a3)
{
  struct Windows::Internal::Shell::Holographic::IViewHostItem *v3; // rbx
  char *ViewHostItem; // rax
  ApplicationViewOperation *v7; // rcx
  int v8; // eax
  unsigned int v9; // r14d
  ApplicationViewOperation *v11; // rdx
  unsigned int v12; // edi
  int v13; // eax
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  ApplicationViewOperation *v16; // [rsp+90h] [rbp+30h] BYREF
  struct Windows::Internal::Shell::Holographic::IViewHostItem *v17; // [rsp+98h] [rbp+38h] BYREF

  v3 = a3;
  v17 = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
  if ( v3 )
    goto LABEL_24;
  ViewHostItem = (char *)HolographicPositioner::_FindViewHostItem((__int64)this, &v16);
  Microsoft::WRL::ComPtr<IClassicWindow>::operator=((__int64 *)&v17, ViewHostItem);
  v7 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(ApplicationViewOperation *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v3 = v17;
  if ( v17 )
  {
LABEL_24:
    if ( *((_QWORD *)this + 30) )
    {
      LogEventWithViewHostItemData__(
        (__int64)v3,
        (void (__fastcall *)(PCWSTR *, int *))HolographicPositionerTelemetry::TransitionViewFromHolographic<unsigned short const *,unsigned int &>);
      v8 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::Shell::Holographic::IViewHostItem *))(**((_QWORD **)this + 30) + 56LL))(
             *((_QWORD *)this + 30),
             v3);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x791,
          (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v8);
        (*(void (__fastcall **)(struct Windows::Internal::Shell::Holographic::IViewHostItem *))(*(_QWORD *)v3 + 16LL))(v3);
        return v9;
      }
      Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v16);
      v11 = v16;
      if ( !v16 )
      {
        v12 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x799,
          (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)0x8007000ELL);
        Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v16);
        (*(void (__fastcall **)(struct Windows::Internal::Shell::Holographic::IViewHostItem *))(*(_QWORD *)v3 + 16LL))(v3);
        return v12;
      }
      *(_OWORD *)((char *)v16 + 124) = 0LL;
      *(_OWORD *)((char *)v11 + 140) = 0uLL;
      *(_QWORD *)((char *)v11 + 156) = 3LL;
      *((_DWORD *)v11 + 41) = 0;
      *((_BYTE *)v11 + 120) = 1;
      v13 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 320LL))(a2);
      v9 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x79B,
          (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v13);
        Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v16);
        (*(void (__fastcall **)(struct Windows::Internal::Shell::Holographic::IViewHostItem *))(*(_QWORD *)v3 + 16LL))(v3);
        return v9;
      }
      Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v16);
    }
    v14 = HolographicPositioner::_SendViewTransitionNotification((__int64)this, (__int64)a2, 1);
    v12 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x79E,
        (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v14);
      if ( v3 )
        (*(void (__fastcall **)(struct Windows::Internal::Shell::Holographic::IViewHostItem *))(*(_QWORD *)v3 + 16LL))(v3);
      return v12;
    }
    if ( v3 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::Holographic::IViewHostItem *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return 0LL;
}
