/*
 * XREFs of _lambda_a227ac8fdd86ffb519ef5e6aae7f861c_::operator() @ 0x1401D7604
 * Callers:
 *     _lambda_a227ac8fdd86ffb519ef5e6aae7f861c_::_lambda_invoker_cdecl_ @ 0x1401D7520 (_lambda_a227ac8fdd86ffb519ef5e6aae7f861c_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x14002CED8 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

void __fastcall lambda_a227ac8fdd86ffb519ef5e6aae7f861c_::operator()(__int64 a1, __int64 a2)
{
  unsigned int i; // edi
  __int64 v4; // rdx
  bool v5; // si
  bool v6; // r14
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx

  if ( !*(_DWORD *)(a2 + 1056) )
  {
    RIMLockExclusive(a2 + 104);
    if ( !*(_BYTE *)(a2 + 81) && !*(_BYTE *)(a2 + 80) )
    {
      for ( i = 0; i <= 2; ++i )
      {
        if ( (int)RIMUnRegisterForInputDeviceTypeClassNotifications(a2, i) < 0 )
        {
          v5 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v4);
            LOBYTE(v8) = v6;
            LOBYTE(v9) = v5;
            WPP_RECORDER_AND_TRACE_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v9,
              v8,
              *(_QWORD *)(UserSessionState + 19336),
              4,
              1,
              124,
              (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
              a2);
          }
        }
      }
    }
    RIMUnlockExclusive(a2 + 104);
  }
}
