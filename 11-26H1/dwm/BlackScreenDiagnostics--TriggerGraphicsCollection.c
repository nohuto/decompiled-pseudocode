/*
 * XREFs of BlackScreenDiagnostics::TriggerGraphicsCollection @ 0x14000EB18
 * Callers:
 *     ?DoDisplayModeReset@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXAEBU_GUID@@@Z @ 0x14000DBE4 (-DoDisplayModeReset@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXAEBU_GUID@@@Z.c)
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000E460 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 * Callees:
 *     __security_check_cookie @ 0x1400049A0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14000F104 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

__int64 __fastcall BlackScreenDiagnostics::TriggerGraphicsCollection(
        unsigned __int8 a1,
        unsigned __int8 a2,
        __int128 *a3)
{
  __int128 v3; // xmm0
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // [rsp+20h] [rbp-40h] BYREF
  int v7; // [rsp+28h] [rbp-38h]
  int v8; // [rsp+2Ch] [rbp-34h]
  int *v9; // [rsp+30h] [rbp-30h]
  __int64 v10; // [rsp+38h] [rbp-28h]
  int v11; // [rsp+40h] [rbp-20h] BYREF
  __int128 v12; // [rsp+44h] [rbp-1Ch]
  unsigned int v13; // [rsp+54h] [rbp-Ch]

  v3 = *a3;
  v6 = 0LL;
  v8 = 0;
  v10 = 24LL;
  v9 = &v11;
  v7 = 1031;
  v13 = a2 | (2 * a1);
  v12 = v3;
  v11 = 2;
  result = D3DKMTEscape(&v6);
  if ( (int)result < 0 )
    return MicrosoftTelemetryAssertTriggeredArgs(v5, (unsigned int)result, (v13 >> 1) & 1);
  return result;
}
