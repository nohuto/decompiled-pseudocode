/*
 * XREFs of _std::_Uninit_move_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::allocator_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______::_1_::catch$0 @ 0x1800BE32B
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180021CDC (_CxxThrowException_0.c)
 *     ??_G?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAPEAXI@Z @ 0x180085DD4 (--_G-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAPEAXI@Z.c)
 */

void __fastcall __noreturn std::_Uninit_move_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::allocator_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  _QWORD *i; // rbx

  for ( i = *(_QWORD **)(a2 + 72); i != *(_QWORD **)(a2 + 64); i += 4 )
    std::wstring::`scalar deleting destructor'(i);
  throw;
}
