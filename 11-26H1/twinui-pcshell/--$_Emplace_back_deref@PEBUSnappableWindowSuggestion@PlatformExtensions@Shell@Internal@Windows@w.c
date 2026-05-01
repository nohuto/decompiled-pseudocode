/*
 * XREFs of ??$_Emplace_back_deref@PEBUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@?$_Uninitialized_backout@PEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@QEAAXAEAPEBUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@Z @ 0x1805B7A84
 * Callers:
 *     ??$?0V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@X@?$com_array@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@winrt@@QEAA@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@0@Z @ 0x1802910F8 (--$-0V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@USnappableWindowSuggestion@Platfo.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 */

winrt::hstring *__fastcall std::_Uninitialized_backout<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *>::_Emplace_back_deref<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion const *>(
        __int64 a1,
        _QWORD **a2,
        unsigned int a3)
{
  _QWORD *v3; // rdx
  _QWORD *v5; // rcx
  winrt::hstring *result; // rax

  v3 = *a2;
  v5 = *(_QWORD **)(a1 + 8);
  *v5 = *v3;
  result = winrt::hstring::hstring((winrt::hstring *)(v5 + 1), (const struct winrt::hstring *)(v3 + 1), a3);
  *(_QWORD *)(a1 + 8) += 16LL;
  return result;
}
