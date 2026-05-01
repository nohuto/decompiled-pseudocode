/*
 * XREFs of ?QueryKeyString@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@1PEAPEAU2@@Z @ 0x180351B00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?QueryKey@GamingOverlayExperienceManager@@AEAAJ_KPEAUHSTRING__@@1PEAEPEAK3@Z @ 0x1803518E8 (-QueryKey@GamingOverlayExperienceManager@@AEAAJ_KPEAUHSTRING__@@1PEAEPEAK3@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::QueryKeyString(
        GamingOverlayExperienceManager *this,
        HKEY a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING *string)
{
  int v8; // ebx
  __int64 v9; // rdx
  GamingOverlayExperienceManager *v11; // rcx
  unsigned int v12; // [rsp+40h] [rbp-248h] BYREF
  unsigned int v13[3]; // [rsp+44h] [rbp-244h] BYREF
  WCHAR sourceString[264]; // [rsp+50h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]

  if ( !string )
  {
    v8 = -2147467261;
    v9 = 2368LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  memset_0(sourceString, 0, 0x208uLL);
  v13[0] = 520;
  v12 = 0;
  v8 = GamingOverlayExperienceManager::QueryKey(v11, a2, a3, a4, (unsigned __int8 *)sourceString, v13, &v12);
  if ( v8 < 0 )
  {
    v9 = 2381LL;
    goto LABEL_3;
  }
  if ( v12 != 1 )
  {
    v8 = -2147024809;
    v9 = 2383LL;
    goto LABEL_3;
  }
  v8 = WindowsCreateString(sourceString, v13[0] >> 1, string);
  if ( v8 < 0 )
  {
    v9 = 2387LL;
    goto LABEL_3;
  }
  return 0LL;
}
