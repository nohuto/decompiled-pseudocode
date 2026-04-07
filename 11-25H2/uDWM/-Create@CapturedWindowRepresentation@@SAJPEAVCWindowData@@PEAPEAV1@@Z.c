/*
 * XREFs of ?Create@CapturedWindowRepresentation@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x1800A900C
 * Callers:
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowRepresentation@@1@Z @ 0x1800C3F00 (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InsertChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@0_N@Z @ 0x1800084EC (-InsertChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@0_N@Z.c)
 *     ??0CBaseObject@@QEAA@XZ @ 0x1800088E4 (--0CBaseObject@@QEAA@XZ.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180009100 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ?CreateContainerVisualProxy@CCompositor@@QEAAJPEAPEAVCContainerVisualProxy@@@Z @ 0x180010F40 (-CreateContainerVisualProxy@CCompositor@@QEAAJPEAPEAVCContainerVisualProxy@@@Z.c)
 *     ??$?8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@$$T@Z @ 0x18001CBD4 (--$-8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV-$shared_ptr@VCCachedBorderBrush@CWindowBo.c)
 *     ?CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z @ 0x180029568 (-CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z.c)
 *     ?SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180029574 (-SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4?$ComPtr@VCRedirectVisualProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A8DD0 (--4-$ComPtr@VCRedirectVisualProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?LookForSecondaryWindows@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x1800A93A4 (-LookForSecondaryWindows@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CapturedWindowRepresentation::Create(
        struct CWindowData *a1,
        struct CapturedWindowRepresentation **a2)
{
  CBaseObject *v4; // rax
  CBaseObject *v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  CCompositor *v8; // r14
  struct CVisualProxy *v9; // r15
  int v10; // eax
  __int64 v11; // rdx
  int inserted; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  struct CVisualProxy *v17; // [rsp+30h] [rbp-10h] BYREF
  CBaseObject *v18; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct CVisualProxy *v20; // [rsp+80h] [rbp+40h] BYREF
  CContainerVisualProxy *v21; // [rsp+88h] [rbp+48h] BYREF

  v4 = (CBaseObject *)operator new[](0x50uLL, (const struct std::nothrow_t *)a2);
  v5 = v4;
  v18 = v4;
  if ( v4 )
  {
    CBaseObject::CBaseObject(v4);
    *(_QWORD *)v5 = &CapturedWindowRepresentation::`vftable';
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 3) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    *((_QWORD *)v5 + 5) = 0LL;
    DynArrayImpl<0>::DynArrayImpl<0>((__int64)v5 + 48, 0LL, 0);
  }
  else
  {
    v5 = 0LL;
  }
  v18 = v5;
  if ( !std::operator==<CWindowBorder::CCachedBorderBrush>(&v18) )
  {
    *((_QWORD *)v5 + 2) = *((_QWORD *)a1 + 5);
    v7 = *((_QWORD *)a1 + 55);
    if ( !v7 )
    {
      v6 = -2147024809;
      goto LABEL_28;
    }
    v8 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
    v9 = *(struct CVisualProxy **)(v7 + 16);
    v20 = 0LL;
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v20);
    v10 = CCompositor::CreateRedirectVisualProxy(v8, &v20);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 24LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"clientcore\\windows\\dwm\\udwm\\capturedwindowrepresentation.cpp",
        (const char *)(unsigned int)v10);
LABEL_11:
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v20);
      goto LABEL_28;
    }
    v10 = CRedirectVisualProxy::SetRedirectedVisual(v20, v9);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 25LL;
      goto LABEL_10;
    }
    Microsoft::WRL::ComPtr<CRedirectVisualProxy>::operator=((CBaseObject **)v5 + 4, &v20);
    v21 = 0LL;
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v21);
    inserted = CCompositor::CreateContainerVisualProxy((__int64)v8, &v21);
    v6 = inserted;
    if ( inserted >= 0 )
    {
      inserted = CContainerVisualProxy::InsertChild(v21, v20, 0LL, 0);
      v6 = inserted;
      if ( inserted >= 0 )
      {
        Microsoft::WRL::ComPtr<CRedirectVisualProxy>::operator=((CBaseObject **)v5 + 3, &v21);
        v17 = 0LL;
        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v17);
        v14 = CCompositor::CreateContainerVisualProxy((__int64)v8, &v17);
        v6 = v14;
        if ( v14 >= 0 )
        {
          v14 = CContainerVisualProxy::InsertChild(v21, v17, v20, 1u);
          v6 = v14;
          if ( v14 >= 0 )
          {
            Microsoft::WRL::ComPtr<CRedirectVisualProxy>::operator=((CBaseObject **)v5 + 5, &v17);
            v14 = CapturedWindowRepresentation::LookForSecondaryWindows(v5, a1);
            v6 = v14;
            if ( v14 >= 0 )
            {
              v18 = 0LL;
              *a2 = v5;
              Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v17);
              Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v21);
              Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v20);
              v6 = 0;
              goto LABEL_28;
            }
            v15 = 39LL;
          }
          else
          {
            v15 = 35LL;
          }
        }
        else
        {
          v15 = 34LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (__int64)"clientcore\\windows\\dwm\\udwm\\capturedwindowrepresentation.cpp",
          (const char *)(unsigned int)v14);
        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v17);
        goto LABEL_17;
      }
      v13 = 30LL;
    }
    else
    {
      v13 = 29LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"clientcore\\windows\\dwm\\udwm\\capturedwindowrepresentation.cpp",
      (const char *)(unsigned int)inserted);
LABEL_17:
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v21);
    goto LABEL_11;
  }
  v6 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB,
    (__int64)"clientcore\\windows\\dwm\\udwm\\capturedwindowrepresentation.cpp",
    (const char *)0x8007000ELL);
LABEL_28:
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v18);
  return v6;
}
