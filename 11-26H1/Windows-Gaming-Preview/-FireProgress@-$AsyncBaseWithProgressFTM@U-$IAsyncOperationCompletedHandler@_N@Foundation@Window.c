/*
 * XREFs of ?FireProgress@?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAAJH@Z @ 0x18001D8A0
 * Callers:
 *     ?SetProgress@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJH@Z @ 0x180021B80 (-SetProgress@-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationComple.c)
 * Callees:
 *     ?CreateBias@?$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA?AV?$AutoStubBias@UIUnknown@@UINilDelegate@Internal@Windows@@@@PEAUIRpcOptions@@PEAUIUnknown@@PEAUINilDelegate@Internal@Windows@@@Z @ 0x18001C764 (-CreateBias@-$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA-AV-$AutoStubBias@UIU.c)
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x18001D794 (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x18001E6C8 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::INilDelegate,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireProgress(
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
  signed __int32 v16[8]; // [rsp+0h] [rbp-70h] BYREF
  _DWORD *v17; // [rsp+40h] [rbp-30h]
  LPSTREAM pStm; // [rsp+48h] [rbp-28h] BYREF
  int v19; // [rsp+50h] [rbp-20h]
  GUID v20; // [rsp+60h] [rbp-10h] BYREF
  struct IUnknown *v21; // [rsp+A0h] [rbp+30h] BYREF
  IUnknown *v22; // [rsp+B0h] [rbp+40h] BYREF
  struct IRpcOptions *v23; // [rsp+B8h] [rbp+48h] BYREF

  v4 = 0;
  v17 = a1;
  if ( a1 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
  v22 = 0LL;
  while ( 1 )
  {
    v5 = a1[40];
    if ( v5 <= 0 )
      break;
    if ( v5 == _InterlockedCompareExchange(a1 + 40, v5 + 1, v5) )
    {
      v6 = **(int (__fastcall ***)(_DWORD *, GUID *, IUnknown **))a1;
      v7 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        ((void (__fastcall *)(IUnknown *))v7->lpVtbl->Release)(v7);
      }
      if ( v6(a1, &GUID_00000000_0000_0000_c000_000000000046, &v22) >= 0 )
      {
        v8 = *((_QWORD *)a1 + 18);
        v21 = 0LL;
        if ( v8
          && (*(int (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v8 + 24LL))(
               v8,
               &GUID_2fafaaf9_2986_48ee_919d_98f66edf0a31,
               &v21) >= 0 )
        {
          if ( Microsoft::WRL::gCausality )
          {
            v20 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
            (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, _DWORD *, int))(*(_QWORD *)Microsoft::WRL::gCausality + 72LL))(
              Microsoft::WRL::gCausality,
              1LL,
              2LL,
              &v20,
              a1,
              1);
          }
          v23 = 0LL;
          RpcOptionsHelper::GetRpcOptions(v21, &v23);
          BiasHelper<IUnknown,Windows::Internal::INilDelegate,1>::CreateBias(&pStm, (__int64)v23, v22, (__int64)v21);
          v9 = ((__int64 (__fastcall *)(struct IUnknown *, IUnknown *, _QWORD))v21->lpVtbl[1].QueryInterface)(
                 v21,
                 v22,
                 a2);
          v4 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
                 v9,
                 (__int64)v21);
          if ( Microsoft::WRL::gCausality )
            (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 80LL))(
              Microsoft::WRL::gCausality,
              1LL,
              2LL,
              1LL);
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
          v11 = v23;
          if ( v23 )
          {
            v23 = 0LL;
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
        v13 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
        }
      }
      break;
    }
  }
  v14 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    ((void (__fastcall *)(IUnknown *))v14->lpVtbl->Release)(v14);
  }
  if ( a1 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
  return v4;
}
