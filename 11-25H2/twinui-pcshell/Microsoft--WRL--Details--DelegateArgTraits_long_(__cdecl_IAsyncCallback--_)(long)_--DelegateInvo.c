/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_f6f69901abcf4556c2ac2b4f02b3e468__&__1_long_::Invoke @ 0x180142130
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f6f69901abcf4556c2ac2b4f02b3e468_::operator() @ 0x1800D99C4 (_lambda_f6f69901abcf4556c2ac2b4f02b3e468_--operator().c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180142648 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_f6f69901abcf4556c2ac2b4f02b3e468_____1_long_::Invoke(
        __int64 a1,
        DWORD a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = lambda_f6f69901abcf4556c2ac2b4f02b3e468_::operator()(a1 + 16, a2);
  v3 = v2;
  if ( v2 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v2);
  return v3;
}
