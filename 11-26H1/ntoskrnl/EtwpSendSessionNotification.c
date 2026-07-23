/*
 * XREFs of EtwpSendSessionNotification @ 0x140A14650
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x140A138AC (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x140A13CC8 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpFlushBuffer @ 0x140A13E4C (EtwpFlushBuffer.c)
 *     EtwpStopLoggerInstance @ 0x140A14B5C (EtwpStopLoggerInstance.c)
 *     EtwpCreateLogFile @ 0x140A16128 (EtwpCreateLogFile.c)
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpNotifyGuid @ 0x140913FD4 (EtwpNotifyGuid.c)
 */

__int64 __fastcall EtwpSendSessionNotification(__int64 a1, int a2, int a3)
{
  unsigned __int16 v3; // bx
  __int64 v7; // rcx
  __int128 v8; // xmm0
  _DWORD v10[10]; // [rsp+20h] [rbp-88h] BYREF
  GUID v11; // [rsp+48h] [rbp-60h]
  __int128 v12; // [rsp+58h] [rbp-50h]
  int v13; // [rsp+68h] [rbp-40h]
  int v14; // [rsp+6Ch] [rbp-3Ch]
  __int64 v15; // [rsp+70h] [rbp-38h]

  v3 = *(_WORD *)a1;
  if ( !*(_WORD *)a1 )
    v3 = -1;
  memset_0(v10, 0, 0x60uLL);
  v7 = *(_QWORD *)(a1 + 1360);
  v11 = SessionNotificationGuid;
  v10[1] = 96;
  v8 = *(_OWORD *)(a1 + 276);
  v10[0] = 7;
  v15 = v3;
  v12 = v8;
  v13 = a2;
  v14 = a3;
  return EtwpNotifyGuid(v7, (__int64)v10, 0);
}
