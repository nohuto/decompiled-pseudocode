/*
 * XREFs of ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x1800288A0
 * Callers:
 *     ?FireCompletion@?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180028E50 (-FireCompletion@-$AsyncBaseWithProgressFTM@U-$IAsyncOperationCompletedHandler@_N@Foundation@Wind.c)
 *     ?InvokeFireCompletion@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18002B440 (-InvokeFireCompletion@-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperat.c)
 *     ?_AfterComplete@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x18002FE0C (-_AfterComplete@-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCom.c)
 * Callees:
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x18001D794 (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x18001E6C8 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(
        signed __int32 *a1)
{
  unsigned int v2; // r14d
  LPUNKNOWN v3; // rcx
  int (__fastcall *v4)(signed __int32 *, GUID *, LPUNKNOWN *); // rsi
  __int64 v5; // rcx
  IUnknown *v6; // rsi
  struct IUnknown *v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rcx
  LPSTREAM v10; // rcx
  struct IRpcOptions *v11; // rcx
  struct IUnknown *v12; // rcx
  LPUNKNOWN v13; // rcx
  signed __int32 v15[8]; // [rsp+0h] [rbp-78h] BYREF
  signed __int32 *v16; // [rsp+40h] [rbp-38h]
  LPSTREAM ppstm[2]; // [rsp+50h] [rbp-28h] BYREF
  GUID v18; // [rsp+60h] [rbp-18h] BYREF
  unsigned int v19; // [rsp+B0h] [rbp+38h] BYREF
  struct IUnknown *v20; // [rsp+B8h] [rbp+40h] BYREF
  LPUNKNOWN pUnk; // [rsp+C0h] [rbp+48h] BYREF
  struct IRpcOptions *v22; // [rsp+C8h] [rbp+50h] BYREF

  v2 = 0;
  v19 = -2;
  _InterlockedCompareExchange((volatile signed __int32 *)&v19, a1[14], -2);
  if ( !v19 )
    _InterlockedCompareExchange(a1 + 14, 1, 0);
  if ( a1[34] > 0 && _InterlockedIncrement(a1 + 4) == 1 )
  {
    v16 = a1;
    if ( a1 )
      (*(void (__fastcall **)(signed __int32 *))(*(_QWORD *)a1 + 8LL))(a1);
    v3 = 0LL;
    pUnk = 0LL;
    if ( Microsoft::WRL::gCausality )
    {
      v19 = 0;
      _InterlockedCompareExchange((volatile signed __int32 *)&v19, a1[14], 0);
      *(GUID *)ppstm = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
      (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, LPSTREAM *, signed __int32 *, unsigned int))(*(_QWORD *)Microsoft::WRL::gCausality + 56LL))(
        Microsoft::WRL::gCausality,
        0LL,
        2LL,
        ppstm,
        a1,
        v19);
      v3 = pUnk;
    }
    v4 = **(int (__fastcall ***)(signed __int32 *, GUID *, LPUNKNOWN *))a1;
    if ( v3 )
    {
      pUnk = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v3->lpVtbl->Release)(v3);
    }
    if ( v4(a1, &GUID_cdb5efb3_5788_509d_9be1_71ccb8a3362a, &pUnk) >= 0 )
    {
      v19 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v19, a1[14], -2);
      v5 = *((_QWORD *)a1 + 15);
      if ( v5 )
      {
        v20 = 0LL;
        if ( (*(int (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v5 + 24LL))(
               v5,
               &GUID_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a,
               &v20) >= 0 )
        {
          if ( Microsoft::WRL::gCausality )
          {
            v18 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
            (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, signed __int32 *, _DWORD))(*(_QWORD *)Microsoft::WRL::gCausality + 72LL))(
              Microsoft::WRL::gCausality,
              0LL,
              2LL,
              &v18,
              a1,
              0);
          }
          v22 = 0LL;
          RpcOptionsHelper::GetRpcOptions(v20, &v22);
          v6 = pUnk;
          ppstm[0] = 0LL;
          LODWORD(ppstm[1]) = 0;
          v7 = v20;
          if ( v22 && v20 )
          {
            LODWORD(ppstm[1]) = CreateStreamOnHGlobal(0LL, 1, ppstm);
            if ( SLODWORD(ppstm[1]) >= 0 )
              LODWORD(ppstm[1]) = CoMarshalInterface(
                                    ppstm[0],
                                    &GUID_00000000_0000_0000_c000_000000000046,
                                    v6,
                                    0,
                                    0LL,
                                    1u);
            v7 = v20;
          }
          else
          {
            LODWORD(ppstm[1]) = -2147467262;
          }
          v8 = ((__int64 (__fastcall *)(struct IUnknown *, LPUNKNOWN, _QWORD))v7->lpVtbl[1].QueryInterface)(
                 v7,
                 pUnk,
                 v19);
          v2 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
                 v8,
                 (__int64)v20);
          if ( _InterlockedExchangeAdd(a1 + 34, 0xFFFFFFFF) == 1 )
          {
            _InterlockedOr(v15, 0);
            v9 = *((_QWORD *)a1 + 15);
            *((_QWORD *)a1 + 15) = 0LL;
            if ( v9 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
          }
          if ( Microsoft::WRL::gCausality )
            (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 80LL))(
              Microsoft::WRL::gCausality,
              0LL,
              2LL);
          if ( SLODWORD(ppstm[1]) >= 0 )
          {
            (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ppstm[0] + 40LL))(
              ppstm[0],
              0LL,
              0LL,
              0LL);
            CoReleaseMarshalData(ppstm[0]);
          }
          v10 = ppstm[0];
          if ( ppstm[0] )
          {
            ppstm[0] = 0LL;
            (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v10 + 16LL))(v10);
          }
          v11 = v22;
          if ( v22 )
          {
            v22 = 0LL;
            ((void (__fastcall *)(struct IRpcOptions *))v11->lpVtbl->Release)(v11);
          }
        }
        v12 = v20;
      }
      else
      {
        v12 = 0LL;
      }
      if ( v12 )
      {
        v20 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl->Release)(v12);
      }
    }
    v13 = pUnk;
    if ( pUnk )
    {
      pUnk = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v13->lpVtbl->Release)(v13);
    }
    (*(void (__fastcall **)(signed __int32 *))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return v2;
}
