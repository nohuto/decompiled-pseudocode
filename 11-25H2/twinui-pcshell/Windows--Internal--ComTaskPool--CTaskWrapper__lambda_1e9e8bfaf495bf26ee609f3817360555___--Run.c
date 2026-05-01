/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1e9e8bfaf495bf26ee609f3817360555___::Run @ 0x1803098F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1e9e8bfaf495bf26ee609f3817360555___::Run(
        __int64 a1)
{
  __int64 v2; // rsi
  int (__fastcall *v3)(__int64, _QWORD, __int64 *); // rbx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v5 = 0LL;
  v3 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v2 + 48LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  if ( v3(v2, *(_QWORD *)(a1 + 24), &v5) >= 0 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v2 + 168LL))(v2, v5, 14LL);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
}
