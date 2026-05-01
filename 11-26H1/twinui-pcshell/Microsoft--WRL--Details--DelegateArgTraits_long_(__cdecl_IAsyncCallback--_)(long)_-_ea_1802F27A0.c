/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_0d876678aa78b7ed37cbe1753df898cc___1_long_::Invoke @ 0x1802F27A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180057ED4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _lambda_a5b8d4cd5e95e3c20f6ae71426157a21_::operator() @ 0x1802F0578 (_lambda_a5b8d4cd5e95e3c20f6ae71426157a21_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_0d876678aa78b7ed37cbe1753df898cc___1_long_::Invoke(
        CAppViewManager **a1)
{
  _QWORD *v1; // rdi
  unsigned int v2; // ebx
  CAppViewManager **v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1 + 3;
  v4[0] = a1 + 3;
  v4[1] = a1 + 2;
  v4[2] = a1 + 4;
  v2 = lambda_a5b8d4cd5e95e3c20f6ae71426157a21_::operator()(v4);
  if ( (v2 & 0x80000000) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v1 + 96LL))(*v1, v2);
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v2);
  }
  return v2;
}
