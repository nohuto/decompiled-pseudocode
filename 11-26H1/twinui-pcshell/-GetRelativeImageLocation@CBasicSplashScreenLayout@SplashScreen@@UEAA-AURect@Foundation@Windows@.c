/*
 * XREFs of ?GetRelativeImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA?AURect@Foundation@Windows@@XZ @ 0x1801D4C60
 * Callers:
 *     <none>
 * Callees:
 *     ?_PhysicalRectToScaledRectWithRounding@CBasicSplashScreenLayout@SplashScreen@@KA?AURect@Foundation@Windows@@IAEBU345@@Z @ 0x1801D4CC4 (-_PhysicalRectToScaledRectWithRounding@CBasicSplashScreenLayout@SplashScreen@@KA-AURect@Foundati.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SplashScreen::CBasicSplashScreenLayout::GetRelativeImageLocation(unsigned int *a1, __int64 a2)
{
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF

  (*(void (__fastcall **)(unsigned int *, _BYTE *))(*(_QWORD *)a1 + 32LL))(a1, v5);
  SplashScreen::CBasicSplashScreenLayout::_PhysicalRectToScaledRectWithRounding(a2, a1[6], v5);
  return a2;
}
