/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetAllAppTabAllotment_::_1_::dtor$2 @ 0x1806CDD7B
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unordered_map@PEAUHWND__@@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@4@V?$allocator@U?$pair@QEAUHWND__@@PEAUHWINEVENTHOOK__@@@std@@@4@@std@@QEAA@XZ @ 0x1801F5620 (--1-$unordered_map@PEAUHWND__@@PEAUHWINEVENTHOOK__@@U-$hash@PEAUHWND__@@@std@@U-$equal_to@PEAUHW.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetAllAppTabAllotment_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 56) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 56) &= ~1u;
    return std::unordered_map<HWND__ *,HWINEVENTHOOK__ *>::~unordered_map<HWND__ *,HWINEVENTHOOK__ *>(*(_QWORD **)(a2 + 192));
  }
  return result;
}
