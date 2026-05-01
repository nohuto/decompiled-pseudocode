/*
 * XREFs of ?RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x180171100
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18003AFF0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ??0_lambda_2b94c938c284b16eb776d16960094630_@@QEAA@PEAV?$shared_ptr@VPinRequestContext@@@std@@AEAV?$shared_ptr@VPinOperationContext@@@2@AEA_N@Z @ 0x1802961C4 (--0_lambda_2b94c938c284b16eb776d16960094630_@@QEAA@PEAV-$shared_ptr@VPinRequestContext@@@std@@AE.c)
 *     wil::scope_exit__lambda_4be18ebf708cd778800d3ace51194f58___ @ 0x18030B958 (wil--scope_exit__lambda_4be18ebf708cd778800d3ace51194f58___.c)
 *     wil::details::lambda_call__lambda_67a01f9610c8ee33e005e0a83cb8b51b___::_lambda_call__lambda_67a01f9610c8ee33e005e0a83cb8b51b___ @ 0x18030BCBC (wil--details--lambda_call__lambda_67a01f9610c8ee33e005e0a83cb8b51b___--_lambda_call__lambda_67a0.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::RemoveApplicationView(
        RTL_SRWLOCK *a1,
        int (__fastcall ***a2)(_QWORD, GUID *, LPMALLOC *),
        int a3)
{
  __int64 v4; // rax
  int (__fastcall ***v5)(_QWORD, GUID *, LPMALLOC *); // rdx
  int (__fastcall ***v6)(_QWORD, GUID *, LPMALLOC *); // rdi
  void *i; // rsi
  _QWORD *Ptr; // rax
  _BYTE *v9; // r8
  int v10; // esi
  char v12[24]; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v13[40]; // [rsp+38h] [rbp-28h] BYREF
  int (__fastcall ***v14)(_QWORD, GUID *, LPMALLOC *); // [rsp+98h] [rbp+38h] BYREF
  int v15; // [rsp+A0h] [rbp+40h] BYREF

  v15 = a3;
  v14 = a2;
  v4 = _lambda_2b94c938c284b16eb776d16960094630_::_lambda_2b94c938c284b16eb776d16960094630_(v12, &v15, &v14, &a1[-17]);
  wil::scope_exit__lambda_4be18ebf708cd778800d3ace51194f58___(v13, v4);
  AcquireSRWLockExclusive(a1 + 49);
  v5 = v14;
  v6 = v14;
  if ( v14 )
  {
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, LPMALLOC *)))(*v14)[1])(v14);
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
    if ( (int (__fastcall ***)(_QWORD, GUID *, LPMALLOC *))Ptr[(_QWORD)i] == v6 )
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
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, LPMALLOC *), int (__fastcall ***)(_QWORD, GUID *, LPMALLOC *)))(*v6)[2])(
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
