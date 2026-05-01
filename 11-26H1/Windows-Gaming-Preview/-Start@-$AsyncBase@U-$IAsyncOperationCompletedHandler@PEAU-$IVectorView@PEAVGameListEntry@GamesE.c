/*
 * XREFs of ?Start@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x180021BA0
 * Callers:
 *     ??$MakeAsyncOperationHelper@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@3@VComTaskPoolHandler@23@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@@01@@Z @ 0x180017BD8 (--$MakeAsyncOperationHelper@V-$CMarshaledInterfaceResult@U-$IVectorView@PEAVGameListEntry@GamesE.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D20 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18000BD84 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *> *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Start(
        __int64 a1)
{
  signed __int32 v1; // edx
  signed __int32 v3; // eax
  int v4; // ebp
  unsigned int v5; // r8d
  __int64 v6; // rbx
  void (__fastcall *v7)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, PVOID, __int64); // rdi
  PVOID Reserved1; // rcx
  GUID v10; // [rsp+40h] [rbp-48h] BYREF
  HSTRING_HEADER v11; // [rsp+50h] [rbp-38h] BYREF

  v1 = *(_DWORD *)(a1 + 56);
  v10.Data1 = -2;
  _InterlockedCompareExchange((volatile signed __int32 *)&v10, v1, -2);
  if ( v10.Data1 == -1
    && (v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 56), 0, -1), v3 == v10.Data1) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1);
    if ( v4 >= 0
      && InitOnceExecuteOnce(
           &Microsoft::WRL::gCausalityInitOnce,
           (PINIT_ONCE_FN)Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::DisableCausality>::InitCausality,
           0LL,
           0LL)
      && Microsoft::WRL::gCausality )
    {
      v6 = *(unsigned int *)(a1 + 64);
      v7 = *(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, PVOID, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 48LL);
      *(_QWORD *)&v10.Data1 = L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVector"
                               "View`1<Windows.Gaming.Preview.GamesEnumeration.GameListEntry>>";
      Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v11, (const WCHAR **)&v10, v5)[1].Reserved.Reserved1;
      v10 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
      v7(Microsoft::WRL::gCausality, 0LL, 2LL, &v10, a1, Reserved1, v6);
    }
  }
  else
  {
    v4 = -2147483635;
    RoOriginateError(2147483661LL, 0LL);
  }
  return (unsigned int)v4;
}
