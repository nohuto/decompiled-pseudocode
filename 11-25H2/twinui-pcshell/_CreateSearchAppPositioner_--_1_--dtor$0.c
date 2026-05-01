/*
 * XREFs of _CreateSearchAppPositioner_::_1_::dtor$0 @ 0x1806C0024
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreateSearchAppPositioner_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<ISearchAppPositioner,wistd::default_delete<ISearchAppPositioner>>::~unique_ptr<ISearchAppPositioner,wistd::default_delete<ISearchAppPositioner>>((__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 64));
}
