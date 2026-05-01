/*
 * XREFs of ?_CanSendDismissedEvent@CSplashScreen@@AEBA_NXZ @ 0x180221EEC
 * Callers:
 *     ?OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x180306AA8 (-OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z.c)
 *     ?add_Dismissed@CSplashScreen@@UEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180306D90 (-add_Dismissed@CSplashScreen@@UEAAJPEAU-$ITypedEventHandler@PEAVSplashScreen@Activation@Applicat.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSplashScreen::_CanSendDismissedEvent(CSplashScreen *this)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 128) )
    return *((_BYTE *)this + 129) == 0;
  return result;
}
