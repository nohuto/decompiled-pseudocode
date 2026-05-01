/*
 * XREFs of ??$emplace_back@PEAUHWND__@@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@QEAAAEAPEAUHWND__@@$$QEAPEAU2@@Z @ 0x1805A5F14
 * Callers:
 *     ?AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z @ 0x18016C5A0 (-AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z.c)
 *     ?GetAllWindows@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA?AV?$unordered_map@Uhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@U?$hash@Uhstring@winrt@@@4@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@4@@std@@XZ @ 0x1802A20C0 (-GetAllWindows@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA-.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
char *__fastcall std::vector<HWND__ *>::emplace_back<HWND__ *>(__int64 *a1, __int64 *a2)
{
  return std::vector<HWND__ *>::_Emplace_one_at_back<HWND__ *>(a1, a2);
}
