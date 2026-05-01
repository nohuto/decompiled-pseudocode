/*
 * XREFs of ?_Copy_exception@exception_ptr@std@@SA?AV12@PEAXPEBX@Z @ 0x180331630
 * Callers:
 *     ??$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA?AVexception_ptr@0@Uhresult_canceled@winrt@@@Z @ 0x180329DDC (--$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA-AVexception_ptr@0@Uhresult_canceled@winr.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::exception_ptr::_Copy_exception(_QWORD *a1, const void *a2)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  __ExceptionPtrCreate(a1);
  __ExceptionPtrCopyException(a1, a2, &TI2_AUhresult_canceled_winrt__);
  return a1;
}
