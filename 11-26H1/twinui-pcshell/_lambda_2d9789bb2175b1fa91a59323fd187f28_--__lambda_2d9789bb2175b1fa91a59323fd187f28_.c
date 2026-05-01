/*
 * XREFs of _lambda_2d9789bb2175b1fa91a59323fd187f28_::__lambda_2d9789bb2175b1fa91a59323fd187f28_ @ 0x1801ECE14
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2d9789bb2175b1fa91a59323fd187f28___::_CTaskWrapper__lambda_2d9789bb2175b1fa91a59323fd187f28___ @ 0x1801ECDEC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2d9789bb2175b1fa91a59323fd187f28___--_CTask.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_2d9789bb2175b1fa91a59323fd187f28_::__lambda_2d9789bb2175b1fa91a59323fd187f28_(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = a1[2];
  if ( v2 )
  {
    a1[2] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
}
