/*
 * XREFs of ?_Xrange@?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@CAXXZ @ 0x18062D7B4
 * Callers:
 *     ?RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@AEBV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x18062ACF8 (-RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Int.c)
 * Callees:
 *     <none>
 */

void std::vector<winrt::Windows::UI::WindowId>::_Xrange()
{
  std::_Xout_of_range("invalid vector subscript");
  __debugbreak();
  JUMPOUT(0x18062D7CCLL);
}
