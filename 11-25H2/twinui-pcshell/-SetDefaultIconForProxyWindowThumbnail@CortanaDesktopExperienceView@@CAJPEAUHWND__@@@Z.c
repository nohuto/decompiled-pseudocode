/*
 * XREFs of ?SetDefaultIconForProxyWindowThumbnail@CortanaDesktopExperienceView@@CAJPEAUHWND__@@@Z @ 0x1803CD268
 * Callers:
 *     ?s_CortanaAltTabProxyWndProc@CortanaDesktopExperienceView@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1803CE000 (-s_CortanaAltTabProxyWndProc@CortanaDesktopExperienceView@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHFONT__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180225290 (--1-$unique_storage@U-$resource_policy@PEAUHFONT__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral.c)
 *     ?HICONFromBitmap@SearchAppDesktopExperienceView@@CAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x1803C0874 (-HICONFromBitmap@SearchAppDesktopExperienceView@@CAPEAUHICON__@@PEAUHBITMAP__@@@Z.c)
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x180658C30 (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::SetDefaultIconForProxyWindowThumbnail(HWND hWnd)
{
  HMONITOR v2; // rax
  unsigned int DpiForMonitor; // ebx
  __int64 v4; // rdx
  struct tagSIZE v5; // r9
  int ImmersiveIcon; // eax
  HICON v7; // rax
  ImmersiveIcons *v9; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  POINT pt; // [rsp+68h] [rbp+10h] BYREF
  int v12; // [rsp+70h] [rbp+18h] BYREF
  HBITMAP v13; // [rsp+78h] [rbp+20h] BYREF

  pt = 0LL;
  v2 = MonitorFromPoint(0LL, 1u);
  if ( !v2 )
  {
    DpiForMonitor = -2147418113;
    v4 = 2948LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)DpiForMonitor);
    return DpiForMonitor;
  }
  pt.x = 0;
  v12 = 0;
  DpiForMonitor = GetDpiForMonitor(v2, 0LL, &pt, &v12);
  if ( (DpiForMonitor & 0x80000000) != 0 )
  {
    v4 = 2951LL;
    goto LABEL_3;
  }
  LODWORD(v9) = GetSystemMetrics(11);
  HIDWORD(v9) = GetSystemMetrics(12);
  v13 = 0LL;
  ImmersiveIcon = ImmersiveIcons::LoadImmersiveIcon(
                    v9,
                    (struct tagSIZE)v9,
                    (struct tagSIZE)v9,
                    v5,
                    pt.x,
                    0,
                    (bool)L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI",
                    (const unsigned __int16 *)&v13,
                    (HBITMAP *)v9);
  DpiForMonitor = ImmersiveIcon;
  if ( ImmersiveIcon >= 0 )
  {
    v7 = SearchAppDesktopExperienceView::HICONFromBitmap(v13);
    if ( v7 )
      SendMessageW(hWnd, 0x80u, 0LL, (LPARAM)v7);
    DpiForMonitor = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB8B,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)ImmersiveIcon);
  }
  wil::details::unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>((void **)&v13);
  return DpiForMonitor;
}
