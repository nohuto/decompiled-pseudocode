/*
 * XREFs of ?ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x180508460
 * Callers:
 *     ?CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x180506744 (-CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?EndDrag@WindowArrangementView@@AEAAJ_N@Z @ 0x180506ADC (-EndDrag@WindowArrangementView@@AEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddTempAppVisualsToLayoutOperation@WindowArrangementView@@AEAAJPEAUIAppLayoutOperationBuilder@@@Z @ 0x1805061B0 (-AddTempAppVisualsToLayoutOperation@WindowArrangementView@@AEAAJPEAUIAppLayoutOperationBuilder@@.c)
 *     ?DropLocationToArrangementAction@WindowArrangementView@@AEAA?AW4ARRANGEMENT_ACTION@@W4DropLocation@WindowArrangementViewDragData@@@Z @ 0x180506814 (-DropLocationToArrangementAction@WindowArrangementView@@AEAA-AW4ARRANGEMENT_ACTION@@W4DropLocati.c)
 *     ?GetAppViewCloseOverrideOperation@WindowArrangementView@@AEAAJPEAUITabletModePositioner@@PEAUIApplicationView@@PEAPEAUIAppLayoutOperation@@@Z @ 0x180506C50 (-GetAppViewCloseOverrideOperation@WindowArrangementView@@AEAAJPEAUITabletModePositioner@@PEAUIAp.c)
 *     ?QueryArrangeView@WindowArrangementView@@AEAAJPEAUIApplicationView@@W4DropLocation@WindowArrangementViewDragData@@PEAPEAUIAppLayoutOperation@@@Z @ 0x1805086D8 (-QueryArrangeView@WindowArrangementView@@AEAAJPEAUIApplicationView@@W4DropLocation@WindowArrange.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x180659AF8 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WindowArrangementView::ProcessDrop(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  int v5; // r14d
  HRESULT v6; // eax
  HRESULT Service; // eax
  unsigned int v8; // ebx
  int (__fastcall ***v9)(void *, GUID *, struct IAppLayoutOperationBuilder **); // rbx
  int v10; // eax
  int (__fastcall *v11)(void *, GUID *, struct IAppLayoutOperationBuilder **); // rdi
  int v12; // eax
  int v14; // [rsp+20h] [rbp-20h]
  struct IAppLayoutOperationBuilder *v15[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  void *ppvOut; // [rsp+70h] [rbp+30h] BYREF
  struct ITabletModePositioner *v18; // [rsp+78h] [rbp+38h] BYREF

  v5 = WindowArrangementView::DropLocationToArrangementAction(a1, a2);
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 72) + 104LL))(*(_QWORD *)(v4 + 72));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 208LL))(*(_QWORD *)(a1 + 80));
    if ( v5 == 6 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      v6 = IUnknown_QueryService(
             *(IUnknown **)(a1 + 16),
             &stru_1807890B8,
             &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a,
             &ppvOut);
      if ( v6 >= 0 )
      {
        v14 = 23;
        ApplicationViewHelpers::CloseView(*(_QWORD *)(a1 + 88), ppvOut, *(_DWORD *)(a1 + 292) != 0);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x5B9,
          (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v6);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    }
    if ( *(_DWORD *)(a1 + 288) != 1 )
    {
      v18 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
      Service = IUnknown_QueryService(
                  *(IUnknown **)(a1 + 16),
                  &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
                  &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
                  (void **)&v18);
      v8 = Service;
      if ( Service < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5C4,
          (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)Service);
LABEL_21:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
        return v8;
      }
      ppvOut = 0LL;
      if ( a2 != 6
        || *(_DWORD *)(a1 + 288) == 2
        || (Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut),
            WindowArrangementView::GetAppViewCloseOverrideOperation(
              (WindowArrangementView *)a1,
              (__int64 (__fastcall ***)(struct ITabletModePositioner *, GUID *, __int64 *))v18,
              *(struct IApplicationView **)(a1 + 88),
              (struct IAppLayoutOperation **)&ppvOut),
            (v9 = (int (__fastcall ***)(void *, GUID *, struct IAppLayoutOperationBuilder **))ppvOut) == 0LL) )
      {
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
        v10 = WindowArrangementView::QueryArrangeView(a1, *(_QWORD *)(a1 + 88), a2, &ppvOut, v14);
        v8 = v10;
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5D2,
            (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
            (const char *)(unsigned int)v10);
LABEL_20:
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
          goto LABEL_21;
        }
        v9 = (int (__fastcall ***)(void *, GUID *, struct IAppLayoutOperationBuilder **))ppvOut;
      }
      v15[0] = 0LL;
      v11 = **v9;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v15);
      if ( v11(v9, &GUID_521214fe_07d7_470b_b6f3_b9d2354cae32, v15) >= 0 )
        WindowArrangementView::AddTempAppVisualsToLayoutOperation((WindowArrangementView *)a1, v15[0]);
      v12 = (*(__int64 (__fastcall **)(struct ITabletModePositioner *, void *))(*(_QWORD *)v18 + 88LL))(v18, ppvOut);
      v8 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5DF,
          (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v15);
        goto LABEL_20;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v15);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
    }
  }
  return 0LL;
}
