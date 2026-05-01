/*
 * XREFs of ?SetAppRequestsSplashScreenSuppression@CFrameApplicationPresentation@@UEAAX_N@Z @ 0x180309D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CFrameApplicationPresentation::SetAppRequestsSplashScreenSuppression(
        CFrameApplicationPresentation *this,
        char a2)
{
  *((_BYTE *)this + 565) = a2;
}
