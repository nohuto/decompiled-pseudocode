/*
 * XREFs of __lambda_d71cce0086fd906470872e2ae29f8c4a_::operator()_::_1_::catch$3 @ 0x1806D5D57
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall _lambda_d71cce0086fd906470872e2ae29f8c4a_::operator()_::_1_::catch_3(__int64 a1, __int64 a2)
{
  *(_OWORD *)(a2 + 32) = 0LL;
  __ExceptionPtrCreate((void *)(a2 + 32));
  __ExceptionPtrCurrentException((void *)(a2 + 32));
  __ExceptionPtrAssign(**(void ***)(a2 + 64), (const void *)(a2 + 32));
  __ExceptionPtrDestroy((void *)(a2 + 32));
  return 0LL;
}
