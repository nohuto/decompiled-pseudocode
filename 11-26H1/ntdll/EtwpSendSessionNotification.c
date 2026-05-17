/*
 * XREFs of EtwpSendSessionNotification @ 0x180076070
 * Callers:
 *     EtwpStartUmLogger @ 0x180076EBC (EtwpStartUmLogger.c)
 *     EtwpLogger @ 0x180078000 (EtwpLogger.c)
 *     EtwpFlushActiveBuffers @ 0x180078240 (EtwpFlushActiveBuffers.c)
 *     EtwpStopLoggerInstance @ 0x18007840C (EtwpStopLoggerInstance.c)
 * Callees:
 *     EtwDeliverDataBlock @ 0x1800525B0 (EtwDeliverDataBlock.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwpSendSessionNotification(__int64 a1, int a2, int a3)
{
  __int128 v6; // xmm0
  __int64 v8; // [rsp+20h] [rbp-39h]
  int v9[10]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v10; // [rsp+58h] [rbp-1h]
  __int128 v11; // [rsp+68h] [rbp+Fh]
  int v12; // [rsp+78h] [rbp+1Fh]
  int v13; // [rsp+7Ch] [rbp+23h]
  __int64 v14; // [rsp+80h] [rbp+27h]

  v8 = *(unsigned __int16 *)(a1 + 20);
  BYTE3(v8) = 1;
  memset_thunk_772440563353939046(v9, 0, 0x60uLL);
  v9[1] = 96;
  v10 = SessionNotificationGuid;
  v9[0] = 7;
  v6 = *(_OWORD *)(a1 + 44);
  v9[6] = -1;
  v14 = v8;
  v11 = v6;
  v12 = a2;
  v13 = a3;
  v9[9] = (int)NtCurrentTeb()->ClientId.UniqueProcess;
  return EtwDeliverDataBlock(v9);
}
