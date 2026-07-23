/*
 * XREFs of EtwWmitraceWorker @ 0x1408324F8
 * Callers:
 *     ExpDebuggerWorker @ 0x140C1CD60 (ExpDebuggerWorker.c)
 * Callees:
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     RtlInitAnsiString @ 0x140466120 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpPrepareWmitraceLoggerInfo @ 0x140832824 (EtwpPrepareWmitraceLoggerInfo.c)
 *     EtwpQueryTrace @ 0x140979CA0 (EtwpQueryTrace.c)
 *     RtlAnsiStringToUnicodeString @ 0x14097C370 (RtlAnsiStringToUnicodeString.c)
 *     PsGetSiloBySessionId @ 0x1409F6C94 (PsGetSiloBySessionId.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     EtwpUpdateTrace @ 0x140AB081C (EtwpUpdateTrace.c)
 *     EtwpStartTrace @ 0x140AB0EB0 (EtwpStartTrace.c)
 *     EtwpStopTrace @ 0x140AB2D10 (EtwpStopTrace.c)
 *     EtwEnableTrace @ 0x140AD6640 (EtwEnableTrace.c)
 */

void EtwWmitraceWorker()
{
  __int64 v0; // rdi
  int SiloBySessionId; // ebx
  int Trace; // eax
  int v3; // eax
  int updated; // eax
  int v5; // eax
  int started; // eax
  __int64 v7; // [rsp+40h] [rbp-C0h] BYREF
  STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v9[8]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 v10; // [rsp+68h] [rbp-98h]
  int v11; // [rsp+90h] [rbp-70h]
  int v12; // [rsp+94h] [rbp-6Ch]
  int v13; // [rsp+98h] [rbp-68h]
  int v14; // [rsp+9Ch] [rbp-64h]
  int v15; // [rsp+A0h] [rbp-60h]
  int v16; // [rsp+A4h] [rbp-5Ch]
  UNICODE_STRING v17; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+F0h] [rbp-10h] BYREF

  memset_0(v9, 0, 0xB0uLL);
  v7 = 0LL;
  DestinationString = 0LL;
  if ( dword_140F03F64 )
  {
    SiloBySessionId = PsGetSiloBySessionId((unsigned int)dword_140F03F64, &v7);
    if ( SiloBySessionId < 0 || !v7 )
      goto LABEL_29;
    v0 = *(_QWORD *)(*(_QWORD *)(v7 + 1504) + 832LL);
  }
  else
  {
    v0 = EtwpHostSiloState;
  }
  switch ( EtwWmitraceWork )
  {
    case 1:
      EtwpPrepareWmitraceLoggerInfo(v9);
      RtlInitAnsiString(&DestinationString, qword_140F03F68);
      RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
      v12 = dword_140F04030;
      v13 = dword_140F04034;
      v11 = dword_140F04038;
      v15 = dword_140F0403C;
      v16 = dword_140F04040;
      v14 = dword_140F0402C;
      if ( byte_140F03FA9 )
      {
        RtlInitAnsiString(&DestinationString, &byte_140F03FA9);
        RtlAnsiStringToUnicodeString(&v17, &DestinationString, 1u);
      }
      started = EtwpStartTrace(v0, v9);
      SiloBySessionId = started;
      if ( started >= 0 )
        EtwpWmitraceParams = v10;
      else
        DbgPrintEx(0x17u, 3u, "wmitrace: EtwpStartTrace failed: 0x%x\n", started);
      RtlFreeAnsiString(&UnicodeString);
      if ( byte_140F03FA9 )
        RtlFreeAnsiString(&v17);
      break;
    case 2:
      EtwpPrepareWmitraceLoggerInfo(v9);
      Trace = EtwpQueryTrace(v0, v9);
      SiloBySessionId = Trace;
      if ( Trace < 0 )
        goto LABEL_19;
      v5 = EtwpStopTrace(v0, v9, 0LL);
      SiloBySessionId = v5;
      if ( v5 < 0 )
        DbgPrintEx(0x17u, 3u, "wmitrace: EtwpStopTrace failed: 0x%x\n", (unsigned int)v5);
      break;
    case 3:
      EtwpPrepareWmitraceLoggerInfo(v9);
      Trace = EtwpQueryTrace(v0, v9);
      SiloBySessionId = Trace;
      if ( Trace < 0 )
        goto LABEL_19;
      v15 |= 0x80000u;
      updated = EtwpUpdateTrace(v0, v9);
      SiloBySessionId = updated;
      if ( updated < 0 )
        DbgPrintEx(0x17u, 3u, "wmitrace: failed to enable KD_FILTER 0x%x\n", (unsigned int)updated);
      break;
    default:
      if ( EtwWmitraceWork != 4 && (unsigned int)(unsigned __int8)EtwWmitraceWork - 5 >= 2 )
      {
        SiloBySessionId = -1073741637;
        DbgPrintEx(0x17u, 3u, "Unknown command passed to EtwWmitraceWorker.\n");
        break;
      }
      EtwpPrepareWmitraceLoggerInfo(v9);
      Trace = EtwpQueryTrace(v0, v9);
      SiloBySessionId = Trace;
      if ( Trace >= 0 )
      {
        v3 = EtwEnableTrace(
               (unsigned int)&unk_140F03F7C,
               byte_140F03F8C,
               *(__int64 *)qword_140F03F68,
               qword_140F03F70,
               dword_140F03F78);
        SiloBySessionId = v3;
        if ( v3 < 0 )
          DbgPrintEx(0x17u, 3u, "wmitrace: EtwpEnableTraceEx failed: 0x%x\n", (unsigned int)v3);
        break;
      }
LABEL_19:
      DbgPrintEx(0x17u, 3u, "wmitrace: EtwpQueryTrace failed: 0x%x\n", (unsigned int)Trace);
      break;
  }
LABEL_29:
  dword_140F04048 = SiloBySessionId;
  EtwWmitraceWork = 0;
}
