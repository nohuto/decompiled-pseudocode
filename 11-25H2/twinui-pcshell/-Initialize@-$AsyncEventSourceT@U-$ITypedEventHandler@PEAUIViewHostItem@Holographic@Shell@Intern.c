/*
 * XREFs of ?Initialize@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@AEAAJXZ @ 0x1803F9A1C
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_baf814ee9ae89b980ad734f70dac785d_@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x1803F53A0 (-_lambda_invoker_cdecl_@_lambda_baf814ee9ae89b980ad734f70dac785d_@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@V?$EventInvocationContext@$00@details@wil@@UIEventInvocationContext@23@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIEventInvocationContext@details@wil@@@WRL@Microsoft@@@012@@Z @ 0x1803F61BC (--$MakeAndInitialize@V-$EventInvocationContext@$00@details@wil@@UIEventInvocationCo_ea_1803F61BC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::Initialize(
        __int64 a1)
{
  __int64 v1; // rsi
  int v2; // ebx
  __int64 v3; // rdx
  __int64 (__fastcall *v5)(__int64, __int64); // rdi
  __int64 v6; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 32) )
  {
    v1 = *(_QWORD *)(a1 + 40);
    if ( !v1 )
    {
      v2 = -2147024882;
      v3 = 680LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (int)"onecore\\internal\\sdk\\inc\\wil\\WrlEvent.h",
        (const char *)(unsigned int)v2);
      return (unsigned int)v2;
    }
    v5 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 48LL);
    v6 = a1 + 48;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 48));
    v2 = v5(v1, v6);
    if ( v2 < 0 )
    {
      v3 = 681LL;
      goto LABEL_4;
    }
  }
  else
  {
    v2 = Microsoft::WRL::Details::MakeAndInitialize<wil::details::EventInvocationContext<1>,wil::details::IEventInvocationContext,>((__int64 *)(a1 + 48));
    if ( v2 < 0 )
    {
      v3 = 685LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
