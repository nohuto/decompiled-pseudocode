/*
 * XREFs of ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x1800AB810
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_ResumeCoro$1 @ 0x18055DE70 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetAndCreateIconFr_ea_18055DE70.c)
 * Callees:
 *     ?RenderTransparentCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKAEBUCRect@Geometry@@@Z @ 0x1800AAF90 (-RenderTransparentCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKAEBUCRect@Geometry@@@Z.c)
 *     ?FamilyName@?$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800AB23C (-FamilyName@-$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@w.c)
 *     ?GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x1800AB6DC (-GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@.c)
 *     ?Query@?$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800AB7B0 (-Query@-$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800ACE7C (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180218580 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHFONT__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180225290 (--1-$unique_storage@U-$resource_policy@PEAUHFONT__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHDC__@@P6AHPEAU1@@Z$1?DeleteDC@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1802CF59C (--1-$unique_storage@U-$resource_policy@PEAUHDC__@@P6AHPEAU1@@Z$1-DeleteDC@@YAH0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
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
  HSTRING v8; // r12
  winrt::impl **v9; // rax
  struct winrt::impl::hstring_header *v10; // rdx
  HSTRING v11; // r13
  LONG v12; // esi
  PCWSTR StringRawBuffer; // rax
  __int64 v14; // rdx
  WCHAR *lfFaceName; // rcx
  signed __int64 v16; // r8
  WCHAR v17; // ax
  WCHAR *v18; // rax
  HFONT v19; // rdi
  HDC CompatibleDC; // rbx
  HBITMAP v21; // rsi
  __int64 v22; // r9
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow *v23; // rcx
  HFONT v25; // [rsp+30h] [rbp-D0h] BYREF
  UINT32 v26; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING v27; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING v28; // [rsp+48h] [rbp-B8h] BYREF
  UINT32 length; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A8h]
  HDC v31; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v32[6]; // [rsp+68h] [rbp-98h] BYREF
  void *ppvBits; // [rsp+80h] [rbp-80h] BYREF
  PCWSTR v34; // [rsp+88h] [rbp-78h]
  HBITMAP v35; // [rsp+90h] [rbp-70h] BYREF
  HGDIOBJ h; // [rsp+98h] [rbp-68h]
  HDC v37; // [rsp+A0h] [rbp-60h]
  BITMAPINFO pbmi; // [rsp+A8h] [rbp-58h] BYREF
  LOGFONTW lf; // [rsp+E0h] [rbp-20h] BYREF

  v3 = a3;
  v31 = (HDC)a2;
  v30 = a3;
  v28 = 0LL;
  v27 = 0LL;
  v5 = (__int64 **)(a1 + 48);
  v6 = (winrt::impl **)winrt::impl::consume_Windows_ApplicationModel_IPackageId<winrt::Windows::ApplicationModel::IPackageId>::FamilyName(
                         (__int64 **)(a1 + 48),
                         &v25);
  v8 = (HSTRING)winrt::impl::duplicate_hstring(*v6, v7);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v28);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v28);
  v28 = v8;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v25);
  v9 = (winrt::impl **)winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::Query(
                         v5,
                         &v25);
  v11 = (HSTRING)winrt::impl::duplicate_hstring(*v9, v10);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v27);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v27);
  v27 = v11;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v25);
  memset_0(&lf, 0, sizeof(lf));
  v12 = -HIDWORD(v30);
  lf.lfHeight = -HIDWORD(v30);
  lf.lfWeight = 400;
  lf.lfCharSet = 0;
  lf.lfQuality = 5;
  length = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(v11, &length);
  v14 = 32LL;
  lfFaceName = lf.lfFaceName;
  v16 = (char *)StringRawBuffer - (char *)lf.lfFaceName;
  do
  {
    if ( v14 == -2147483614 )
      break;
    v17 = *(WCHAR *)((char *)lfFaceName + v16);
    if ( !v17 )
      break;
    *lfFaceName++ = v17;
    --v14;
  }
  while ( v14 );
  v18 = lfFaceName - 1;
  if ( v14 )
    v18 = lfFaceName;
  *v18 = 0;
  v19 = CreateFontIndirectW(&lf);
  v25 = v19;
  if ( !v19 )
  {
    *a2 = 0LL;
    goto LABEL_20;
  }
  CompatibleDC = CreateCompatibleDC(0LL);
  v31 = CompatibleDC;
  if ( CompatibleDC )
  {
    pbmi.bmiHeader.biSize = 44;
    memset(&pbmi.bmiHeader.biSizeImage, 0, 24);
    pbmi.bmiHeader.biWidth = v3;
    pbmi.bmiHeader.biHeight = v12;
    *(_QWORD *)&pbmi.bmiHeader.biPlanes = 2097153LL;
    ppvBits = 0LL;
    v21 = CreateDIBSection(CompatibleDC, &pbmi, 0, &ppvBits, 0LL, 0);
    v35 = v21;
    if ( v21 )
    {
      v26 = 0;
      v34 = WindowsGetStringRawBuffer(v8, &v26);
      if ( v26 == 1 )
      {
        h = SelectObject(CompatibleDC, v21);
        v37 = CompatibleDC;
        v32[0] = 0;
        v32[1] = 0;
        v32[2] = v3;
        v32[3] = HIDWORD(v30);
        GDIHelpers::RenderTransparentCenteredGlyph(CompatibleDC, (HDC)v19, (HFONT)*v34, v22, (__int64)v32);
        if ( h )
          SelectObject(CompatibleDC, h);
        *a2 = winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromBitmap(v23, v21);
        DeleteObject(v21);
        DeleteDC(CompatibleDC);
        goto LABEL_14;
      }
    }
    *a2 = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>(&v35);
    wil::details::unique_storage<wil::details::resource_policy<HDC__ *,int (*)(HDC__ *),&int DeleteDC(HDC__ *),wistd::integral_constant<unsigned __int64,0>,HDC__ *,HDC__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HDC__ *,int (*)(HDC__ *),&int DeleteDC(HDC__ *),wistd::integral_constant<unsigned __int64,0>,HDC__ *,HDC__ *,0,std::nullptr_t>>(&v31);
LABEL_20:
    wil::details::unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>(&v25);
    wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v27);
    wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v28);
    return a2;
  }
  *a2 = 0LL;
LABEL_14:
  DeleteObject(v19);
  if ( v11 )
    WindowsDeleteString(v11);
  if ( v8 )
    WindowsDeleteString(v8);
  return a2;
}
