/*
 * XREFs of std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_95cbc6343829d1d7fba1c9bcd9d93478___ @ 0x1801CE7F0
 * Callers:
 *     _lambda_4790bba48f35d5d527bba9490b41a1e9_::operator() @ 0x1801CF29C (_lambda_4790bba48f35d5d527bba9490b41a1e9_--operator().c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CEB28 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_95cbc6343829d1d7fba1c9bcd9d93478___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  _QWORD *v8; // rax
  bool v9; // bp
  std::_Ref_count_base *v10; // rcx
  _QWORD *result; // rax
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  while ( a2 != a3 )
  {
    v8 = std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(v12, a2 + 2);
    v9 = *(_QWORD *)a4 == *(_QWORD *)*v8 && *(_DWORD *)(a4 + 8) == *(_DWORD *)(*v8 + 8LL);
    v10 = (std::_Ref_count_base *)v8[1];
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
    if ( v9 )
      break;
    a2 = (_QWORD *)*a2;
  }
  result = a1;
  *a1 = a2;
  return result;
}
