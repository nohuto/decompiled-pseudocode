/*
 * XREFs of ??$emplace_back@UWindowId@UI@Windows@winrt@@@?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@QEAA?A_T$$QEAUWindowId@UI@Windows@winrt@@@Z @ 0x18063CF68
 * Callers:
 *     ?GetAllWindows@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA?AV?$unordered_map@Uhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@U?$hash@Uhstring@winrt@@@4@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@4@@std@@XZ @ 0x1802A80EC (-GetAllWindows@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA-.c)
 * Callees:
 *     ??$_Emplace_reallocate@_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAPEA_KQEA_K$$QEA_K@Z @ 0x18021F8EC (--$_Emplace_reallocate@_K@-$vector@_KV-$allocator@_K@std@@@std@@AEAAPEA_KQEA_K$$QEA_K@Z.c)
 */

char *__fastcall std::vector<winrt::Windows::UI::WindowId>::emplace_back<winrt::Windows::UI::WindowId>(
        __int64 a1,
        _QWORD *a2)
{
  _BYTE *v3; // rdx
  __int64 v4; // rdx

  v3 = *(_BYTE **)(a1 + 8);
  if ( v3 == *(_BYTE **)(a1 + 16) )
    return std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64>((const void **)a1, v3, a2);
  *(_QWORD *)v3 = *a2;
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v4 + 8;
  return (char *)v4;
}
