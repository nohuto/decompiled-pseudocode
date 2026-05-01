/*
 * XREFs of ?RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x180161290
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800444D0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV?$SimpleVectorIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@AEAPEAEAEAV_lambda_08f4cb743079a90dc8e15f092a1add52_@@@Z @ 0x180297C24 (--0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV-$SimpleVectorIterator@UDisplayRegionId@W.c)
 *     wil::scope_exit__lambda_4be18ebf708cd778800d3ace51194f58___ @ 0x18030761C (wil--scope_exit__lambda_4be18ebf708cd778800d3ace51194f58___.c)
 *     wil::details::lambda_call__lambda_67a01f9610c8ee33e005e0a83cb8b51b___::_lambda_call__lambda_67a01f9610c8ee33e005e0a83cb8b51b___ @ 0x180307A10 (wil--details--lambda_call__lambda_67a01f9610c8ee33e005e0a83cb8b51b___--_lambda_call__lambda_67a0.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::RemoveApplicationView(
        RTL_SRWLOCK *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 **),
        int a3)
{
  __int64 v4; // rax
  void (__fastcall ***v5)(_QWORD, GUID *, __int64 **); // rdx
  void (__fastcall ***v6)(_QWORD, GUID *, __int64 **); // rdi
  void *i; // rsi
  _QWORD *Ptr; // rax
  _BYTE *v9; // r8
  int v10; // esi
  char v12[24]; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v13[40]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v14)(_QWORD, GUID *, __int64 **); // [rsp+98h] [rbp+38h] BYREF
  int v15; // [rsp+A0h] [rbp+40h] BYREF

  v15 = a3;
  v14 = a2;
  v4 = _lambda_8310241115156db3d8926b31d9f5a4c3_::_lambda_8310241115156db3d8926b31d9f5a4c3_(v12, &v15, &v14, &a1[-17]);
  wil::scope_exit__lambda_4be18ebf708cd778800d3ace51194f58___(v13, v4);
  AcquireSRWLockExclusive(a1 + 49);
  v5 = v14;
  v6 = v14;
  if ( v14 )
  {
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 **)))(*v14)[1])(v14);
    v5 = v14;
  }
  for ( i = 0LL; ; i = (char *)i + 1 )
  {
    if ( i >= a1[51].Ptr )
    {
      v10 = -2147319765;
      goto LABEL_11;
    }
    Ptr = a1[50].Ptr;
    if ( (void (__fastcall ***)(_QWORD, GUID *, __int64 **))Ptr[(_QWORD)i] == v6 )
      break;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&Ptr[(_QWORD)i]);
  v9 = a1[51].Ptr;
  if ( i != v9 - 1 )
    memmove_0((char *)a1[50].Ptr + 8 * (_QWORD)i, (char *)a1[50].Ptr + 8 * (_QWORD)i + 8, 8 * (v9 - (_BYTE *)i) - 8);
  --a1[51].Ptr;
  v10 = 0;
  v5 = v14;
LABEL_11:
  if ( v6 )
  {
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 **), void (__fastcall ***)(_QWORD, GUID *, __int64 **)))(*v6)[2])(
      v6,
      v5);
    v5 = v14;
  }
  if ( v10 >= 0 )
  {
    CApplicationViewManager::RaiseApplicationViewChanged((__int64)a1, v5, 1u, 0LL);
    if ( a1 != (RTL_SRWLOCK *)-392LL )
      ReleaseSRWLockExclusive(a1 + 49);
    v10 = 0;
  }
  else if ( a1 != (RTL_SRWLOCK *)-392LL )
  {
    ReleaseSRWLockExclusive(a1 + 49);
  }
  wil::details::lambda_call__lambda_67a01f9610c8ee33e005e0a83cb8b51b___::_lambda_call__lambda_67a01f9610c8ee33e005e0a83cb8b51b___(
    v13,
    v5);
  return (unsigned int)v10;
}
