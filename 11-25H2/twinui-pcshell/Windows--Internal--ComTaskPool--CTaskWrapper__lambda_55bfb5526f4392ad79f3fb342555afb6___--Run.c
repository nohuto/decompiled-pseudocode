/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_55bfb5526f4392ad79f3fb342555afb6___::Run @ 0x180309A20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_55bfb5526f4392ad79f3fb342555afb6___::Run(
        __int64 a1)
{
  __int64 v2; // rdi
  int (__fastcall *v3)(__int64, _QWORD, __int64 *); // rbx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v5 = 0LL;
  v3 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v2 + 48LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  if ( v3(v2, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 128LL), &v5) >= 0 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v5 + 296LL))(
      v5,
      0LL,
      *(_QWORD *)(a1 + 24) + 152LL,
      0LL);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
}
