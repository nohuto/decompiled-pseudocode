/*
 * XREFs of ?Release@CLaunchActivatedEventArgs@@UEAAKXZ @ 0x1801B36E0
 * Callers:
 *     ?Release@CLaunchActivatedEventArgs@@W7EAAKXZ @ 0x180681080 (-Release@CLaunchActivatedEventArgs@@W7EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WBA@EAAKXZ @ 0x180681090 (-Release@CLaunchActivatedEventArgs@@WBA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WBAA@EAAKXZ @ 0x1806810A0 (-Release@CLaunchActivatedEventArgs@@WBAA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WBI@EAAKXZ @ 0x1806810C0 (-Release@CLaunchActivatedEventArgs@@WBI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WCA@EAAKXZ @ 0x1806810D0 (-Release@CLaunchActivatedEventArgs@@WCA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WJI@EAAKXZ @ 0x1806810E0 (-Release@CLaunchActivatedEventArgs@@WJI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WKA@EAAKXZ @ 0x180681100 (-Release@CLaunchActivatedEventArgs@@WKA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WKI@EAAKXZ @ 0x180681120 (-Release@CLaunchActivatedEventArgs@@WKI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WNI@EAAKXZ @ 0x180681140 (-Release@CLaunchActivatedEventArgs@@WNI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WOI@EAAKXZ @ 0x180681160 (-Release@CLaunchActivatedEventArgs@@WOI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WPA@EAAKXZ @ 0x180681180 (-Release@CLaunchActivatedEventArgs@@WPA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WPI@EAAKXZ @ 0x1806811A0 (-Release@CLaunchActivatedEventArgs@@WPI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CLaunchActivatedEventArgs::Release(CLaunchActivatedEventArgs *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>>::Release(this);
}
