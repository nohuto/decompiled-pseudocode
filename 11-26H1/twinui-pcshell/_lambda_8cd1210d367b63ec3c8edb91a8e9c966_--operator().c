/*
 * XREFs of _lambda_8cd1210d367b63ec3c8edb91a8e9c966_::operator() @ 0x1803AF410
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8cd1210d367b63ec3c8edb91a8e9c966___::Run @ 0x1803B8600 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8cd1210d367b63ec3c8edb91a8e9c966___--Run.c)
 * Callees:
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800CC1A4 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall lambda_8cd1210d367b63ec3c8edb91a8e9c966_::operator()(_QWORD *a1)
{
  char result; // al
  void (__fastcall ***v3)(_QWORD, __int64 *, __int64 *); // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  result = winrt::Windows::Foundation::operator!=((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a1, &v3);
  if ( result )
  {
    if ( a1[1] )
      result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 112LL))(*a1);
    if ( a1[2] )
      return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 88LL))(*a1);
  }
  return result;
}
