/*
 * XREFs of ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x18002E248
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_ResumeCoro$1 @ 0x180581FC0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetAndCreateIconFromGlyphAsync$.c)
 * Callees:
 *     ?GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x18002C624 (-GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002C6F8 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     ?FamilyName@?$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002C714 (-FamilyName@-$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@w.c)
 *     ?Query@?$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002C774 (-Query@-$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x18002D174 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHFONT__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180213F2C (--1-$unique_storage@U-$resource_policy@PEAUHFONT__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral.c)
 *     ?RenderTransparentCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKAEBUCRect@Geometry@@@Z @ 0x18021A928 (-RenderTransparentCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKAEBUCRect@Geometry@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHDC__@@P6AHPEAU1@@Z$1?DeleteDC@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1802C5B68 (--1-$unique_storage@U-$resource_policy@PEAUHDC__@@P6AHPEAU1@@Z$1-DeleteDC@@YAH0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

// Hidden C++ exception states: #wind=7
HICON *__fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromGlyphForSize(
        __int64 a1,
        HICON *a2,
        __int64 a3)
{
  LONG v3; // r14d
  __int64 **v5; // rbx
  winrt::impl **v6; // rax
  struct winrt::impl::hstring_header *v7; // rdx
  unsigned int v8; // r8d
  HSTRING v9; // r12
  winrt::impl **v10; // rax
  struct winrt::impl::hstring_header *v11; // rdx
  unsigned int v12; // r8d
  HSTRING v13; // r13
  LONG v14; // esi
  PCWSTR StringRawBuffer; // rax
  __int64 v16; // rdx
  WCHAR *lfFaceName; // rcx
  signed __int64 v18; // r8
  WCHAR v19; // ax
  WCHAR *v20; // rax
  HFONT v21; // rdi
  HDC CompatibleDC; // rbx
  HBITMAP v24; // rsi
  unsigned __int16 v25; // r9
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow *v26; // rcx
  const struct Geometry::CRect *offset; // [rsp+28h] [rbp-D8h]
  HFONT v28; // [rsp+30h] [rbp-D0h] BYREF
  UINT32 v29; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING v30; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING v31; // [rsp+48h] [rbp-B8h] BYREF
  UINT32 length; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h]
  HDC v34; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v35[2]; // [rsp+68h] [rbp-98h] BYREF
  LONG v36; // [rsp+70h] [rbp-90h]
  int v37; // [rsp+74h] [rbp-8Ch]
  void *ppvBits; // [rsp+80h] [rbp-80h] BYREF
  PCWSTR v39; // [rsp+88h] [rbp-78h]
  HBITMAP v40; // [rsp+90h] [rbp-70h] BYREF
  HGDIOBJ h; // [rsp+98h] [rbp-68h]
  HDC v42; // [rsp+A0h] [rbp-60h]
  BITMAPINFO pbmi; // [rsp+A8h] [rbp-58h] BYREF
  LOGFONTW lf; // [rsp+E0h] [rbp-20h] BYREF

  v3 = a3;
  v34 = (HDC)a2;
  v33 = a3;
  v31 = 0LL;
  v30 = 0LL;
  v5 = (__int64 **)(a1 + 48);
  v6 = (winrt::impl **)winrt::impl::consume_Windows_ApplicationModel_IPackageId<winrt::Windows::ApplicationModel::IPackageId>::FamilyName(
                         (__int64 **)(a1 + 48),
                         &v28);
  v9 = (HSTRING)winrt::impl::duplicate_hstring(*v6, v7, v8);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v31);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v31);
  v31 = v9;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v28);
  v10 = (winrt::impl **)winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::Query(
                          v5,
                          &v28);
  v13 = (HSTRING)winrt::impl::duplicate_hstring(*v10, v11, v12);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v30);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v30);
  v30 = v13;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v28);
  memset_0(&lf, 0, sizeof(lf));
  v14 = -HIDWORD(v33);
  lf.lfHeight = -HIDWORD(v33);
  lf.lfWeight = 400;
  lf.lfCharSet = 0;
  lf.lfQuality = 5;
  length = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(v13, &length);
  v16 = 32LL;
  lfFaceName = lf.lfFaceName;
  v18 = (char *)StringRawBuffer - (char *)lf.lfFaceName;
  do
  {
    if ( v16 == -2147483614 )
      break;
    v19 = *(WCHAR *)((char *)lfFaceName + v18);
    if ( !v19 )
      break;
    *lfFaceName++ = v19;
    --v16;
  }
  while ( v16 );
  v20 = lfFaceName - 1;
  if ( v16 )
    v20 = lfFaceName;
  *v20 = 0;
  v21 = CreateFontIndirectW(&lf);
  v28 = v21;
  if ( !v21 )
  {
    *a2 = 0LL;
    goto LABEL_17;
  }
  CompatibleDC = CreateCompatibleDC(0LL);
  v34 = CompatibleDC;
  if ( CompatibleDC )
  {
    pbmi.bmiHeader.biSize = 44;
    memset(&pbmi.bmiHeader.biSizeImage, 0, 24);
    pbmi.bmiHeader.biWidth = v3;
    pbmi.bmiHeader.biHeight = v14;
    *(_QWORD *)&pbmi.bmiHeader.biPlanes = 2097153LL;
    ppvBits = 0LL;
    v24 = CreateDIBSection(CompatibleDC, &pbmi, 0, &ppvBits, 0LL, 0);
    v40 = v24;
    if ( v24 )
    {
      v29 = 0;
      v39 = WindowsGetStringRawBuffer(v9, &v29);
      if ( v29 == 1 )
      {
        h = SelectObject(CompatibleDC, v24);
        v42 = CompatibleDC;
        *(_QWORD *)v35 = 0LL;
        v36 = v3;
        v37 = HIDWORD(v33);
        GDIHelpers::RenderTransparentCenteredGlyph(CompatibleDC, (HDC)v21, (HFONT)*v39, v25, (unsigned int)v35, offset);
        if ( h )
          SelectObject(CompatibleDC, h);
        *a2 = winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromBitmap(v26, v24);
        DeleteObject(v24);
        DeleteDC(CompatibleDC);
        goto LABEL_10;
      }
    }
    *a2 = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>(&v40);
    wil::details::unique_storage<wil::details::resource_policy<HDC__ *,int (*)(HDC__ *),&int DeleteDC(HDC__ *),wistd::integral_constant<unsigned __int64,0>,HDC__ *,HDC__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HDC__ *,int (*)(HDC__ *),&int DeleteDC(HDC__ *),wistd::integral_constant<unsigned __int64,0>,HDC__ *,HDC__ *,0,std::nullptr_t>>(&v34);
LABEL_17:
    wil::details::unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>(&v28);
    wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v30);
    wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v31);
    return a2;
  }
  *a2 = 0LL;
LABEL_10:
  DeleteObject(v21);
  if ( v13 )
    WindowsDeleteString(v13);
  if ( v9 )
    WindowsDeleteString(v9);
  return a2;
}
