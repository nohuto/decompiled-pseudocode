/*
 * XREFs of ?GetRuntimeClassName@CProtocolActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18032E110
 * Callers:
 *     ?GetRuntimeClassName@CProtocolActivatedEventArgs@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18032E140 (-GetRuntimeClassName@CProtocolActivatedEventArgs@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CProtocolActivatedEventArgs@@WCA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18032E150 (-GetRuntimeClassName@CProtocolActivatedEventArgs@@WCA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CProtocolActivatedEventArgs@@WFA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18032E160 (-GetRuntimeClassName@CProtocolActivatedEventArgs@@WFA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CProtocolActivatedEventArgs@@WFI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18032E170 (-GetRuntimeClassName@CProtocolActivatedEventArgs@@WFI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CProtocolActivatedEventArgs@@WGA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18032E180 (-GetRuntimeClassName@CProtocolActivatedEventArgs@@WGA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CProtocolActivatedEventArgs@@WGI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18032E190 (-GetRuntimeClassName@CProtocolActivatedEventArgs@@WGI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CProtocolActivatedEventArgs@@WOI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18032E1A0 (-GetRuntimeClassName@CProtocolActivatedEventArgs@@WOI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CProtocolActivatedEventArgs@@WPA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18032E1C0 (-GetRuntimeClassName@CProtocolActivatedEventArgs@@WPA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CProtocolActivatedEventArgs@@WPI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18032E1E0 (-GetRuntimeClassName@CProtocolActivatedEventArgs@@WPI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CProtocolActivatedEventArgs::GetRuntimeClassName(CProtocolActivatedEventArgs *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.ApplicationModel.Activation.ProtocolActivatedEventArgs", 0x3Eu, a2);
}
