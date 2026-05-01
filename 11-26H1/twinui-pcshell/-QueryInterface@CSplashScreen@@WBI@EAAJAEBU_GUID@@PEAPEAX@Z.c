/*
 * XREFs of ?QueryInterface@CSplashScreen@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180306C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSplashScreen::QueryInterface(__int64 a1, const struct _GUID *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Activation::ISplashScreen,ISplashScreen,Microsoft::WRL::FtmBase>::QueryInterface(
           a1 - 24,
           a2,
           a3);
}
