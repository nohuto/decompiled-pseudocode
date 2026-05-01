/*
 * XREFs of ?FireCompletion@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJXZ @ 0x18001CC30
 * Callers:
 *     <none>
 * Callees:
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x18001D794 (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(
        signed __int32 *a1)
{
  unsigned int v2; // esi
  __int64 v3; // rcx
  int (__fastcall *v4)(signed __int32 *, GUID *, __int64 *); // rdi
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx
  GUID v9; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v10; // [rsp+70h] [rbp+20h] BYREF
  __int64 v11; // [rsp+78h] [rbp+28h] BYREF
  signed __int32 *v12; // [rsp+80h] [rbp+30h]

  v2 = 0;
  v10 = -2;
  _InterlockedCompareExchange((volatile signed __int32 *)&v10, a1[14], -2);
  if ( !v10 )
    _InterlockedCompareExchange(a1 + 14, 1, 0);
  if ( *((_QWORD *)a1 + 3) && !_InterlockedCompareExchange(a1 + 4, 1, 0) )
  {
    v12 = a1;
    (*(void (__fastcall **)(signed __int32 *))(*(_QWORD *)a1 + 8LL))(a1);
    v3 = 0LL;
    v11 = 0LL;
    if ( Microsoft::WRL::gCausality )
    {
      v10 = 0;
      _InterlockedCompareExchange((volatile signed __int32 *)&v10, a1[14], 0);
      v9 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
      (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, signed __int32 *, unsigned int))(*(_QWORD *)Microsoft::WRL::gCausality + 56LL))(
        Microsoft::WRL::gCausality,
        0LL,
        2LL,
        &v9,
        a1,
        v10);
      v3 = v11;
    }
    v4 = **(int (__fastcall ***)(signed __int32 *, GUID *, __int64 *))a1;
    if ( v3 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    if ( v4(a1, &GUID_37bcb2e2_9c6f_5658_a43b_ed28fe0c8458, &v11) >= 0 )
    {
      v10 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v10, a1[14], -2);
      if ( Microsoft::WRL::gCausality )
      {
        v9 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
        (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, signed __int32 *, _DWORD))(*(_QWORD *)Microsoft::WRL::gCausality + 72LL))(
          Microsoft::WRL::gCausality,
          0LL,
          2LL,
          &v9,
          a1,
          0);
      }
      v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)a1 + 3) + 24LL))(
             *((_QWORD *)a1 + 3),
             v11,
             v10);
      v2 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
             v5,
             *((_QWORD *)a1 + 3),
             *((_QWORD *)a1 + 5));
      if ( _InterlockedExchangeAdd(a1 + 8, 0xFFFFFFFF) == 1 )
      {
        v6 = *((_QWORD *)a1 + 3);
        if ( v6 )
        {
          *((_QWORD *)a1 + 3) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        }
      }
      if ( Microsoft::WRL::gCausality )
        (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 80LL))(
          Microsoft::WRL::gCausality,
          0LL,
          2LL);
    }
    v7 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    (*(void (__fastcall **)(signed __int32 *))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return v2;
}
