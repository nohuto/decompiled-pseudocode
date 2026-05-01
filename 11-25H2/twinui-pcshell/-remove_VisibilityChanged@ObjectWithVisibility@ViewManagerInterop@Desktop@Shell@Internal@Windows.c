/*
 * XREFs of ?remove_VisibilityChanged@ObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x180305AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@23456@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1802D04A4 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAUIObjectWithVisibility@ViewManagerInterop@Desktop.c)
 */

__int64 __fastcall Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility::remove_VisibilityChanged(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithVisibility *,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
         this + 2,
         (struct IUnknown *)a2.value);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (int)"pcshell\\twinui\\appmanager\\lib\\ShellObjectHelpers.h",
      (const char *)(unsigned int)v2);
  return v3;
}
