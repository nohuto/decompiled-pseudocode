/*
 * XREFs of ?Release@CSplashScreen@@UEAAKXZ @ 0x1802BE0E0
 * Callers:
 *     ?Release@CSplashScreen@@W7EAAKXZ @ 0x180306CB0 (-Release@CSplashScreen@@W7EAAKXZ.c)
 *     ?Release@CSplashScreen@@WBA@EAAKXZ @ 0x180306CC0 (-Release@CSplashScreen@@WBA@EAAKXZ.c)
 *     ?Release@CSplashScreen@@WBI@EAAKXZ @ 0x180306CD0 (-Release@CSplashScreen@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CSplashScreen::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Activation::ISplashScreen,ISplashScreen,Microsoft::WRL::FtmBase>::Release(this);
}
