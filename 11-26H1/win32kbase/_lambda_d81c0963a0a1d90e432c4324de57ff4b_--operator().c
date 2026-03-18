/*
 * XREFs of _lambda_d81c0963a0a1d90e432c4324de57ff4b_::operator() @ 0x1401FE8C8
 * Callers:
 *     _lambda_d81c0963a0a1d90e432c4324de57ff4b_::_lambda_invoker_cdecl_ @ 0x1401FE880 (_lambda_d81c0963a0a1d90e432c4324de57ff4b_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x140092C7C (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

void __fastcall lambda_d81c0963a0a1d90e432c4324de57ff4b_::operator()(__int64 a1, __int64 a2)
{
  unsigned int i; // edi
  int v4; // edx
  int v5; // r8d
  bool v6; // si
  bool v7; // r14
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx

  if ( !*(_DWORD *)(a2 + 1056) )
  {
    RIMLockExclusive(a2 + 104);
    if ( !*(_BYTE *)(a2 + 81) && !*(_BYTE *)(a2 + 80) )
    {
      for ( i = 0; i <= 2; ++i )
      {
        if ( (int)RIMUnRegisterForInputDeviceTypeClassNotifications(a2, i) < 0 )
        {
          v6 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v4, v5);
            LOBYTE(v9) = v7;
            LOBYTE(v10) = v6;
            WPP_RECORDER_AND_TRACE_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v10,
              v9,
              *(_QWORD *)(UserSessionState + 19368),
              4,
              1,
              123,
              (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
              a2);
          }
        }
      }
    }
    RIMUnlockExclusive(a2 + 104);
  }
}
