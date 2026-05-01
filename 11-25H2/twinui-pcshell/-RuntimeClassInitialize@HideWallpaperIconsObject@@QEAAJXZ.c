/*
 * XREFs of ?RuntimeClassInitialize@HideWallpaperIconsObject@@QEAAJXZ @ 0x18065D74C
 * Callers:
 *     ??$MakeAndInitialize@VHideWallpaperIconsObject@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18065D520 (--$MakeAndInitialize@VHideWallpaperIconsObject@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ?IsServer@HideWallpaperIconsObject@@AEAA_NXZ @ 0x18065D6A4 (-IsServer@HideWallpaperIconsObject@@AEAA_NXZ.c)
 */

__int64 __fastcall HideWallpaperIconsObject::RuntimeClassInitialize(HideWallpaperIconsObject *this)
{
  HWND ShellWindow; // rax
  _WORD pvParam[264]; // [rsp+20h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+0h]

  if ( HideWallpaperIconsObject::IsServer(this) )
    return 0LL;
  memset_0(pvParam, 0, 0x208uLL);
  SystemParametersInfoW(0x73u, 0x104u, pvParam, 0);
  if ( !pvParam[0] )
    return 0LL;
  ShellWindow = GetShellWindow();
  if ( PostMessageW(ShellWindow, 0x52Cu, 0xDuLL, 1LL) )
  {
    *((_BYTE *)this + 16) = 1;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D,
    (int)"shell\\lib\\hidewallpapericons.cpp",
    (const char *)0x80004005LL);
  return 2147500037LL;
}
