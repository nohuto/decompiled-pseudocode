/*
 * XREFs of ?RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000E8D8
 * Callers:
 *     ?RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ @ 0x14000EA38 (-RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ.c)
 *     ?RunDiagnosticsFromLongPowerButtonHold@BlackScreenDiagnostics@@YAXAEBU_GUID@@@Z @ 0x14000EB00 (-RunDiagnosticsFromLongPowerButtonHold@BlackScreenDiagnostics@@YAXAEBU_GUID@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140001B80 (_tlgKeywordOn.c)
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x140001CD4 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x140001D90 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1400049A0 (__security_check_cookie.c)
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000E460 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 */

void __fastcall BlackScreenDiagnostics::CBlackScreenDiagnosticReport::RunDiagnostics(
        int a1,
        int a2,
        const struct _GUID *a3)
{
  BlackScreenDiagnostics::CBlackScreenDiagnosticReport *v6; // rcx
  REGHANDLE v7; // rcx
  int v8; // [rsp+38h] [rbp-29h] BYREF
  int v9; // [rsp+3Ch] [rbp-25h] BYREF
  __int64 v10; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+48h] [rbp-19h] BYREF
  __int64 *v12; // [rsp+68h] [rbp+7h]
  __int64 v13; // [rsp+70h] [rbp+Fh]
  const struct _GUID *v14; // [rsp+78h] [rbp+17h]
  __int64 v15; // [rsp+80h] [rbp+1Fh]
  int *v16; // [rsp+88h] [rbp+27h]
  __int64 v17; // [rsp+90h] [rbp+2Fh]
  int *v18; // [rsp+98h] [rbp+37h]
  __int64 v19; // [rsp+A0h] [rbp+3Fh]

  if ( TryAcquireSRWLockExclusive(&BlackScreenDiagnostics::CBlackScreenDiagnosticReport::s_srwLock) )
  {
    TraceLoggingRegisterEx_EventRegister_EventSetInformation();
    if ( (unsigned int)dword_1400180D8 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1400180D8, 0x800000000000LL) )
      {
        v8 = a2;
        v18 = &v8;
        v9 = a1;
        v16 = &v9;
        v10 = 50331648LL;
        v12 = &v10;
        v19 = 4LL;
        v17 = 4LL;
        v14 = a3;
        v15 = 16LL;
        v13 = 8LL;
        tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1400180D8, byte_140013D80, 0LL, 0LL, 6u, &v11);
      }
    }
    BlackScreenDiagnostics::CBlackScreenDiagnosticReport::Run(v6, a1, a2, a3);
    v7 = RegHandle;
    RegHandle = 0LL;
    dword_1400180D8 = 0;
    EventUnregister(v7);
    ReleaseSRWLockExclusive(&BlackScreenDiagnostics::CBlackScreenDiagnosticReport::s_srwLock);
  }
}
