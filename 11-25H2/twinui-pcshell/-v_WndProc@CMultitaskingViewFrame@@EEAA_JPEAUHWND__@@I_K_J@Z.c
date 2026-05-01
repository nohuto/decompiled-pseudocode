/*
 * XREFs of ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1804AA720
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_EnsureDesktopZOrder@CMultitaskingViewFrame@@AEAAXXZ @ 0x1804AA090 (-_EnsureDesktopZOrder@CMultitaskingViewFrame@@AEAAXXZ.c)
 *     ?_OnMouseButtonDown@CMultitaskingViewFrame@@AEAA_NIAEBUCPoint@Geometry@@@Z @ 0x1804AA12C (-_OnMouseButtonDown@CMultitaskingViewFrame@@AEAA_NIAEBUCPoint@Geometry@@@Z.c)
 *     ?_OnMouseMove@CMultitaskingViewFrame@@AEAAXAEBUCPoint@Geometry@@@Z @ 0x1804AA1BC (-_OnMouseMove@CMultitaskingViewFrame@@AEAAXAEBUCPoint@Geometry@@@Z.c)
 *     ?_OnThumbnailSizeChanged@CMultitaskingViewFrame@@AEAAXPEAX@Z @ 0x1804AA2B0 (-_OnThumbnailSizeChanged@CMultitaskingViewFrame@@AEAAXPEAX@Z.c)
 *     ?_OnWindowPosChanged@CMultitaskingViewFrame@@AEAAXXZ @ 0x1804AA378 (-_OnWindowPosChanged@CMultitaskingViewFrame@@AEAAXXZ.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_c70d466e53705bebc116464583ec8f40___ @ 0x1804BA6A0 (AsyncFrameEvents--_NotifyFrameEvent__lambda_c70d466e53705bebc116464583ec8f40___.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_e640755ae9c094dc0d06fd44d037b19e___ @ 0x1804BA7B0 (AsyncFrameEvents--_NotifyFrameEvent__lambda_e640755ae9c094dc0d06fd44d037b19e___.c)
 *     ?GetModifierKeyState@ElementHelpers@@YA?AW4ModifierKeys@@XZ @ 0x1804BAB34 (-GetModifierKeyState@ElementHelpers@@YA-AW4ModifierKeys@@XZ.c)
 *     ?GetPointerButtonForMessage@ElementHelpers@@YA?AW4PointerButton@@I@Z @ 0x1804BAB90 (-GetPointerButtonForMessage@ElementHelpers@@YA-AW4PointerButton@@I@Z.c)
 *     ?s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_HOW_SELECTED_FLAGS@@@Z @ 0x18065F754 (-s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall CMultitaskingViewFrame::v_WndProc(
        CMultitaskingViewFrame *this,
        HWND a2,
        UINT a3,
        void *a4,
        LPARAM lParam)
{
  LONG_PTR v8; // r13
  char v9; // r15
  char v10; // al
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 (__fastcall *v13)(__int64, _QWORD, _QWORD); // rbx
  __int64 v14; // rcx
  __int64 v15; // r13
  int (__fastcall *v16)(__int64, GUID *, IRawElementProviderSimple **); // rbx
  unsigned int ModifierKeyState; // eax
  unsigned int PointerButtonForMessage; // eax
  unsigned int v19; // r8d
  unsigned int v20; // r9d
  __int64 v21; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  bool *v26; // [rsp+20h] [rbp-30h]
  enum GRID_HOW_SELECTED_FLAGS *v27; // [rsp+28h] [rbp-28h]
  IRawElementProviderSimple *el; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-18h] BYREF
  __int64 v30; // [rsp+40h] [rbp-10h]
  int v31; // [rsp+48h] [rbp-8h]

  v8 = 0LL;
  v29 = 0LL;
  v9 = 0;
  if ( a3 > 0x104 )
  {
    if ( a3 > 0x207 )
    {
      if ( a3 != 520 )
      {
        if ( a3 == 533 )
        {
          v25 = *((_QWORD *)this + 310);
          if ( v25 )
            (*(void (__fastcall **)(__int64, HWND))(*(_QWORD *)v25 + 232LL))(v25, a2);
          return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, lParam);
        }
        if ( a3 == 673 )
        {
          v24 = *((_QWORD *)this + 310);
          if ( v24 )
          {
            LODWORD(v29) = (__int16)lParam;
            HIDWORD(v29) = SWORD1(lParam);
            v30 = 0LL;
            v31 = 4;
            (*(void (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v24 + 224LL))(v24, &v29);
          }
          *((_BYTE *)this + 2529) = 0;
        }
        else
        {
          if ( a3 != 675 )
          {
            if ( a3 == 807 )
              CMultitaskingViewFrame::_OnThumbnailSizeChanged((CMultitaskingViewFrame *)((char *)this - 40), a4);
            return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, lParam);
          }
          v23 = *((_QWORD *)this + 310);
          if ( v23 )
            (*(void (__fastcall **)(__int64, HWND))(*(_QWORD *)v23 + 216LL))(v23, a2);
          *((_WORD *)this + 1264) = 0;
        }
        return v8;
      }
    }
    else
    {
      switch ( a3 )
      {
        case 0x207u:
          goto LABEL_58;
        case 0x105u:
          goto LABEL_23;
        case 0x200u:
          LODWORD(v29) = (__int16)lParam;
          HIDWORD(v29) = SWORD1(lParam);
          CMultitaskingViewFrame::_OnMouseMove(
            (CMultitaskingViewFrame *)((char *)this - 40),
            (const struct Geometry::CPoint *)&v29);
          return v8;
        case 0x201u:
          goto LABEL_58;
      }
      if ( a3 != 514 )
      {
        if ( a3 != 516 )
        {
          if ( a3 != 517 )
            return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, lParam);
          goto LABEL_49;
        }
LABEL_58:
        LODWORD(v29) = (__int16)lParam;
        HIDWORD(v29) = SWORD1(lParam);
        v10 = CMultitaskingViewFrame::_OnMouseButtonDown((HWND *)this - 5, a3, (const struct Geometry::CPoint *)&v29);
        goto LABEL_59;
      }
    }
LABEL_49:
    PointerButtonForMessage = ElementHelpers::GetPointerButtonForMessage(a3);
    v21 = *((_QWORD *)this + 310);
    if ( v21 && PointerButtonForMessage )
    {
      v29 = __PAIR64__(v20, v19);
      v30 = 0LL;
      v31 = 4;
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64 *))(*(_QWORD *)v21 + 208LL))(
             v21,
             PointerButtonForMessage,
             &v29);
    }
    if ( *((HWND *)this + 1) == GetCapture() )
      ReleaseCapture();
    goto LABEL_54;
  }
  if ( a3 == 260 )
    goto LABEL_37;
  if ( a3 <= 0x2C )
  {
    switch ( a3 )
    {
      case 0x2Cu:
        goto LABEL_11;
      case 6u:
        if ( a4 )
        {
          CMultitaskingViewFrame::_EnsureDesktopZOrder((HWND *)this - 5);
        }
        else
        {
          v29 = lParam;
          AsyncFrameEvents::_NotifyFrameEvent__lambda_e640755ae9c094dc0d06fd44d037b19e___((char *)this + 2416, &v29);
        }
        return v8;
      case 7u:
      case 8u:
        v11 = *((_QWORD *)this + 310);
        if ( v11 )
        {
          LOBYTE(a2) = a3 == 7;
          (*(void (__fastcall **)(__int64, HWND))(*(_QWORD *)v11 + 296LL))(v11, a2);
        }
        return v8;
      case 0x10u:
      case 0x14u:
        return v8;
      case 0x2Bu:
LABEL_11:
        v10 = CImmersiveContextMenuOwnerDrawHelper::s_ContextMenuWndProc(
                *((HWND *)this + 1),
                a3,
                (unsigned __int64)a4,
                lParam,
                v26,
                v27);
LABEL_59:
        v9 = v10;
        goto LABEL_54;
    }
    return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, lParam);
  }
  if ( a3 != 61 )
  {
    switch ( a3 )
    {
      case 'G':
        CMultitaskingViewFrame::_OnWindowPosChanged((HWND *)this - 5);
        return v8;
      case '{':
        v29 = lParam;
        LOBYTE(v30) = 0;
        v14 = *((_QWORD *)this + 310);
        if ( v14
          && ((_DWORD)lParam != -1
           || (*(unsigned __int8 (__fastcall **)(__int64, HWND))(*(_QWORD *)v14 + 304LL))(v14, a2)) )
        {
          (*(void (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 310) + 256LL))(
            *((_QWORD *)this + 310),
            &v29);
        }
        return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, lParam);
      case '~':
        AsyncFrameEvents::_NotifyFrameEvent__lambda_c70d466e53705bebc116464583ec8f40___((char *)this + 2416, a2);
        return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, lParam);
    }
    if ( a3 != 256 )
    {
      if ( a3 != 257 )
        return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, lParam);
LABEL_23:
      v12 = *((_QWORD *)this + 310);
      if ( v12 )
      {
        v13 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 248LL);
LABEL_39:
        ModifierKeyState = ElementHelpers::GetModifierKeyState(this, a2);
        v10 = v13(v12, (unsigned int)a4, ModifierKeyState);
        goto LABEL_59;
      }
      goto LABEL_40;
    }
LABEL_37:
    v12 = *((_QWORD *)this + 310);
    if ( v12 )
    {
      v13 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 240LL);
      goto LABEL_39;
    }
LABEL_40:
    v9 = 0;
    goto LABEL_54;
  }
  if ( lParam != -25 )
    return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, lParam);
  el = 0LL;
  v15 = *((_QWORD *)this + 310);
  if ( v15
    && (v16 = *(int (__fastcall **)(__int64, GUID *, IRawElementProviderSimple **))(*(_QWORD *)v15 + 376LL),
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&el),
        v16(v15, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c, &el) >= 0) )
  {
    v8 = UiaReturnRawElementProvider(*((HWND *)this + 1), (WPARAM)a4, -25LL, el);
    v9 = 1;
  }
  else
  {
    v8 = v29;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&el);
LABEL_54:
  if ( !v9 )
    return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, lParam);
  return v8;
}
