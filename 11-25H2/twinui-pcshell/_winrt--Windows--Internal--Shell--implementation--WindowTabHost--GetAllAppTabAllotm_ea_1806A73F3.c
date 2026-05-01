/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetAllAppTabAllotment_::_1_::dtor$2 @ 0x1806A73F3
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unordered_map@PEAUHWND__@@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@4@V?$allocator@U?$pair@QEAUHWND__@@PEAUHWINEVENTHOOK__@@@std@@@4@@std@@QEAA@XZ @ 0x180241EA0 (--1-$unordered_map@PEAUHWND__@@PEAUHWINEVENTHOOK__@@U-$hash@PEAUHWND__@@@std@@U-$equal_to@PEAUHW.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetAllAppTabAllotment_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~1u;
    std::unordered_map<HWND__ *,HWINEVENTHOOK__ *>::~unordered_map<HWND__ *,HWINEVENTHOOK__ *>(*(_QWORD *)(a2 + 304));
  }
}
