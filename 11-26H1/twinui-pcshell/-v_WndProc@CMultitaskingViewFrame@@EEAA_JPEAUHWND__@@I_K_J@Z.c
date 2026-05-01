/*
 * XREFs of ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1804BC260
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_EnsureDesktopZOrder@CMultitaskingViewFrame@@AEAAXXZ @ 0x1804BBB28 (-_EnsureDesktopZOrder@CMultitaskingViewFrame@@AEAAXXZ.c)
 *     ?_OnMouseButtonDown@CMultitaskingViewFrame@@AEAA_NIAEBUCPoint@Geometry@@@Z @ 0x1804BBBD0 (-_OnMouseButtonDown@CMultitaskingViewFrame@@AEAA_NIAEBUCPoint@Geometry@@@Z.c)
 *     ?_OnMouseButtonUp@CMultitaskingViewFrame@@AEAA_NIAEBUCPoint@Geometry@@@Z @ 0x1804BBC5C (-_OnMouseButtonUp@CMultitaskingViewFrame@@AEAA_NIAEBUCPoint@Geometry@@@Z.c)
 *     ?_OnMouseMove@CMultitaskingViewFrame@@AEAAXAEBUCPoint@Geometry@@@Z @ 0x1804BBCE8 (-_OnMouseMove@CMultitaskingViewFrame@@AEAAXAEBUCPoint@Geometry@@@Z.c)
 *     ?_OnThumbnailSizeChanged@CMultitaskingViewFrame@@AEAAXPEAX@Z @ 0x1804BBDE0 (-_OnThumbnailSizeChanged@CMultitaskingViewFrame@@AEAAXPEAX@Z.c)
 *     ?_OnWindowPosChanged@CMultitaskingViewFrame@@AEAAXXZ @ 0x1804BBEA8 (-_OnWindowPosChanged@CMultitaskingViewFrame@@AEAAXXZ.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_c70d466e53705bebc116464583ec8f40___ @ 0x1804CC528 (AsyncFrameEvents--_NotifyFrameEvent__lambda_c70d466e53705bebc116464583ec8f40___.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_e640755ae9c094dc0d06fd44d037b19e___ @ 0x1804CC640 (AsyncFrameEvents--_NotifyFrameEvent__lambda_e640755ae9c094dc0d06fd44d037b19e___.c)
 *     ?GetModifierKeyState@ElementHelpers@@YA?AW4ModifierKeys@@XZ @ 0x1804CC9DC (-GetModifierKeyState@ElementHelpers@@YA-AW4ModifierKeys@@XZ.c)
 *     ?s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_HOW_SELECTED_FLAGS@@@Z @ 0x180685824 (-s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall CMultitaskingViewFrame::v_WndProc(
        CMultitaskingViewFrame *this,
        HWND a2,
        UINT a3,
        void *a4,
        LPARAM lParam)
{
  LONG_PTR v8; // rbx
  char v9; // r15
  char v10; // al
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 (__fastcall *v13)(__int64, _QWORD, _QWORD); // rbx
  __int64 v14; // rcx
  __int64 v15; // r13
  int (__fastcall *v16)(__int64, GUID *, IRawElementProviderSimple **); // rbx
  unsigned int ModifierKeyState; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  bool *v22; // [rsp+20h] [rbp-30h]
  enum GRID_HOW_SELECTED_FLAGS *v23; // [rsp+28h] [rbp-28h]
  IRawElementProviderSimple *el; // [rsp+30h] [rbp-20h] BYREF
  LPARAM v25; // [rsp+38h] [rbp-18h] BYREF
  __int64 v26; // [rsp+40h] [rbp-10h]
  int v27; // [rsp+48h] [rbp-8h]

  v8 = 0LL;
  v9 = 0;
  if ( a3 > 0x104 )
  {
    if ( a3 > 0x207 )
    {
      if ( a3 != 520 )
      {
        if ( a3 == 533 )
        {
          v21 = *((_QWORD *)this + 310);
          if ( v21 )
            (*(void (__fastcall **)(__int64, HWND))(*(_QWORD *)v21 + 232LL))(v21, a2);
          return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, lParam);
        }
        if ( a3 == 673 )
        {
          v20 = *((_QWORD *)this + 310);
          if ( v20 )
          {
            LODWORD(v25) = (__int16)lParam;
            HIDWORD(v25) = SWORD1(lParam);
            v26 = 0LL;
            v27 = 4;
            (*(void (__fastcall **)(__int64, LPARAM *))(*(_QWORD *)v20 + 224LL))(v20, &v25);
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
          v19 = *((_QWORD *)this + 310);
          if ( v19 )
            (*(void (__fastcall **)(__int64, HWND))(*(_QWORD *)v19 + 216LL))(v19, a2);
          *((_WORD *)this + 1264) = 0;
        }
        return v8;
      }
      goto LABEL_49;
    }
    if ( a3 != 519 )
    {
      if ( a3 == 261 )
        goto LABEL_23;
      if ( a3 == 512 )
      {
        LODWORD(v25) = (__int16)lParam;
        HIDWORD(v25) = SWORD1(lParam);
        CMultitaskingViewFrame::_OnMouseMove(
          (CMultitaskingViewFrame *)((char *)this - 40),
          (const struct Geometry::CPoint *)&v25);
        return v8;
      }
      if ( a3 != 513 )
      {
        if ( a3 == 514 )
          goto LABEL_49;
        if ( a3 != 516 )
        {
          if ( a3 != 517 )
            return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, lParam);
LABEL_49:
          LODWORD(v25) = (__int16)lParam;
          HIDWORD(v25) = SWORD1(lParam);
          v10 = CMultitaskingViewFrame::_OnMouseButtonUp(
                  (CMultitaskingViewFrame *)((char *)this - 40),
                  a3,
                  (const struct Geometry::CPoint *)&v25);
          goto LABEL_50;
        }
      }
    }
    LODWORD(v25) = (__int16)lParam;
    HIDWORD(v25) = SWORD1(lParam);
    v10 = CMultitaskingViewFrame::_OnMouseButtonDown((HWND *)this - 5, a3, (const struct Geometry::CPoint *)&v25);
    goto LABEL_50;
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
          v25 = lParam;
          AsyncFrameEvents::_NotifyFrameEvent__lambda_e640755ae9c094dc0d06fd44d037b19e___((char *)this + 2416, &v25);
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
                v22,
                v23);
LABEL_50:
        v9 = v10;
        goto LABEL_51;
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
        v25 = lParam;
        LOBYTE(v26) = 0;
        v14 = *((_QWORD *)this + 310);
        if ( v14
          && ((_DWORD)lParam != -1
           || (*(unsigned __int8 (__fastcall **)(__int64, HWND))(*(_QWORD *)v14 + 304LL))(v14, a2)) )
        {
          (*(void (__fastcall **)(_QWORD, LPARAM *))(**((_QWORD **)this + 310) + 256LL))(*((_QWORD *)this + 310), &v25);
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
        v8 = 0LL;
        goto LABEL_50;
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
    goto LABEL_51;
  }
  if ( lParam != -25 )
    return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, lParam);
  el = 0LL;
  v15 = *((_QWORD *)this + 310);
  if ( v15 )
  {
    v16 = *(int (__fastcall **)(__int64, GUID *, IRawElementProviderSimple **))(*(_QWORD *)v15 + 376LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&el);
    if ( v16(v15, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c, &el) < 0 )
    {
      v8 = 0LL;
    }
    else
    {
      v8 = UiaReturnRawElementProvider(*((HWND *)this + 1), (WPARAM)a4, -25LL, el);
      v9 = 1;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&el);
LABEL_51:
  if ( !v9 )
    return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, lParam);
  return v8;
}
