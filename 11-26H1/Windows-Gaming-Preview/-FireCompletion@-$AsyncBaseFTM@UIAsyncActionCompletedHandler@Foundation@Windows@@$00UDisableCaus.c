/*
 * XREFs of ?FireCompletion@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180028BE0
 * Callers:
 *     ?FireCompletion@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180028EB0 (-FireCompletion@-$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UIN.c)
 *     ?InvokeFireCompletion@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18002B4A0 (-InvokeFireCompletion@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedH.c)
 *     ?_AfterComplete@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x18002FEC4 (-_AfterComplete@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler.c)
 * Callees:
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x18001D794 (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x18001E6C8 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::DisableCausality>::FireCompletion(
        __int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // rcx
  IUnknown *v4; // rsi
  struct IUnknown *v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // rcx
  LPSTREAM v8; // rcx
  struct IRpcOptions *v9; // rcx
  struct IUnknown *v10; // rcx
  LPUNKNOWN v11; // rcx
  signed __int32 v13[8]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v14; // [rsp+30h] [rbp-20h]
  LPSTREAM ppstm; // [rsp+38h] [rbp-18h] BYREF
  HRESULT v16; // [rsp+40h] [rbp-10h]
  unsigned int v17; // [rsp+80h] [rbp+30h] BYREF
  struct IUnknown *v18; // [rsp+88h] [rbp+38h] BYREF
  LPUNKNOWN pUnk; // [rsp+90h] [rbp+40h] BYREF
  struct IRpcOptions *v20; // [rsp+98h] [rbp+48h] BYREF

  v2 = 0;
  v17 = -2;
  _InterlockedCompareExchange((volatile signed __int32 *)&v17, *(_DWORD *)(a1 + 56), -2);
  if ( !v17 )
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 56), 1, 0);
  if ( *(int *)(a1 + 136) > 0 && _InterlockedIncrement((volatile signed __int32 *)(a1 + 16)) == 1 )
  {
    v14 = a1;
    if ( a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    pUnk = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, LPUNKNOWN *))a1)(
           a1,
           &GUID_5a648006_843a_4da9_865b_9d26e5dfad7b,
           &pUnk) >= 0 )
    {
      v17 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v17, *(_DWORD *)(a1 + 56), -2);
      v3 = *(_QWORD *)(a1 + 120);
      if ( v3 )
      {
        v18 = 0LL;
        if ( (*(int (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v3 + 24LL))(
               v3,
               &GUID_a4ed5c81_76c9_40bd_8be6_b1d90fb20ae7,
               &v18) >= 0 )
        {
          v20 = 0LL;
          RpcOptionsHelper::GetRpcOptions(v18, &v20);
          v4 = pUnk;
          ppstm = 0LL;
          v16 = 0;
          v5 = v18;
          if ( v20 && v18 )
          {
            v16 = CreateStreamOnHGlobal(0LL, 1, &ppstm);
            if ( v16 >= 0 )
              v16 = CoMarshalInterface(ppstm, &GUID_00000000_0000_0000_c000_000000000046, v4, 0, 0LL, 1u);
            v5 = v18;
          }
          else
          {
            v16 = -2147467262;
          }
          v6 = ((__int64 (__fastcall *)(struct IUnknown *, LPUNKNOWN, _QWORD))v5->lpVtbl[1].QueryInterface)(
                 v5,
                 pUnk,
                 v17);
          v2 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
                 v6,
                 (__int64)v18);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 136), 0xFFFFFFFF) == 1 )
          {
            _InterlockedOr(v13, 0);
            v7 = *(_QWORD *)(a1 + 120);
            *(_QWORD *)(a1 + 120) = 0LL;
            if ( v7 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
          }
          if ( v16 >= 0 )
          {
            (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ppstm + 40LL))(ppstm, 0LL, 0LL, 0LL);
            CoReleaseMarshalData(ppstm);
          }
          v8 = ppstm;
          if ( ppstm )
          {
            ppstm = 0LL;
            (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v8 + 16LL))(v8);
          }
          v9 = v20;
          if ( v20 )
          {
            v20 = 0LL;
            ((void (__fastcall *)(struct IRpcOptions *))v9->lpVtbl->Release)(v9);
          }
        }
        v10 = v18;
      }
      else
      {
        v10 = 0LL;
      }
      if ( v10 )
      {
        v18 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->Release)(v10);
      }
    }
    v11 = pUnk;
    if ( pUnk )
    {
      pUnk = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v11->lpVtbl->Release)(v11);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return v2;
}
