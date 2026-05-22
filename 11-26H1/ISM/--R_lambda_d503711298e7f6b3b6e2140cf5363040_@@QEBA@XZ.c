/*
 * XREFs of ??R_lambda_d503711298e7f6b3b6e2140cf5363040_@@QEBA@XZ @ 0x1800FE448
 * Callers:
 *     ??$init_once_nothrow@V_lambda_d503711298e7f6b3b6e2140cf5363040_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_lambda_d503711298e7f6b3b6e2140cf5363040_@@PEA_N@Z @ 0x1800FE27C (--$init_once_nothrow@V_lambda_d503711298e7f6b3b6e2140cf5363040_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_l.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall _lambda_d503711298e7f6b3b6e2140cf5363040_::operator()(__int64 a1)
{
  int ValueW; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v4; // [rsp+50h] [rbp+8h] BYREF
  int v5; // [rsp+54h] [rbp+Ch]
  DWORD v6; // [rsp+58h] [rbp+10h] BYREF

  v5 = HIDWORD(a1);
  v4 = 0;
  v6 = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Holographic",
             L"ClassicAppsEnabled",
             0x20000018u,
             0LL,
             &v4,
             &v6);
  if ( ValueW > 0 )
    ValueW = (unsigned __int16)ValueW | 0x80070000;
  if ( ValueW == -2147024894 || ValueW == -2147024893 || ValueW == -2147023728 )
  {
    `IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesEnabled = 1;
  }
  else if ( ValueW )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2D,
      (int)"onecoreuap\\internal\\shell\\inc\\Win32SlatesFeature.h",
      (const char *)(unsigned int)ValueW);
  }
  else
  {
    `IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesEnabled = v4 == 1;
  }
  return 0LL;
}
