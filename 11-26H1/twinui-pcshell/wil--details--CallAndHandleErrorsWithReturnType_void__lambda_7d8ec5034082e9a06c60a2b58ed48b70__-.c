/*
 * XREFs of wil::details::CallAndHandleErrorsWithReturnType_void__lambda_7d8ec5034082e9a06c60a2b58ed48b70__&_long_&_0_ @ 0x18045F3B4
 * Callers:
 *     _lambda_9d097b6936b3302a7f5b317279addc7e_::operator() @ 0x180460E24 (_lambda_9d097b6936b3302a7f5b317279addc7e_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180249650 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ??$ShowAttemptSkippedDueToFullScreenExperience@AEAJ@StartWindowTelemetry@@SAXAEAJ@Z @ 0x18045FF88 (--$ShowAttemptSkippedDueToFullScreenExperience@AEAJ@StartWindowTelemetry@@SAXAEAJ@Z.c)
 */

__int64 __fastcall wil::details::CallAndHandleErrorsWithReturnType_void__lambda_7d8ec5034082e9a06c60a2b58ed48b70____long___0_(
        __int64 a1,
        int *a2)
{
  int v2; // r8d
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v6; // [rsp+30h] [rbp+8h] BYREF

  try
  {
    v6 = *a2;
    v2 = v6;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1112LL) = 0;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1116LL) = 0;
    if ( v2 >= 0 )
      XamlLauncherState::ShowStartView(
        *(_QWORD *)(a1 + 8) + 24LL,
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1104LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1108LL));
    StartWindowTelemetry::ShowAttemptSkippedDueToFullScreenExperience<long &>(&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x58D,
                           (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
                           v3);
  }
  return result;
}
