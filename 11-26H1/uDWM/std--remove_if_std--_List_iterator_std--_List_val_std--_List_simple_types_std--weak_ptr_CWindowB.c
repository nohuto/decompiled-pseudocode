/*
 * XREFs of std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::weak_ptr_CWindowBorder::CCachedBorderBrush_________CWindowBorder::CCachedBorderBrush::_CCachedBorderBrush_::_5_::_lambda_1___ @ 0x180050230
 * Callers:
 *     ??1CCachedBorderBrush@CWindowBorder@@QEAA@XZ @ 0x1800501A0 (--1CCachedBorderBrush@CWindowBorder@@QEAA@XZ.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18000D064 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::weak_ptr_CWindowBorder::CCachedBorderBrush_________CWindowBorder::CCachedBorderBrush::_CCachedBorderBrush_::_5_::_lambda_1___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  std::_Ref_count_base *v11; // rcx
  _QWORD *result; // rax

  while ( a2 != a3 )
  {
    v6 = a2[3];
    if ( !v6 )
    {
      v7 = a2;
      goto LABEL_7;
    }
    if ( !*(_DWORD *)(v6 + 8) )
      break;
    a2 = (_QWORD *)*a2;
  }
  v7 = a2;
  if ( a2 == a3 )
    goto LABEL_13;
LABEL_7:
  while ( 1 )
  {
    v8 = (_QWORD *)*v7;
    v7 = v8;
    if ( v8 == a3 )
      break;
    v9 = v8[3];
    if ( v9 && *(_DWORD *)(v9 + 8) )
    {
      v10 = v8[2];
      v7[2] = 0LL;
      v7[3] = 0LL;
      a2[2] = v10;
      v11 = (std::_Ref_count_base *)a2[3];
      a2[3] = v9;
      if ( v11 )
        std::_Ref_count_base::_Decwref(v11);
      a2 = (_QWORD *)*a2;
    }
  }
LABEL_13:
  result = a1;
  *a1 = a2;
  return result;
}
