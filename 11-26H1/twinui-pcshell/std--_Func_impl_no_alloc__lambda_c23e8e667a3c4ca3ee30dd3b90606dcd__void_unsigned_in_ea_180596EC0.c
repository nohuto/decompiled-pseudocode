/*
 * XREFs of std::_Func_impl_no_alloc__lambda_c23e8e667a3c4ca3ee30dd3b90606dcd__void_unsigned_int_winrt::Windows::Foundation::Point_const_&_::_Do_call @ 0x180596EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyGripperPressedAsync@TouchEdgeGripperHost@@AEAA?AUfire_and_forget@winrt@@IUPoint@Foundation@Windows@3@@Z @ 0x1805968E4 (-NotifyGripperPressedAsync@TouchEdgeGripperHost@@AEAA-AUfire_and_forget@winrt@@IUPoint@Foundatio.c)
 */

_BYTE *__fastcall std::_Func_impl_no_alloc__lambda_c23e8e667a3c4ca3ee30dd3b90606dcd__void_unsigned_int_winrt::Windows::Foundation::Point_const___::_Do_call(
        __int64 a1,
        int *a2,
        void (__fastcall **a3)(__int64 a1))
{
  char v4; // [rsp+30h] [rbp+8h] BYREF

  return TouchEdgeGripperHost::NotifyGripperPressedAsync(*(void (__fastcall **)(__int64))(a1 + 8), &v4, *a2, *a3);
}
