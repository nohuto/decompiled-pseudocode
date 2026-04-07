/*
 * XREFs of ?GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@PEAK@Z @ 0x18004BC24
 * Callers:
 *     ?GetSolidColorCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x18004BB94 (-GetSolidColorCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 * Callees:
 *     ?GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@_NPEAVCGlassColorizationParameters@@@Z @ 0x18001F890 (-GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Col.c)
 *     ??0CGlassColorizationParameters@@QEAA@XZ @ 0x180020190 (--0CGlassColorizationParameters@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopManager::GetEffectiveWindowColorizationColor(__int64 a1, __int64 a2, char a3, _DWORD *a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 result; // rax
  int v8; // edx
  unsigned __int8 v9[32]; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_BYTE *)(a1 + 27) )
  {
    v8 = *(_DWORD *)(a1 + 4LL * ((a3 & 1) == 0) + 520);
  }
  else
  {
    CGlassColorizationParameters::CGlassColorizationParameters((CGlassColorizationParameters *)v9);
    CDesktopManager::GetEffectiveGlassColorizationParameters(v5, v5, v6, 0, v9);
    result = v9[0] << 16;
    v8 = *(_DWORD *)v9 & 0xFF00FF00 | result | v9[2];
  }
  *a4 = v8;
  return result;
}
