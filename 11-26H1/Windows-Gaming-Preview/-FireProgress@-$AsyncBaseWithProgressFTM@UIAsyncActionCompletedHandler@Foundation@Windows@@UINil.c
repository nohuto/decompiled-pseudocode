/*
 * XREFs of ?FireProgress@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00UDisableCausality@WRL@Microsoft@@@Internal@Windows@@QEAAJH@Z @ 0x180028F0C
 * Callers:
 *     ?SetProgress@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJH@Z @ 0x18002F560 (-SetProgress@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23.c)
 * Callees:
 *     ?CreateBias@?$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA?AV?$AutoStubBias@UIUnknown@@UINilDelegate@Internal@Windows@@@@PEAUIRpcOptions@@PEAUIUnknown@@PEAUINilDelegate@Internal@Windows@@@Z @ 0x18001C764 (-CreateBias@-$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA-AV-$AutoStubBias@UIU.c)
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x18001D794 (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x18001E6C8 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::INilDelegate,1,Microsoft::WRL::DisableCausality>::FireProgress(
        _DWORD *a1,
        unsigned int a2)
{
  unsigned int v4; // r14d
  signed __int32 v5; // eax
  int (__fastcall *v6)(_DWORD *, GUID *, IUnknown **); // rsi
  IUnknown *v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // eax
  LPSTREAM v10; // rcx
  struct IRpcOptions *v11; // rcx
  __int64 v12; // rcx
  struct IUnknown *v13; // rcx
  IUnknown *v14; // rcx
  signed __int32 v16[12]; // [rsp+0h] [rbp-50h] BYREF
  _DWORD *v17; // [rsp+30h] [rbp-20h]
  LPSTREAM pStm; // [rsp+38h] [rbp-18h] BYREF
  int v19; // [rsp+40h] [rbp-10h]
  struct IUnknown *v20; // [rsp+80h] [rbp+30h] BYREF
  IUnknown *v21; // [rsp+90h] [rbp+40h] BYREF
  struct IRpcOptions *v22; // [rsp+98h] [rbp+48h] BYREF

  v4 = 0;
  v17 = a1;
  if ( a1 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
  v21 = 0LL;
  while ( 1 )
  {
    v5 = a1[40];
    if ( v5 <= 0 )
      break;
    if ( v5 == _InterlockedCompareExchange(a1 + 40, v5 + 1, v5) )
    {
      v6 = **(int (__fastcall ***)(_DWORD *, GUID *, IUnknown **))a1;
      v7 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        ((void (__fastcall *)(IUnknown *))v7->lpVtbl->Release)(v7);
      }
      if ( v6(a1, &GUID_00000000_0000_0000_c000_000000000046, &v21) >= 0 )
      {
        v8 = *((_QWORD *)a1 + 18);
        v20 = 0LL;
        if ( v8
          && (*(int (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v8 + 24LL))(
               v8,
               &GUID_2fafaaf9_2986_48ee_919d_98f66edf0a31,
               &v20) >= 0 )
        {
          v22 = 0LL;
          RpcOptionsHelper::GetRpcOptions(v20, &v22);
          BiasHelper<IUnknown,Windows::Internal::INilDelegate,1>::CreateBias(&pStm, (__int64)v22, v21, (__int64)v20);
          v9 = ((__int64 (__fastcall *)(struct IUnknown *, IUnknown *, _QWORD))v20->lpVtbl[1].QueryInterface)(
                 v20,
                 v21,
                 a2);
          v4 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
                 v9,
                 (__int64)v20);
          if ( v19 >= 0 )
          {
            (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)pStm + 40LL))(pStm, 0LL, 0LL, 0LL);
            CoReleaseMarshalData(pStm);
          }
          v10 = pStm;
          if ( pStm )
          {
            pStm = 0LL;
            (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v10 + 16LL))(v10);
          }
          v11 = v22;
          if ( v22 )
          {
            v22 = 0LL;
            ((void (__fastcall *)(struct IRpcOptions *))v11->lpVtbl->Release)(v11);
          }
        }
        if ( _InterlockedExchangeAdd(a1 + 40, 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v16, 0);
          v12 = *((_QWORD *)a1 + 18);
          *((_QWORD *)a1 + 18) = 0LL;
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        v13 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
        }
      }
      break;
    }
  }
  v14 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    ((void (__fastcall *)(IUnknown *))v14->lpVtbl->Release)(v14);
  }
  if ( a1 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
  return v4;
}
