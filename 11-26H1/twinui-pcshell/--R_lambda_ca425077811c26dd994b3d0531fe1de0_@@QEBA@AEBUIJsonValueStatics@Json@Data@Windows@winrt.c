/*
 * XREFs of ??R_lambda_ca425077811c26dd994b3d0531fe1de0_@@QEBA@AEBUIJsonValueStatics@Json@Data@Windows@winrt@@@Z @ 0x18013982C
 * Callers:
 *     ??$call@AEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@?$factory_cache_entry@UJsonValue@Json@Data@Windows@winrt@@UIJsonValueStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@Z @ 0x180317450 (--$call@AEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@-$factory_cache_entry@UJsonValue@Json@Da.c)
 *     ??$call@AEAV_lambda_f76301d492854dbc5fbf4a375fca4889_@@@?$factory_cache_entry@UMenuItem@UI@WindowsUdk@winrt@@UIMenuItemStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_f76301d492854dbc5fbf4a375fca4889_@@@Z @ 0x1805FF9BC (--$call@AEAV_lambda_f76301d492854dbc5fbf4a375fca4889_@@@-$factory_cache_entry@UMenuItem@UI@Windo.c)
 *     ?CreateSeparator@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@@Z @ 0x1806019B8 (-CreateSeparator@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@@Z.c)
 *     ??$call@AEAV_lambda_2bdf1dccac8f31331c29d81ee6552535_@@@?$factory_cache_entry@UDeviceInformation@Enumeration@Devices@Windows@winrt@@UIDeviceInformationStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_2bdf1dccac8f31331c29d81ee6552535_@@@Z @ 0x1806189D4 (--$call@AEAV_lambda_2bdf1dccac8f31331c29d81ee6552535_@@@-$factory_cache_entry@UDeviceInformation.c)
 *     ?FindAllAsync@DeviceInformation@Enumeration@Devices@Windows@winrt@@SA@AEBUhstring@param@5@@Z @ 0x18061AAFC (-FindAllAsync@DeviceInformation@Enumeration@Devices@Windows@winrt@@SA@AEBUhstring@param@5@@Z.c)
 * Callees:
 *     ?CreateSeparator@?$consume_WindowsUdk_UI_IMenuItemStatics@UIMenuItemStatics@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1801398C8 (-CreateSeparator@-$consume_WindowsUdk_UI_IMenuItemStatics@UIMenuItemStatics@UI@WindowsUdk@winrt@.c)
 */

__int64 __fastcall _lambda_ca425077811c26dd994b3d0531fe1de0_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_WindowsUdk_UI_IMenuItemStatics<winrt::WindowsUdk::UI::IMenuItemStatics>::CreateSeparator(
    a3,
    a2,
    *a1);
  return a2;
}
