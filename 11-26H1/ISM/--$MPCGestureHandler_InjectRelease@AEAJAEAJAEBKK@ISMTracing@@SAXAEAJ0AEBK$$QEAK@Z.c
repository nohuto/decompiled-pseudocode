/*
 * XREFs of ??$MPCGestureHandler_InjectRelease@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z @ 0x1800BC7A4
 * Callers:
 *     ?DownLevelReleaseTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BD810 (-DownLevelReleaseTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18000D7E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000DE08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCGestureHandler_InjectRelease_@ISMTracing@@QEAAXJJKK@Z @ 0x1800BE318 (-MPCGestureHandler_InjectRelease_@ISMTracing@@QEAAXJJKK@Z.c)
 */

void __fastcall ISMTracing::MPCGestureHandler_InjectRelease<long &,long &,unsigned long const &,unsigned long>(
        int *a1,
        int *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  ISMTracing *v8; // rcx

  if ( ISMTracing::IsEnabled() )
  {
    ISMTracing::Instance();
    ISMTracing::MPCGestureHandler_InjectRelease_(v8, *a1, *a2, *a3, *a4);
  }
}
