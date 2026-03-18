/*
 * XREFs of ?SendCapabilityUsageReport@@YAXPEBUtagPROCESSINFO@@W4Win32ProcessCapabilities@@@Z @ 0x1401CCEE0
 * Callers:
 *     ?CheckAccess@Win32ProcessCapability@@YA_NPEBUtagPROCESSINFO@@W4Win32ProcessCapabilities@@@Z @ 0x1401CCD80 (-CheckAccess@Win32ProcessCapability@@YA_NPEBUtagPROCESSINFO@@W4Win32ProcessCapabilities@@@Z.c)
 *     RecordCapabilityUsage @ 0x1401CD020 (RecordCapabilityUsage.c)
 * Callees:
 *     W32ExecuteUsingSessionGlobal__lambda_13a60f6c58f1bec3f4c8886e1ca56822___ @ 0x1401CCCA4 (W32ExecuteUsingSessionGlobal__lambda_13a60f6c58f1bec3f4c8886e1ca56822___.c)
 *     WPP_RECORDER_AND_TRACE_SF_Diid @ 0x1401CD14C (WPP_RECORDER_AND_TRACE_SF_Diid.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

_UNKNOWN **__fastcall SendCapabilityUsageReport(__int64 *a1, char a2)
{
  int v2; // eax
  __int64 v4; // rcx
  unsigned int CurrentServiceSessionId; // eax
  _UNKNOWN **result; // rax
  int v7; // ecx
  int v8; // r8d
  bool v9; // bl
  bool v10; // di
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  _DWORD *v14; // [rsp+68h] [rbp+27h] BYREF
  _DWORD v15[2]; // [rsp+70h] [rbp+2Fh] BYREF
  __int64 ProcessSequenceNumber; // [rsp+78h] [rbp+37h]
  __int64 v17; // [rsp+80h] [rbp+3Fh]

  v2 = *((_DWORD *)a1 + 14);
  v4 = *a1;
  v15[0] = v2;
  v15[1] = 0;
  ProcessSequenceNumber = PsGetProcessSequenceNumber(v4);
  v14 = v15;
  v17 = a2 & 2;
  CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
  result = (_UNKNOWN **)W32ExecuteUsingSessionGlobal__lambda_13a60f6c58f1bec3f4c8886e1ca56822_(
                          CurrentServiceSessionId,
                          &v14);
  if ( (int)result < 0 )
  {
    v9 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    result = &WPP_RECORDER_INITIALIZED;
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(v7, (_DWORD)WPP_GLOBAL_Control, v8);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_Diid(
                            *((_QWORD *)WPP_GLOBAL_Control + 3),
                            v13,
                            v12,
                            *(_QWORD *)(UserSessionState + 69136));
    }
  }
  return result;
}
