/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@QEAA@XZ @ 0x1806985E8
 * Callers:
 *     ??$_Construct_n@AEBQEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@AEBQEAU123456@@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAX_KAEBQEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@1@Z @ 0x18023F28C (--$_Construct_n@AEBQEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@AEBQEAU1234.c)
 * Callees:
 *     ?_Tidy@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXXZ @ 0x1802C4BE8 (-_Tidy@-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$allocator@USna.c)
 */

void __fastcall std::_Tidy_guard<std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>>::~_Tidy_guard<std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>>(
        __int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Tidy(v1);
}
