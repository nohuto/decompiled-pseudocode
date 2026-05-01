/*
 * XREFs of _lambda_17fa972c2310d7312f81a78f2bb80b5c_::operator() @ 0x18020E454
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4d39dc8836a747feab7d20b0af3bfeac___::Run @ 0x1802A2B30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4d39dc8836a747feab7d20b0af3bfeac___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_17fa972c2310d7312f81a78f2bb80b5c_::operator()(unsigned int *a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, __int64, __int64 *); // rbx
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a2 + 48LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 24LL))(*(_QWORD *)a1);
  result = v4(a2, v5, &v8);
  if ( (int)result >= 0 )
    result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 168LL))(a2, v8, a1[2], 0LL);
  v7 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return result;
}
