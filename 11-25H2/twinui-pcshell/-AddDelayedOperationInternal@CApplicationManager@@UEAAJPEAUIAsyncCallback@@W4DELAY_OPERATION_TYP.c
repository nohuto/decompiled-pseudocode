/*
 * XREFs of ?AddDelayedOperationInternal@CApplicationManager@@UEAAJPEAUIAsyncCallback@@W4DELAY_OPERATION_TYPE@@@Z @ 0x1800D7B30
 * Callers:
 *     ?AddDelayedOperation@CApplicationManager@@UEAAJPEAUIAsyncCallback@@@Z @ 0x180221210 (-AddDelayedOperation@CApplicationManager@@UEAAJPEAUIAsyncCallback@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     CDelayIAMOperations::AddOperation__lambda_408d293201316df79a8620e012e4c791___ @ 0x1800D7BD0 (CDelayIAMOperations--AddOperation__lambda_408d293201316df79a8620e012e4c791___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::AddDelayedOperationInternal(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rbx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h]

  v10 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v6 = *(_QWORD *)(a1 + 560);
  v9 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
  v7 = (unsigned int)CDelayIAMOperations::AddOperation__lambda_408d293201316df79a8620e012e4c791___(v6, &v9, a3) == 0
     ? 0x8007000E
     : 0;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  return v7;
}
