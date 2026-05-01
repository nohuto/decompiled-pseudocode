/*
 * XREFs of ??$_Uninitialized_copy_n@PEBUhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@YAPEAUhstring@winrt@@PEBU12@_KPEAU12@AEAV?$allocator@Uhstring@winrt@@@0@@Z @ 0x180618964
 * Callers:
 *     ??$_Assign_counted_range@PEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAXPEBUhstring@winrt@@_K@Z @ 0x1806186BC (--$_Assign_counted_range@PEBUhstring@winrt@@@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winr.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??$_Destroy_range@V?$allocator@Uhstring@winrt@@@std@@@std@@YAXPEAUhstring@winrt@@QEAU12@AEAV?$allocator@Uhstring@winrt@@@0@@Z @ 0x1804AADE0 (--$_Destroy_range@V-$allocator@Uhstring@winrt@@@std@@@std@@YAXPEAUhstring@winrt@@QEAU12@AEAV-$al.c)
 */

// Hidden C++ exception states: #wind=1
winrt::hstring *__fastcall std::_Uninitialized_copy_n<winrt::hstring const *>(
        struct winrt::hstring *a1,
        __int64 a2,
        winrt::hstring *a3)
{
  winrt::hstring *v3; // rbx
  __int64 i; // rsi

  v3 = a3;
  for ( i = a2; i; --i )
  {
    winrt::hstring::hstring(v3, a1, (unsigned int)a3);
    v3 = (winrt::hstring *)((char *)v3 + 8);
    a1 = (struct winrt::hstring *)((char *)a1 + 8);
  }
  std::_Destroy_range<std::allocator<winrt::hstring>>((volatile signed __int32 **)v3, (volatile signed __int32 **)v3);
  return v3;
}
