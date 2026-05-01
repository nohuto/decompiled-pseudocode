/*
 * XREFs of __lambda_f61e10ee7e543796b431f359b570f371_::operator()_::_1_::catch$1 @ 0x1806FE132
 * Callers:
 *     <none>
 * Callees:
 *     ?current_exception@std@@YA?AVexception_ptr@1@XZ @ 0x180330E80 (-current_exception@std@@YA-AVexception_ptr@1@XZ.c)
 */

__int64 __fastcall _lambda_f61e10ee7e543796b431f359b570f371_::operator()_::_1_::catch_1(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax

  v3 = std::current_exception((_QWORD *)(a2 + 32));
  __ExceptionPtrAssign(**(void ***)(a2 + 64), v3);
  __ExceptionPtrDestroy((void *)(a2 + 32));
  return 0LL;
}
