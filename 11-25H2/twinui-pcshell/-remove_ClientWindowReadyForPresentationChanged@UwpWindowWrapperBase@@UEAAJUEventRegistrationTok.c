/*
 * XREFs of ?remove_ClientWindowReadyForPresentationChanged@UwpWindowWrapperBase@@UEAAJUEventRegistrationToken@@@Z @ 0x1801B8B40
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1801B8B80 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Inte.c)
 */

__int64 __fastcall UwpWindowWrapperBase::remove_ClientWindowReadyForPresentationChanged(
        UwpWindowWrapperBase *this,
        struct EventRegistrationToken a2)
{
  int v2; // eax
  const char *v4; // r9
  __int64 v5; // rdx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v8; // [rsp+30h] [rbp+8h]

  v2 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
         (char *)this + 104,
         a2.value);
  if ( v2 < 0 )
  {
    try
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA1D,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v2,
        v6);
    }
    catch ( ... )
    {
      *(_DWORD *)(v5 + 48) = wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0xA20,
                               (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                               v4);
      return v8;
    }
  }
  return 0LL;
}
