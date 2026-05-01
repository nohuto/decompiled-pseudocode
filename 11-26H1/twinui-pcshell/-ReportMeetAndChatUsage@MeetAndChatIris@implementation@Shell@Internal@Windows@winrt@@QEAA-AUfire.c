/*
 * XREFs of ?ReportMeetAndChatUsage@MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@W4MeetAndChatUsageType@3456@@Z @ 0x1805FE87C
 * Callers:
 *     ?ReportMeetAndChatUsage@?$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@@impl@winrt@@UEAAHH@Z @ 0x1805F6C10 (-ReportMeetAndChatUsage@-$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::ReportMeetAndChatUsage$_ResumeCoro$1 @ 0x1805FE6A0 (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--ReportMeetAndChatUsage$_Resume.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::ReportMeetAndChatUsage(
        void (__fastcall *a1)(__int64 a1, __int64 a2, __int64 a3, const char *a4),
        _BYTE *a2,
        int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9
  void (__fastcall **v10)(__int64, __int64, __int64, const char *); // [rsp+40h] [rbp+8h]

  v10 = (void (__fastcall **)(__int64, __int64, __int64, const char *))operator new(0x90uLL);
  v10[15] = a1;
  *((_DWORD *)v10 + 32) = a3;
  *v10 = winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::ReportMeetAndChatUsage__ResumeCoro_1;
  *((_DWORD *)v10 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v10 + 112) = 0;
  winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::ReportMeetAndChatUsage__ResumeCoro_1(
    (__int64)v10,
    v6,
    v7,
    v8);
  return a2;
}
