/*
 * XREFs of __lambda_2a8f8fa06f2e0b1768a49123f6915af2_::operator()_::_1_::catch$14 @ 0x1806D284E
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800CA6B4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?current_exception@std@@YA?AVexception_ptr@1@XZ @ 0x180330E80 (-current_exception@std@@YA-AVexception_ptr@1@XZ.c)
 */

__int64 __fastcall _lambda_2a8f8fa06f2e0b1768a49123f6915af2_::operator()_::_1_::catch_14(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rbx
  void *v5; // rdx
  wil::details *v6; // rcx

  v3 = std::current_exception((_QWORD *)(a2 + 32));
  v4 = *(_QWORD *)(a2 + 96);
  __ExceptionPtrAssign(*(void **)(v4 + 32), v3);
  __ExceptionPtrDestroy((void *)(a2 + 32));
  if ( *(_QWORD *)v4 )
    v6 = **(wil::details ***)v4;
  else
    v6 = 0LL;
  wil::details::SetEvent(v6, v5);
  return 0LL;
}
