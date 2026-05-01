/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_baf814ee9ae89b980ad734f70dac785d_@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x1803FF660
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@AEAAJXZ @ 0x1804041F4 (-Initialize@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Intern.c)
 */

_BOOL8 __fastcall _lambda_baf814ee9ae89b980ad734f70dac785d_::_lambda_invoker_cdecl_(
        PINIT_ONCE InitOnce,
        PVOID Parameter,
        PVOID *Context)
{
  signed int v3; // eax
  signed int v4; // ebx

  if ( Context )
    *Context = 0LL;
  v3 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::Initialize(Parameter);
  v4 = v3;
  if ( v3 < 0 )
    SetLastError(v3);
  return v4 >= 0;
}
