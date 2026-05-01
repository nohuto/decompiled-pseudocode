/*
 * XREFs of ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18052B51C
 * Callers:
 *     ?Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18052B1D0 (-Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@PEA_N@Z @ 0x1804E251C (-IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@P.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_382fa76d9980bbd2846dd440d3c3bc97__&_ @ 0x180527AFC (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_382fa76d9980bbd2846dd440d3c3bc97__-_.c)
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180528BD8 (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 *     ?GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PEAUtagPOINT@@@Z @ 0x18052912C (-GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PE.c)
 *     ?GetPrimaryMonitor@WindowArrangementView@@AEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x180529474 (-GetPrimaryMonitor@WindowArrangementView@@AEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z @ 0x1805298E4 (-InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z.c)
 *     ?InternalAddRef@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEBAXXZ @ 0x18052A1D0 (-InternalAddRef@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x18052A1F4 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z @ 0x18052B380 (-ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z.c)
 *     ?UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z @ 0x18052CA30 (-UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowArrangementView::ShowView(
        IUnknown **this,
        struct tagRECT *a2,
        const struct tagPOINT *a3,
        struct tagRECT *a4)
{
  int PlaceModePoint; // eax
  unsigned int LastError; // esi
  int PrimaryMonitor; // eax
  __int64 v11; // rdx
  HRESULT v12; // eax
  bool *v13; // r9
  int IsLauncherVisibleOnMonitor; // eax
  int v15; // eax
  volatile int *v16; // rdx
  int v17; // eax
  HWND v18; // rax
  const char *v19; // r9
  volatile int *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  volatile signed __int32 *v24; // r8
  int v25; // eax
  struct IUnknown *v26; // [rsp+30h] [rbp-10h] BYREF
  IUnknown **v27; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct tagPOINT v29; // [rsp+70h] [rbp+30h] BYREF
  void *ppvOut; // [rsp+80h] [rbp+40h] BYREF

  v29 = *a3;
  if ( *((_DWORD *)this + 72) != 2
    || (PlaceModePoint = WindowArrangementView::GetPlaceModePoint((__int64)this, 7, 0xFFFFFFFF, &v29),
        LastError = PlaceModePoint,
        PlaceModePoint >= 0) )
  {
    v26 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
    PrimaryMonitor = WindowArrangementView::GetPrimaryMonitor(this, (struct IImmersiveMonitor **)&v26);
    LastError = PrimaryMonitor;
    if ( PrimaryMonitor >= 0 )
    {
      PrimaryMonitor = WindowArrangementView::InitDragVisual((WindowArrangementView *)this, v26, a2, &v29, a4);
      LastError = PrimaryMonitor;
      if ( PrimaryMonitor >= 0 )
      {
        if ( *((_DWORD *)this + 72) == 2 )
        {
          ppvOut = 0LL;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
          v12 = IUnknown_QueryService(this[2], &stru_1807B54F8, &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41, &ppvOut);
          LastError = v12;
          if ( v12 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x47B,
              (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
              (const char *)(unsigned int)v12);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
            goto LABEL_26;
          }
          ((void (__fastcall *)(IUnknown *))this[10]->lpVtbl[8].QueryInterface)(this[10]);
          LOBYTE(v29.x) = 0;
          IsLauncherVisibleOnMonitor = ImmersiveMultimonHelpers::IsLauncherVisibleOnMonitor(
                                         this[2],
                                         0LL,
                                         (struct IImmersiveLauncher *)&v29,
                                         v13);
          if ( IsLauncherVisibleOnMonitor >= 0 )
          {
            if ( LOBYTE(v29.x) )
              WindowArrangementView::EnablePlaceModeDropFeedback((__int64)this, 1, 0LL, 0LL);
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x480,
              (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
              (const char *)(unsigned int)IsLauncherVisibleOnMonitor);
          }
          v15 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut + 48LL))(ppvOut);
          if ( v15 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x487,
              (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
              (const char *)(unsigned int)v15);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
        }
        ((void (__fastcall *)(IUnknown *))this[10]->lpVtbl[1].QueryInterface)(this[10]);
        PrimaryMonitor = ((__int64 (__fastcall *)(IUnknown *))this[9]->lpVtbl[1].QueryInterface)(this[9]);
        LastError = PrimaryMonitor;
        if ( PrimaryMonitor >= 0 )
        {
          v17 = *((_DWORD *)this + 72);
          if ( v17 == 2 )
          {
            v18 = (HWND)((__int64 (__fastcall *)(IUnknown *))this[10]->lpVtbl[4].Release)(this[10]);
            if ( !SetForegroundWindow(v18) )
            {
              LastError = wil::details::in1diag3::Return_GetLastError(
                            retaddr,
                            (void *)0x491,
                            (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
                            v19);
              goto LABEL_26;
            }
            WindowArrangementView::ShowPlaceModeFeedback((__int64)(this + 6), 0, 0LL, 0);
          }
          else if ( v17 == 3 )
          {
            *((_BYTE *)this + 315) = 1;
            v27 = this;
            Microsoft::WRL::ComPtr<WindowArrangementView>::InternalAddRef((__int64 *)&v27, v16);
            v29 = (struct tagPOINT)this;
            Microsoft::WRL::ComPtr<WindowArrangementView>::InternalAddRef((__int64 *)&v29, v21);
            v25 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_382fa76d9980bbd2846dd440d3c3bc97____(
                    v23,
                    v22,
                    v24,
                    &v29);
            LastError = v25;
            if ( v25 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x4A7,
                (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
                (const char *)(unsigned int)v25);
              Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v29);
              Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v27);
              goto LABEL_26;
            }
            ((void (__fastcall *)(IUnknown *))this[10]->lpVtbl[7].AddRef)(this[10]);
            ((void (__fastcall *)(IUnknown *, _QWORD))this[10]->lpVtbl[3].AddRef)(this[10], 0LL);
            Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v29);
            Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v27);
          }
          else
          {
            ((void (__fastcall *)(IUnknown *))this[10]->lpVtbl[7].AddRef)(this[10]);
            v29 = *a3;
            PrimaryMonitor = WindowArrangementView::UpdateView(this, &v29, 0LL);
            LastError = PrimaryMonitor;
            if ( PrimaryMonitor < 0 )
            {
              v11 = 1199LL;
              goto LABEL_8;
            }
          }
          LastError = 0;
          goto LABEL_26;
        }
        v11 = 1164LL;
      }
      else
      {
        v11 = 1142LL;
      }
    }
    else
    {
      v11 = 1141LL;
    }
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)PrimaryMonitor);
LABEL_26:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
    return LastError;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x470,
    (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)(unsigned int)PlaceModePoint);
  return LastError;
}
