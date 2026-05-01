/*
 * XREFs of _GamingPosturePositioner::GamingPosturePositioner_::_1_::dtor$16 @ 0x1806CA5BB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GamingPosturePositioner::GamingPosturePositioner_::_1_::dtor_16(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CreationThreadDispatcher,wil::err_exception_policy>::~com_ptr_t<CreationThreadDispatcher,wil::err_exception_policy>(
           (__int64 *)(*(_QWORD *)(a2 + 64) + 696LL),
           (volatile int *)a2);
}
