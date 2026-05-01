/*
 * XREFs of ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x180658C30
 * Callers:
 *     ?s_LoadIconSync@CWinRTAppIconLoader@@SAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAPEAUHBITMAP__@@@Z @ 0x18023E158 (-s_LoadIconSync@CWinRTAppIconLoader@@SAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAPEAUHBITMA.c)
 *     ?SetDefaultIconForProxyWindowThumbnail@SearchAppDesktopExperienceView@@CAJPEAUHWND__@@@Z @ 0x1803C32E0 (-SetDefaultIconForProxyWindowThumbnail@SearchAppDesktopExperienceView@@CAJPEAUHWND__@@@Z.c)
 *     ?SetDefaultIconForProxyWindowThumbnail@CortanaDesktopExperienceView@@CAJPEAUHWND__@@@Z @ 0x1803CD268 (-SetDefaultIconForProxyWindowThumbnail@CortanaDesktopExperienceView@@CAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801CE718 (-Stop@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$Start@AEAPEBG@LoadIconW@ImmersiveIconsLoggingTelemetry@@SA?AV01@AEAPEBG@Z @ 0x18065771C (--$Start@AEAPEBG@LoadIconW@ImmersiveIconsLoggingTelemetry@@SA-AV01@AEAPEBG@Z.c)
 *     ??1LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAA@XZ @ 0x18065782C (--1LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAA@XZ.c)
 *     ?_LoadImmersiveIcon@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAPEAUHBITMAP__@@PEAUIconData2@1@@Z @ 0x180659668 (-_LoadImmersiveIcon@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAPEAUHBITMAP__@@PEAUIconData2@.c)
 */

__int64 __fastcall ImmersiveIcons::LoadImmersiveIcon(
        ImmersiveIcons *this,
        struct tagSIZE a2,
        struct tagSIZE a3,
        struct tagSIZE a4,
        unsigned int a5,
        char a6,
        struct ImmersiveIcons::IconData2 *a7,
        struct ImmersiveIcons::LoadIconParams *a8)
{
  HBITMAP *v11; // r9
  int ImmersiveIcon; // eax
  DWORD v13; // edx
  unsigned int v14; // ebx
  PCWSTR pszItem; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 v17[4]; // [rsp+28h] [rbp-D8h] BYREF
  struct tagSIZE v18; // [rsp+30h] [rbp-D0h]
  struct tagSIZE v19; // [rsp+38h] [rbp-C8h]
  int v20; // [rsp+40h] [rbp-C0h]
  unsigned int v21; // [rsp+44h] [rbp-BCh]
  char v22; // [rsp+48h] [rbp-B8h]
  __int16 v23; // [rsp+49h] [rbp-B7h]
  char v24; // [rsp+4Bh] [rbp-B5h]
  int v25; // [rsp+4Ch] [rbp-B4h]
  int v26; // [rsp+50h] [rbp-B0h]
  int v27; // [rsp+54h] [rbp-ACh]
  double v28; // [rsp+58h] [rbp-A8h]
  _BYTE v29[336]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  pszItem = (PCWSTR)a7;
  ImmersiveIconsLoggingTelemetry::LoadIconW::Start<unsigned short const * &>(
    (ImmersiveIconsLoggingTelemetry::LoadIconW *)v29,
    &pszItem);
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v20 = 0;
  v23 = 0;
  v24 = 0;
  v21 = a5;
  v22 = a6;
  v28 = DOUBLE_4_5;
  *(_QWORD *)v17 = this;
  v18 = a2;
  v19 = a3;
  ImmersiveIcon = ImmersiveIcons::_LoadImmersiveIcon(pszItem, v17, a8, v11, (struct ImmersiveIcons::IconData2 *)pszItem);
  v14 = ImmersiveIcon;
  if ( ImmersiveIcon >= 0 )
  {
    wil::ActivityBase<ImmersiveIconsLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v29, v13);
    v14 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25D,
      (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
      (const char *)(unsigned int)ImmersiveIcon);
  }
  ImmersiveIconsLoggingTelemetry::LoadIconW::~LoadIconW((ImmersiveIconsLoggingTelemetry::LoadIconW *)v29);
  return v14;
}
