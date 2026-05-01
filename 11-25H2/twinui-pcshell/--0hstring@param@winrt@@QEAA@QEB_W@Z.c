/*
 * XREFs of ??0hstring@param@winrt@@QEAA@QEB_W@Z @ 0x1801BD054
 * Callers:
 *     ?GetHostWindow@XamlAltTabViewHost@@AEAA?AUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PEAUIImmersiveMonitor@@@Z @ 0x18010745C (-GetHostWindow@XamlAltTabViewHost@@AEAA-AUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal.c)
 *     ?Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x18067BA60 (-Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP.c)
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x18069558C (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEB_W_K@Z @ 0x1801BD084 (-create_string_reference@hstring@param@winrt@@AEAAXQEB_W_K@Z.c)
 */

winrt::param::hstring *__fastcall winrt::param::hstring::hstring(winrt::param::hstring *this, const wchar_t *a2)
{
  unsigned __int64 v3; // r8

  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  winrt::param::hstring::create_string_reference(this, a2, v3);
  return this;
}
