/*
 * XREFs of _lambda_727d8a5b377b3c7833c145a14255ee7c_::_lambda_727d8a5b377b3c7833c145a14255ee7c_ @ 0x1801CEA20
 * Callers:
 *     ?RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z @ 0x1801D0CC0 (-RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall lambda_727d8a5b377b3c7833c145a14255ee7c_::_lambda_727d8a5b377b3c7833c145a14255ee7c_(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _QWORD *result; // rax

  a1[3] = a5;
  a1[4] = a6;
  a1[5] = a7;
  a1[6] = a8;
  result = a1;
  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  return result;
}
