/*
 * XREFs of ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180544B70
 * Callers:
 *     ?s_WndProc@CDragVisual@@CA_JPEAUHWND__@@I_K_J@Z @ 0x180545200 (-s_WndProc@CDragVisual@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ScreenToClient@CPoint@Geometry@@SA?AU12@PEAUHWND__@@AEBUtagPOINT@@@Z @ 0x1804CB3A0 (-ScreenToClient@CPoint@Geometry@@SA-AU12@PEAUHWND__@@AEBUtagPOINT@@@Z.c)
 *     ?GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z @ 0x180541160 (-GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z.c)
 *     ?_ClearVisualFeedback@CDragVisual@@AEAAXXZ @ 0x180542D78 (-_ClearVisualFeedback@CDragVisual@@AEAAXXZ.c)
 *     ?_OnAppWindowSizeChanged@CDragVisual@@AEAAXPEAX@Z @ 0x180543280 (-_OnAppWindowSizeChanged@CDragVisual@@AEAAXPEAX@Z.c)
 *     ?_OnCancelDrag@CDragVisual@@AEAAXXZ @ 0x180543458 (-_OnCancelDrag@CDragVisual@@AEAAXXZ.c)
 *     ?_OnCaptureChanged@CDragVisual@@AEAAXXZ @ 0x1805434DC (-_OnCaptureChanged@CDragVisual@@AEAAXXZ.c)
 *     ?_OnClick@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x18054358C (-_OnClick@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnFinishDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z @ 0x180543674 (-_OnFinishDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z.c)
 *     ?_OnKeyDown@CDragVisual@@AEAAX_K@Z @ 0x1805436F0 (-_OnKeyDown@CDragVisual@@AEAAX_K@Z.c)
 *     ?_OnLButtonDown@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x1805437C0 (-_OnLButtonDown@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnLButtonUp@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x180543878 (-_OnLButtonUp@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x180543A38 (-_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnPointerCaptureChanged@CDragVisual@@AEAAXI@Z @ 0x180543C30 (-_OnPointerCaptureChanged@CDragVisual@@AEAAXI@Z.c)
 *     ?_OnPointerDown@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x180543C78 (-_OnPointerDown@CDragVisual@@AEAAXIUtagPOINT@@@Z.c)
 *     ?_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x180543DB4 (-_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z.c)
 *     ?_ShouldHandleInput@CDragVisual@@AEAA_NI@Z @ 0x180544258 (-_ShouldHandleInput@CDragVisual@@AEAA_NI@Z.c)
 *     ?_TrackMouseLeave@CDragVisual@@AEAAX_N@Z @ 0x180544388 (-_TrackMouseLeave@CDragVisual@@AEAAX_N@Z.c)
 *     ?s_IsPointerIdTouch@CDragVisual@@CA_NI@Z @ 0x1805451BC (-s_IsPointerIdTouch@CDragVisual@@CA_NI@Z.c)
 *     ?CDragVisualAcc_CreateInstance@@YAJPEAUIDragVisual@@AEBU_GUID@@PEAPEAX@Z @ 0x1805493B4 (-CDragVisualAcc_CreateInstance@@YAJPEAUIDragVisual@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

LRESULT __fastcall CDragVisual::_WndProc(CDragVisual *this, HWND a2, UINT a3, void *a4, LPARAM lParam)
{
  UINT v7; // edi
  LPARAM v8; // r14
  bool v9; // r13
  LRESULT v10; // r12
  char *v11; // rbx
  bool v12; // zf
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, __int64 *); // rbx
  int SingleViewFromLayout; // eax
  __int64 v16; // rdx
  struct IApplicationView **v17; // r8
  int (__fastcall ***v18)(_QWORD, GUID *, IRawElementProviderSimple **); // rdi
  int (__fastcall *v19)(_QWORD, GUID *, IRawElementProviderSimple **); // rbx
  __int64 v20; // rbx
  __int64 v21; // rcx
  HWND v22; // rbx
  HWND v23; // rdx
  struct tagPOINT *v24; // rax
  HWND v25; // rdx
  struct tagPOINT *v26; // rax
  HWND v27; // rdx
  struct tagPOINT *v28; // rax
  __int64 v30; // [rsp+20h] [rbp-10h] BYREF
  IRawElementProviderSimple *el; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  void *ppvOut; // [rsp+70h] [rbp+40h] BYREF
  HWND hWnd; // [rsp+78h] [rbp+48h]
  UINT v35; // [rsp+80h] [rbp+50h]

  v35 = a3;
  hWnd = a2;
  ppvOut = this;
  v7 = a3;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&ppvOut);
  v8 = lParam;
  v9 = 0;
  v10 = 0LL;
  if ( v7 > 0x202 )
  {
    switch ( v7 )
    {
      case 0x215u:
        CDragVisual::_OnCaptureChanged(this);
        break;
      case 0x245u:
        if ( !CDragVisual::s_IsPointerIdTouch((unsigned __int16)a4) )
          goto LABEL_37;
        if ( CDragVisual::_ShouldHandleInput(this, 581) )
        {
          v27 = (HWND)*((_QWORD *)this + 19);
          LODWORD(ppvOut) = (__int16)v8;
          HIDWORD(ppvOut) = SWORD1(v8);
          v28 = Geometry::CPoint::ScreenToClient((struct tagPOINT *)&el, v27, (LONG *)&ppvOut);
          CDragVisual::_OnPointerUpdate(this, (unsigned __int16)a4, *v28);
        }
        break;
      case 0x246u:
        if ( !CDragVisual::s_IsPointerIdTouch((unsigned __int16)a4) )
          goto LABEL_37;
        if ( CDragVisual::_ShouldHandleInput(this, 582) )
        {
          v25 = (HWND)*((_QWORD *)this + 19);
          LODWORD(ppvOut) = (__int16)v8;
          HIDWORD(ppvOut) = SWORD1(v8);
          v26 = Geometry::CPoint::ScreenToClient((struct tagPOINT *)&el, v25, (LONG *)&ppvOut);
          CDragVisual::_OnPointerDown(this, (unsigned __int16)a4, *v26);
        }
        break;
      case 0x247u:
        if ( !CDragVisual::s_IsPointerIdTouch((unsigned __int16)a4) )
          goto LABEL_37;
        if ( CDragVisual::_ShouldHandleInput(this, 583) )
        {
          v23 = (HWND)*((_QWORD *)this + 19);
          LODWORD(ppvOut) = (__int16)v8;
          HIDWORD(ppvOut) = SWORD1(v8);
          v24 = Geometry::CPoint::ScreenToClient((struct tagPOINT *)&el, v23, (LONG *)&ppvOut);
          if ( (_WORD)a4 )
          {
            if ( (unsigned __int16)a4 == *((_DWORD *)this + 82) )
            {
              if ( *((_BYTE *)this + 325) )
              {
                CDragVisual::_OnFinishDrag(this, (unsigned __int16)a4, *v24);
                *((_BYTE *)this + 325) = 0;
              }
              else
              {
                CDragVisual::_OnClick((HWND *)this, *v24);
              }
              *((_DWORD *)this + 82) = 0;
            }
          }
        }
        break;
      case 0x24Cu:
        CDragVisual::_OnPointerCaptureChanged(this, (unsigned __int16)a4);
        break;
      case 0x2A3u:
        if ( !CDragVisual::_ShouldHandleInput(this, 675) )
        {
LABEL_37:
          v10 = DefWindowProcW(hWnd, v7, (WPARAM)a4, v8);
          break;
        }
        CDragVisual::_TrackMouseLeave(this, 0);
        v22 = (HWND)*((_QWORD *)this + 19);
        if ( v22 != GetCapture() && !*((_DWORD *)this + 82) )
          CDragVisual::_ClearVisualFeedback(this);
        break;
      default:
        switch ( v7 )
        {
          case 0x327u:
            CDragVisual::_OnAppWindowSizeChanged(this, a4);
            break;
          case 0x401u:
            CDragVisual::_OnCancelDrag(this);
            break;
          case 0x402u:
            v21 = *((_QWORD *)this + 12);
            if ( v21 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 24LL))(v21);
            break;
        }
        goto LABEL_37;
    }
  }
  else
  {
    switch ( v7 )
    {
      case 0x202u:
        if ( !CDragVisual::_ShouldHandleInput(this, 514) )
          goto LABEL_37;
        LODWORD(ppvOut) = (__int16)v8;
        HIDWORD(ppvOut) = SWORD1(v8);
        CDragVisual::_OnLButtonUp(this, (struct tagPOINT)ppvOut);
        break;
      case 6u:
        if ( !a4 && CDragVisual::_ShouldHandleInput(this, 6) )
        {
          v20 = 0LL;
          ppvOut = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
          if ( IUnknown_QueryService(
                 *((IUnknown **)this + 2),
                 &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
                 &GUID_84098f74_87a7_4582_b398_f6c3178e9dd6,
                 &ppvOut) >= 0 )
            v20 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut + 96LL))(ppvOut);
          if ( v8 != v20 )
            PostMessageW(*((HWND *)this + 19), 0x401u, 0LL, 0LL);
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
        }
        goto LABEL_37;
      case 0x10u:
        break;
      case 0x14u:
        v10 = 1LL;
        break;
      case 0x21u:
        v9 = *((_DWORD *)this + 37) != 6;
        v10 = v9 ? 3 : 0;
        goto LABEL_36;
      case 0x3Du:
        if ( *((_BYTE *)this + 272) && lParam == -25 )
        {
          v11 = (char *)this + 96;
          if ( *((_QWORD *)this + 12) )
            goto LABEL_31;
          if ( !*((_QWORD *)this + 17) )
            goto LABEL_31;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 12);
          if ( (int)CDragVisualAcc_CreateInstance(
                      (struct IDragVisual *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)),
                      (const struct _GUID *)((char *)this + 24),
                      (void **)this + 12) < 0 )
            goto LABEL_31;
          v12 = *((_DWORD *)this + 37) == 6;
          v30 = 0LL;
          ppvOut = 0LL;
          if ( v12 )
          {
            v13 = *((_QWORD *)this + 17);
            v14 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 72LL);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
            SingleViewFromLayout = v14(v13, &v30);
            if ( SingleViewFromLayout >= 0 )
            {
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppvOut);
              SingleViewFromLayout = AppLayoutHelpers::GetSingleViewFromLayout(
                                       *((AppLayoutHelpers **)this + 11),
                                       (struct IAppLayout *)&ppvOut,
                                       v17);
              if ( SingleViewFromLayout >= 0 )
              {
                v11 = (char *)this + 96;
                (*(void (__fastcall **)(_QWORD, void *, __int64))(**((_QWORD **)this + 12) + 88LL))(
                  *((_QWORD *)this + 12),
                  ppvOut,
                  v30);
                goto LABEL_30;
              }
              v16 = 2285LL;
            }
            else
            {
              v16 = 2284LL;
            }
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)v16,
              (int)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dragvisual.cpp",
              (const char *)(unsigned int)SingleViewFromLayout);
            v11 = (char *)this + 96;
          }
LABEL_30:
          (*(void (__fastcall **)(char *))(*((_QWORD *)this + 3) + 216LL))((char *)this + 24);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppvOut);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
LABEL_31:
          el = 0LL;
          v18 = *(int (__fastcall ****)(_QWORD, GUID *, IRawElementProviderSimple **))v11;
          if ( *(_QWORD *)v11 )
          {
            v19 = **v18;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&el);
            if ( v19(v18, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c, &el) >= 0 )
            {
              v10 = UiaReturnRawElementProvider(*((HWND *)this + 19), (WPARAM)a4, -25LL, el);
              v9 = 1;
            }
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&el);
          v7 = v35;
LABEL_36:
          if ( v9 )
            break;
          goto LABEL_37;
        }
        goto LABEL_37;
      default:
        switch ( v7 )
        {
          case 0x47u:
            goto LABEL_81;
          case 0x100u:
            if ( CDragVisual::_ShouldHandleInput(this, 256) )
            {
              CDragVisual::_OnKeyDown(this, (int)a4);
              goto LABEL_81;
            }
            break;
          case 0x200u:
            if ( CDragVisual::_ShouldHandleInput(this, 512) )
            {
              LODWORD(ppvOut) = (__int16)v8;
              HIDWORD(ppvOut) = SWORD1(v8);
              CDragVisual::_OnMouseMove(this, (struct tagPOINT)ppvOut);
              goto LABEL_81;
            }
            break;
          default:
            if ( v7 == 513 && CDragVisual::_ShouldHandleInput(this, 513) )
            {
              LODWORD(ppvOut) = (__int16)v8;
              HIDWORD(ppvOut) = SWORD1(v8);
              CDragVisual::_OnLButtonDown(this, (struct tagPOINT)ppvOut);
              goto LABEL_81;
            }
            break;
        }
        goto LABEL_37;
    }
  }
LABEL_81:
  if ( this )
    (*(void (__fastcall **)(CDragVisual *))(*(_QWORD *)this + 16LL))(this);
  return v10;
}
