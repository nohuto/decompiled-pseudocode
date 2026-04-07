/*
 * XREFs of ?AddSecondaryWindow@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x1800A8E74
 * Callers:
 *     ?ReevaluateSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x180025224 (-ReevaluateSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?LookForSecondaryWindows@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x1800A93A4 (-LookForSecondaryWindows@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InsertChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@0_N@Z @ 0x1800084EC (-InsertChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@0_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z @ 0x180029568 (-CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z.c)
 *     ?SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180029574 (-SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4?$ComPtr@VCRedirectVisualProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A8DD0 (--4-$ComPtr@VCRedirectVisualProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?UpdateSecondaryWindowProperties@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x1800A9454 (-UpdateSecondaryWindowProperties@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CapturedWindowRepresentation::AddSecondaryWindow(
        CContainerVisualProxy **this,
        struct CWindowData *a2)
{
  CCompositor *v4; // rbx
  struct CVisualProxy *v5; // rsi
  int inserted; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  const struct std::nothrow_t *v9; // rdx
  CBaseObject **v10; // rax
  CBaseObject **v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // r8d
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CVisualProxy *v17; // [rsp+58h] [rbp+10h] BYREF
  CBaseObject **v18; // [rsp+60h] [rbp+18h] BYREF

  v4 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  v5 = *(struct CVisualProxy **)(*((_QWORD *)a2 + 55) + 16LL);
  v17 = 0LL;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v17);
  inserted = CCompositor::CreateRedirectVisualProxy(v4, &v17);
  v7 = inserted;
  if ( inserted >= 0 )
  {
    inserted = CRedirectVisualProxy::SetRedirectedVisual(v17, v5);
    v7 = inserted;
    if ( inserted >= 0 )
    {
      inserted = CContainerVisualProxy::InsertChild(this[5], v17, 0LL, 0);
      v7 = inserted;
      if ( inserted >= 0 )
      {
        v10 = (CBaseObject **)operator new[](0x10uLL, v9);
        v11 = v10;
        if ( v10 )
        {
          *v10 = 0LL;
          v10[1] = 0LL;
        }
        else
        {
          v11 = 0LL;
        }
        v18 = v11;
        *v11 = (CBaseObject *)*((_QWORD *)a2 + 5);
        Microsoft::WRL::ComPtr<CRedirectVisualProxy>::operator=(v18 + 1, &v17);
        v12 = *((_DWORD *)this + 18);
        v13 = v12 + 1;
        if ( v12 + 1 < v12 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB3u, 0LL);
        }
        else if ( v13 > *((_DWORD *)this + 17) )
        {
          v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(this + 6), 8, 1, &v18);
          if ( v14 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0xBEu, 0LL);
        }
        else
        {
          *((_QWORD *)this[6] + v12) = v18;
          *((_DWORD *)this + 18) = v13;
        }
        inserted = CapturedWindowRepresentation::UpdateSecondaryWindowProperties(
                     (CapturedWindowRepresentation *)this,
                     a2);
        v7 = inserted;
        if ( inserted >= 0 )
        {
          v7 = 0;
          goto LABEL_20;
        }
        v8 = 243LL;
      }
      else
      {
        v8 = 236LL;
      }
    }
    else
    {
      v8 = 233LL;
    }
  }
  else
  {
    v8 = 232LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"clientcore\\windows\\dwm\\udwm\\capturedwindowrepresentation.cpp",
    (const char *)(unsigned int)inserted);
LABEL_20:
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v17);
  return v7;
}
