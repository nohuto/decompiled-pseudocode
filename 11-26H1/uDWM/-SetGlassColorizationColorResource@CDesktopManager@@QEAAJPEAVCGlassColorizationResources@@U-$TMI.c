/*
 * XREFs of ?SetGlassColorizationColorResource@CDesktopManager@@QEAAJPEAVCGlassColorizationResources@@U?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@M@Z @ 0x18001F7F0
 * Callers:
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001F4A0 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@_NPEAVCGlassColorizationParameters@@@Z @ 0x18001F890 (-GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Col.c)
 *     ?Update@CGlassColorizationResources@@QEAAJPEBVCGlassColorizationParameters@@@Z @ 0x1800200D0 (-Update@CGlassColorizationResources@@QEAAJPEBVCGlassColorizationParameters@@@Z.c)
 *     ??0CGlassColorizationParameters@@QEAA@XZ @ 0x180020190 (--0CGlassColorizationParameters@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

int __fastcall CDesktopManager::SetGlassColorizationColorResource(__int64 a1, CGlassColorizationResources *a2)
{
  int v3; // edx
  int v4; // r8d
  int result; // eax
  int v6; // ebx
  _BYTE v7[32]; // [rsp+30h] [rbp-38h] BYREF

  CGlassColorizationParameters::CGlassColorizationParameters((CGlassColorizationParameters *)v7);
  CDesktopManager::GetEffectiveGlassColorizationParameters(
    (_DWORD)CDesktopManager::s_pDesktopManagerInstance,
    v3,
    v4,
    0,
    (__int64)v7);
  result = CGlassColorizationResources::Update(a2, (const struct CGlassColorizationParameters *)v7);
  v6 = result;
  if ( result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, result, 0x38Au, 0LL);
    return v6;
  }
  return result;
}
