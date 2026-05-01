/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_d5477cdde00c396a06f6576e925c03df___1_long_::Invoke @ 0x1802F79E0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180142648 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     ?TransformApplicationViewError@@YAXPEAJ@Z @ 0x1802A2388 (-TransformApplicationViewError@@YAXPEAJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_d5477cdde00c396a06f6576e925c03df___1_long_::Invoke(
        __int64 a1,
        int a2)
{
  __int64 v2; // rax
  signed int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  TransformApplicationViewError(&v6);
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v2 + 16) + 72LL))(
         *(_QWORD *)(v2 + 16),
         (unsigned int)v6);
  v4 = v3;
  if ( v3 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v3);
  return v4;
}
