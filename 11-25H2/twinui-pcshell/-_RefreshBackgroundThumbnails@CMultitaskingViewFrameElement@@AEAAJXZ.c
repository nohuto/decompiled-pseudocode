/*
 * XREFs of ?_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ @ 0x1804B983C
 * Callers:
 *     ?RefreshBackground@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x1804B89A0 (-RefreshBackground@CMultitaskingViewFrameElement@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x1802388D8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1804A7C5C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDCompThumbnail@@1PEAPEAU4@2@Z @ 0x1804B7DB8 (-CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDC.c)
 *     ?_CreateDesktopBackgroundThumbnail@CMultitaskingViewFrameElement@@AEAAJAEBUCRect@Geometry@@PEAPEAUIDCompThumbnail@@@Z @ 0x1804B9650 (-_CreateDesktopBackgroundThumbnail@CMultitaskingViewFrameElement@@AEAAJAEBUCRect@Geometry@@PEAPE.c)
 *     ?_GetContentLocation@CMultitaskingViewFrameElement@@AEAA?AUCRect@Geometry@@AEBUtagRECT@@@Z @ 0x1804B96B0 (-_GetContentLocation@CMultitaskingViewFrameElement@@AEAA-AUCRect@Geometry@@AEBUtagRECT@@@Z.c)
 *     ?_GetWallpaperSrcRect@CMultitaskingViewFrameElement@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x1804B9778 (-_GetWallpaperSrcRect@CMultitaskingViewFrameElement@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?_SetContentThumbnailRects@CMultitaskingViewFrameElement@@AEAAJPEAUIDCompThumbnail@@0@Z @ 0x1804B9AD8 (-_SetContentThumbnailRects@CMultitaskingViewFrameElement@@AEAAJPEAUIDCompThumbnail@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMultitaskingViewFrameElement::_RefreshBackgroundThumbnails(CMultitaskingViewFrameElement *this)
{
  __int64 *v2; // rdi
  const char *v3; // r9
  int WallpaperSrcRect; // ebx
  __int64 v6; // rdx
  int DesktopBackgroundThumbnail; // eax
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(struct IDCompThumbnail *, struct tagRECT *, _QWORD, _QWORD); // r10
  __int64 v10; // rbx
  struct IDCompThumbnail *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct IDCompThumbnail *v14; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v15; // [rsp+38h] [rbp-38h] BYREF
  struct tagRECT Rect; // [rsp+48h] [rbp-28h] BYREF
  struct tagRECT v17; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v2 = (__int64 *)((char *)this + 504);
  if ( *((_QWORD *)this + 63) )
  {
    Rect = 0LL;
    v15 = 0LL;
    if ( !GetWindowRect(*((HWND *)this + 59), &Rect) )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x33F,
               (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
               v3);
    WallpaperSrcRect = CMultitaskingViewFrameElement::_GetWallpaperSrcRect((HWND *)this, &Rect, &v15);
    if ( WallpaperSrcRect < 0 )
    {
      v6 = 832LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
        (const char *)(unsigned int)WallpaperSrcRect);
      return (unsigned int)WallpaperSrcRect;
    }
    if ( !Geometry::operator==(&v15, (_DWORD *)this + 138) )
    {
      v14 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
      DesktopBackgroundThumbnail = CMultitaskingViewFrameElement::_CreateDesktopBackgroundThumbnail(
                                     this,
                                     (const struct Geometry::CRect *)&v15,
                                     (const struct tagSIZE *)&v14);
      WallpaperSrcRect = DesktopBackgroundThumbnail;
      if ( DesktopBackgroundThumbnail < 0 )
      {
        v8 = 836LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
          (const char *)(unsigned int)DesktopBackgroundThumbnail);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
        return (unsigned int)WallpaperSrcRect;
      }
      DesktopBackgroundThumbnail = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, __int64, _QWORD))(*(_QWORD *)v14 + 152LL))(
                                     v14,
                                     *v2,
                                     0LL);
      WallpaperSrcRect = DesktopBackgroundThumbnail;
      if ( DesktopBackgroundThumbnail < 0 )
      {
        v8 = 839LL;
        goto LABEL_15;
      }
      v9 = *(__int64 (__fastcall **)(struct IDCompThumbnail *, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v14 + 24LL);
      v17.left = v15.left - Rect.left;
      v17.right = v15.right - Rect.left;
      v17.top = v15.top - Rect.top;
      v17.bottom = v15.bottom - Rect.top;
      DesktopBackgroundThumbnail = v9(v14, &v17, 0LL, 0LL);
      WallpaperSrcRect = DesktopBackgroundThumbnail;
      if ( DesktopBackgroundThumbnail < 0 )
      {
        v8 = 840LL;
        goto LABEL_15;
      }
      Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(v2, (__int64 *)&v14);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    }
  }
  if ( *((_QWORD *)this + 64) )
  {
    if ( *((_QWORD *)this + 34) )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 65);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 64);
      v10 = *((_QWORD *)this + 67);
      v11 = (struct IDCompThumbnail *)*((_QWORD *)this + 66);
      CMultitaskingViewFrameElement::_GetContentLocation((__int64)this, &v17, (_DWORD *)this + 14);
      WallpaperSrcRect = CMultitaskingViewFrameElement::CreateContentDimmingLayerThumbnail(
                           (__int64)this,
                           v12,
                           v11,
                           v10,
                           (char *)this + 512,
                           (char *)this + 520);
      if ( WallpaperSrcRect < 0 )
      {
        v6 = 855LL;
        goto LABEL_6;
      }
    }
    WallpaperSrcRect = CMultitaskingViewFrameElement::_SetContentThumbnailRects(
                         this,
                         *((struct IDCompThumbnail **)this + 64),
                         *((struct IDCompThumbnail **)this + 65));
    if ( WallpaperSrcRect < 0 )
    {
      v6 = 857LL;
      goto LABEL_6;
    }
  }
  v13 = *((_QWORD *)this + 68);
  if ( v13 )
  {
    WallpaperSrcRect = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD))(*(_QWORD *)v13 + 24LL))(
                         v13,
                         (char *)this + 56,
                         0LL,
                         0LL);
    if ( WallpaperSrcRect < 0 )
    {
      v6 = 862LL;
      goto LABEL_6;
    }
  }
  return 0LL;
}
