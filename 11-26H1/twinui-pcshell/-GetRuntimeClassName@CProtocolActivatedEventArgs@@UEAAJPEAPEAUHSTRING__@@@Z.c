/*
 * XREFs of ?GetRuntimeClassName@CProtocolActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18032C1B0
 * Callers:
 *     ?GetRuntimeClassName@CProtocolActivatedEventArgs@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18032C1E0 (-GetRuntimeClassName@CProtocolActivatedEventArgs@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CProtocolActivatedEventArgs@@WCA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18032C1F0 (-GetRuntimeClassName@CProtocolActivatedEventArgs@@WCA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CProtocolActivatedEventArgs@@WFA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18032C200 (-GetRuntimeClassName@CProtocolActivatedEventArgs@@WFA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CProtocolActivatedEventArgs@@WFI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18032C210 (-GetRuntimeClassName@CProtocolActivatedEventArgs@@WFI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CProtocolActivatedEventArgs@@WGA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18032C220 (-GetRuntimeClassName@CProtocolActivatedEventArgs@@WGA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CProtocolActivatedEventArgs@@WGI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18032C230 (-GetRuntimeClassName@CProtocolActivatedEventArgs@@WGI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CProtocolActivatedEventArgs@@WOI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18032C240 (-GetRuntimeClassName@CProtocolActivatedEventArgs@@WOI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CProtocolActivatedEventArgs@@WPA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18032C260 (-GetRuntimeClassName@CProtocolActivatedEventArgs@@WPA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CProtocolActivatedEventArgs@@WPI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18032C280 (-GetRuntimeClassName@CProtocolActivatedEventArgs@@WPI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CProtocolActivatedEventArgs::GetRuntimeClassName(CProtocolActivatedEventArgs *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.ApplicationModel.Activation.ProtocolActivatedEventArgs", 0x3Eu, a2);
}
