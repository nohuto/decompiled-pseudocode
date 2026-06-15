/*
 * XREFs of std::_Func_impl_no_alloc__lambda_7fa36116be3e294e551541c666ff9548__void_::_Copy @ 0x180041440
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180017A74 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_7fa36116be3e294e551541c666ff9548__void_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rdx
  __int64 v3; // r9

  *a2 = off_180052DC0;
  std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(a2 + 1, (_QWORD *)(a1 + 8));
  *(_QWORD *)(v3 + 24) = *(_QWORD *)(v2 + 16);
  *(_DWORD *)(v3 + 32) = *(_DWORD *)(v2 + 24);
  return v3;
}
