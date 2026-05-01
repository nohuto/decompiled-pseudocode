/*
 * XREFs of wistd::__function::__func__lambda_b004c78c20a08ec453c246420d56f636__void___cdecl(int_const_&)_::__clone @ 0x1803305C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_b004c78c20a08ec453c246420d56f636__void___cdecl_int_const____::__clone(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  *a2 = &off_180731278;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  a2[1] = *(_QWORD *)(a1 + 8);
  result = *(_QWORD *)(a1 + 16);
  a2[2] = result;
  return result;
}
