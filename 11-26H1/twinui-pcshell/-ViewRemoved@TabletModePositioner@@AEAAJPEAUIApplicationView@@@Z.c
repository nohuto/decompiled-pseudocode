/*
 * XREFs of ?ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18051E2F8
 * Callers:
 *     ?OnApplicationViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18016B9F0 (-OnApplicationViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?ViewMinimized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x18051E0EC (-ViewMinimized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Ta.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReverseAppToAppSwitch@PEAUIAppLayout@@AEAPEAUIApplicationView@@W4AppCloseMethod@@@TabletModeTelemetry@@SAX$$QEAPEAUIAppLayout@@AEAPEAUIApplicationView@@$$QEAW4AppCloseMethod@@@Z @ 0x180515050 (--$ReverseAppToAppSwitch@PEAUIAppLayout@@AEAPEAUIApplicationView@@W4AppCloseMethod@@@TabletModeT.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180515B74 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1805179C4 (-EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?IsSwitcherVisible@TabletModePositioner@@AEAA_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180519408 (-IsSwitcherVisible@TabletModePositioner@@AEAA_NW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?TryClearFullScreenCachedAppLayout@TabletModePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x18051DD98 (-TryClearFullScreenCachedAppLayout@TabletModePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?TryClearOldFullScreenView@TabletModePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x18051DDD8 (-TryClearOldFullScreenView@TabletModePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabletModePositioner::ViewRemoved(TabletModePositioner *this, struct IApplicationView *a2)
{
  BOOL IsSwitcherVisible; // r15d
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, GUID *, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  int (__fastcall *v9)(char *, __int64 *); // rbx
  __int64 v10; // rbx
  int (__fastcall *v11)(__int64, _QWORD, struct IApplicationView *, __int64, struct IUnknown **); // rdi
  __int64 v12; // r9
  int v14; // eax
  __int64 v15; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  unsigned int v18; // [rsp+80h] [rbp+38h] BYREF
  struct IApplicationView *v19; // [rsp+88h] [rbp+40h] BYREF
  struct IUnknown *v20; // [rsp+90h] [rbp+48h] BYREF
  __int64 v21; // [rsp+98h] [rbp+50h] BYREF

  v19 = a2;
  TabletModePositioner::TryClearFullScreenCachedAppLayout(this, a2);
  TabletModePositioner::TryClearOldFullScreenView(this, (struct IUnknown *)a2);
  if ( !(*(unsigned int (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 31) + 184LL))(
          *((_QWORD *)this + 31),
          a2) )
    return 0LL;
  IsSwitcherVisible = TabletModePositioner::IsSwitcherVisible((__int64)this, 31LL);
  v15 = 0LL;
  v5 = *((_QWORD *)this + 31);
  v6 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v5 + 192LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  v7 = v6(v5, &GUID_7baad876_2fc5_4561_93e1_17e868a174ed, &v15);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v21 = 0LL;
    v20 = 0LL;
    v9 = *(int (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 14) + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
    if ( v9((char *)this + 112, &v21) < 0
      || (v10 = v21,
          v11 = *(int (__fastcall **)(__int64, _QWORD, struct IApplicationView *, __int64, struct IUnknown **))(*(_QWORD *)v21 + 24LL),
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v20),
          LOBYTE(v12) = IsSwitcherVisible,
          v11(v10, *((_QWORD *)this + 31), a2, v12, &v20) < 0)
      || (int)TabletModePositioner::ApplyLayoutOperationHelper(this, v20) < 0 )
    {
      v14 = TabletModePositioner::EvictAppHelper((IUnknown *)this, (__int64)a2, 2 * IsSwitcherVisible + 8);
      v8 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7A9,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v14);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v20);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
        goto LABEL_12;
      }
    }
    else
    {
      v18 = 0;
      v16 = v15;
      TabletModeTelemetry::ReverseAppToAppSwitch<IAppLayout *,IApplicationView * &,enum AppCloseMethod>(
        &v16,
        &v19,
        &v18);
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v20);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x798,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v7);
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  return v8;
}
