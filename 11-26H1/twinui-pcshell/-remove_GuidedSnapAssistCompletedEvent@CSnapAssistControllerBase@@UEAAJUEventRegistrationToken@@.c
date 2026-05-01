/*
 * XREFs of ?remove_GuidedSnapAssistCompletedEvent@CSnapAssistControllerBase@@UEAAJUEventRegistrationToken@@@Z @ 0x1805A98F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1801D7B74 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal.c)
 */

__int64 __fastcall CSnapAssistControllerBase::remove_GuidedSnapAssistCompletedEvent(
        CSnapAssistControllerBase *this,
        struct EventRegistrationToken a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
         (__int64)this + 104,
         a2.value);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2D1,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
