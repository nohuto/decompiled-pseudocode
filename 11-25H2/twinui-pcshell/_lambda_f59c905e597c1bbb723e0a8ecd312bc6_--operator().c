/*
 * XREFs of _lambda_f59c905e597c1bbb723e0a8ecd312bc6_::operator() @ 0x1803A64BC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f59c905e597c1bbb723e0a8ecd312bc6___::Run @ 0x1803AFDB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f59c905e597c1bbb723e0a8ecd312bc6___--Run.c)
 * Callees:
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F5554 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall lambda_f59c905e597c1bbb723e0a8ecd312bc6_::operator()(_QWORD *a1)
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
