/*
 * XREFs of ?ShowBorder@DesktopSingleViewShellExperiencePersonality@@UEAAJW4Border@CSingleViewShellExperience@@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x1800758F0
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180074CE0 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall DesktopSingleViewShellExperiencePersonality::ShowBorder(
        __int64 a1,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        int a3,
        unsigned int a4,
        __int64 a5)
{
  char v7; // si
  __int64 v8; // r15
  int v9; // ecx
  _QWORD v11[3]; // [rsp+20h] [rbp-30h] BYREF
  int v12; // [rsp+38h] [rbp-18h] BYREF
  int v13; // [rsp+3Ch] [rbp-14h]
  __int64 v14; // [rsp+40h] [rbp-10h]

  v7 = (char)a2;
  v8 = ExperienceManagerUtils::WindowFromViewWrapper(*(ExperienceManagerUtils **)(*(_QWORD *)(a1 + 8) + 24LL), a2);
  v9 = 1024;
  if ( a5 )
    v9 = 3584;
  v13 = v9;
  v12 = a3;
  v14 = a4;
  if ( (v7 & 1) != 0 )
  {
    v9 |= 0x20u;
    v13 = v9;
  }
  if ( (v7 & 2) != 0 )
  {
    v9 |= 0x40u;
    v13 = v9;
  }
  if ( (v7 & 4) != 0 )
  {
    v9 |= 0x80u;
    v13 = v9;
  }
  if ( (v7 & 8) != 0 )
    v13 = v9 | 0x100;
  v11[0] = 19LL;
  v11[1] = &v12;
  v11[2] = 16LL;
  SetWindowCompositionAttribute(v8, v11);
  if ( a5 )
    DwmpUpdateAccentBlurRect(v8, a5);
  return 0LL;
}
