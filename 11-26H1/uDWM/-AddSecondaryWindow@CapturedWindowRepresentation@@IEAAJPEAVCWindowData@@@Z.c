/*
 * XREFs of ?AddSecondaryWindow@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x18009C02C
 * Callers:
 *     ?ReevaluateSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x18003A504 (-ReevaluateSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?LookForSecondaryWindows@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x18009C564 (-LookForSecondaryWindows@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InsertChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@0_N@Z @ 0x18001C620 (-InsertChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@0_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18006B24C (-SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     ??4?$ComPtr@VCRedirectVisualProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009BF78 (--4-$ComPtr@VCRedirectVisualProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?UpdateSecondaryWindowProperties@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x18009C614 (-UpdateSecondaryWindowProperties@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z @ 0x1800A7FCC (-CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CapturedWindowRepresentation::AddSecondaryWindow(
        CContainerVisualProxy **this,
        struct CWindowData *a2)
{
  CCompositor *v4; // rbx
  struct CVisualProxy *v5; // rbp
  int inserted; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  CBaseObject **v9; // rax
  CBaseObject **v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // r8d
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CVisualProxy *v16; // [rsp+58h] [rbp+10h] BYREF
  CBaseObject **v17; // [rsp+60h] [rbp+18h] BYREF

  v4 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  v5 = *(struct CVisualProxy **)(*((_QWORD *)a2 + 55) + 16LL);
  v16 = 0LL;
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v16);
  inserted = CCompositor::CreateRedirectVisualProxy(v4, &v16);
  v7 = inserted;
  if ( inserted >= 0 )
  {
    inserted = CRedirectVisualProxy::SetRedirectedVisual(v16, v5);
    v7 = inserted;
    if ( inserted >= 0 )
    {
      inserted = CContainerVisualProxy::InsertChild(this[5], v16, 0LL, 0);
      v7 = inserted;
      if ( inserted >= 0 )
      {
        v9 = (CBaseObject **)operator new(0x10uLL);
        v10 = v9;
        if ( v9 )
        {
          *v9 = 0LL;
          v9[1] = 0LL;
        }
        else
        {
          v10 = 0LL;
        }
        v17 = v10;
        *v10 = (CBaseObject *)*((_QWORD *)a2 + 5);
        Microsoft::WRL::ComPtr<CRedirectVisualProxy>::operator=(v17 + 1, &v16);
        v11 = *((_DWORD *)this + 18);
        v12 = v11 + 1;
        if ( v11 + 1 < v11 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB7u, 0LL);
        }
        else if ( v12 > *((_DWORD *)this + 17) )
        {
          v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(this + 6), 8, 1, &v17);
          if ( v13 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0xC2u, 0LL);
        }
        else
        {
          *((_QWORD *)this[6] + v11) = v17;
          *((_DWORD *)this + 18) = v12;
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
    (int)"clientcore\\windows\\dwm\\udwm\\capturedwindowrepresentation.cpp",
    (const char *)(unsigned int)inserted);
LABEL_20:
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v16);
  return v7;
}
