/*
 * XREFs of ?NotifyGripperPressedAsync@TouchEdgeGripperHost@@AEAA?AUfire_and_forget@winrt@@IUPoint@Foundation@Windows@3@@Z @ 0x1805968E4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_c23e8e667a3c4ca3ee30dd3b90606dcd__void_unsigned_int_winrt::Windows::Foundation::Point_const_&_::_Do_call @ 0x180596EC0 (std--_Func_impl_no_alloc__lambda_c23e8e667a3c4ca3ee30dd3b90606dcd__void_unsigned_in_ea_180596EC0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     TouchEdgeGripperHost::NotifyGripperPressedAsync$_ResumeCoro$1 @ 0x1805967D0 (TouchEdgeGripperHost--NotifyGripperPressedAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall TouchEdgeGripperHost::NotifyGripperPressedAsync(
        void (__fastcall *a1)(__int64 a1),
        _BYTE *a2,
        int a3,
        void (__fastcall *a4)(__int64 a1))
{
  void (__fastcall **v9)(__int64); // [rsp+50h] [rbp+8h]

  v9 = (void (__fastcall **)(__int64))operator new(0x50uLL);
  v9[7] = a1;
  *((_DWORD *)v9 + 16) = a3;
  *(void (__fastcall **)(__int64))((char *)v9 + 68) = a4;
  *v9 = TouchEdgeGripperHost::NotifyGripperPressedAsync__ResumeCoro_1;
  *((_DWORD *)v9 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v9 + 48) = 0;
  TouchEdgeGripperHost::NotifyGripperPressedAsync__ResumeCoro_1((__int64)v9);
  return a2;
}
