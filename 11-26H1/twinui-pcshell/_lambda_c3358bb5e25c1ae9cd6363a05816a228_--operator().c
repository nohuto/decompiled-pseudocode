/*
 * XREFs of _lambda_c3358bb5e25c1ae9cd6363a05816a228_::operator() @ 0x1801CD214
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_323d14d606b14d2939124d398e1f4aa2___::Run @ 0x1801CD200 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_323d14d606b14d2939124d398e1f4aa2___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_c3358bb5e25c1ae9cd6363a05816a228_::operator()(_QWORD *a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, _QWORD, __int64 *); // rbx
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
  result = v4(a2, *a1, &v7);
  if ( (int)result >= 0 )
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 168LL))(a2, v7, 13LL);
  v6 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return result;
}
