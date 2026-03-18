/*
 * XREFs of ?DoDisplayModeReset@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXAEBU_GUID@@@Z @ 0x14000DBE4
 * Callers:
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000E460 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140001B80 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x140001D90 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1400049A0 (__security_check_cookie.c)
 *     BlackScreenDiagnostics::TriggerGraphicsCollection @ 0x14000EB18 (BlackScreenDiagnostics--TriggerGraphicsCollection.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14000F104 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

void __fastcall BlackScreenDiagnostics::CBlackScreenDiagnosticReport::DoDisplayModeReset(
        BlackScreenDiagnostics::CBlackScreenDiagnosticReport *this,
        const struct _GUID *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  char v6; // [rsp+30h] [rbp-19h] BYREF
  int v7; // [rsp+34h] [rbp-15h] BYREF
  __int64 v8; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v10; // [rsp+60h] [rbp+17h]
  __int64 v11; // [rsp+68h] [rbp+1Fh]
  const struct _GUID *v12; // [rsp+70h] [rbp+27h]
  __int64 v13; // [rsp+78h] [rbp+2Fh]
  char *v14; // [rsp+80h] [rbp+37h]
  __int64 v15; // [rsp+88h] [rbp+3Fh]

  v7 = 0;
  RtlGetDeviceFamilyInfoEnum(0LL, &v7, 0LL);
  if ( v7 == 16 )
  {
    v4 = RtlPublishWnfStateData(WNF_DWM_DISPLAY_RESET_REQUEST, 0LL, 0LL, 0LL, 0LL) | 0x10000000;
    if ( v4 < 0 )
      MicrosoftTelemetryAssertTriggeredArgs(v5, (unsigned int)v4, 0LL);
  }
  else
  {
    if ( (unsigned int)dword_1400180D8 > 5 && tlgKeywordOn((__int64)&dword_1400180D8, 0x800000000000LL) )
    {
      v6 = 1;
      v14 = &v6;
      v8 = 0x1000000LL;
      v10 = &v8;
      v15 = 1LL;
      v12 = a2;
      v13 = 16LL;
      v11 = 8LL;
      tlgWriteTransfer_EventWriteTransfer(v3, byte_140013E34, 0LL, 0LL, 5u, &v9);
    }
    LOBYTE(v3) = 1;
    BlackScreenDiagnostics::TriggerGraphicsCollection(v3, 0LL, a2);
  }
}
