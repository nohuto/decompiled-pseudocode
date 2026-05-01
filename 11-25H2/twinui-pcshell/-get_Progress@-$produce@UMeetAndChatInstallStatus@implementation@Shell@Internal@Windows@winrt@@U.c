/*
 * XREFs of ?get_Progress@?$produce@UMeetAndChatInstallStatus@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatInstallStatus@3456@@impl@winrt@@UEAAHPEAUstruct_Windows_Internal_Shell_MeetAndChat_MeetAndChatInstallProgress@23@@Z @ 0x1805D3960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::MeetAndChatInstallStatus,winrt::Windows::Internal::Shell::IMeetAndChatInstallStatus>::get_Progress(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8
  int v3; // eax

  v2 = a1 + 12;
  if ( !a1 )
    v2 = 28LL;
  v3 = *(_DWORD *)(v2 + 8);
  *(_QWORD *)a2 = *(_QWORD *)v2;
  *(_DWORD *)(a2 + 8) = v3;
  return 0LL;
}
