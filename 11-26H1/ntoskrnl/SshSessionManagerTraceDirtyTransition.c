/*
 * XREFs of SshSessionManagerTraceDirtyTransition @ 0x1407E9278
 * Callers:
 *     PopDiagTraceDirtyTransition @ 0x140CD7F2C (PopDiagTraceDirtyTransition.c)
 * Callees:
 *     SshpSessionManagerSendControlEvent @ 0x140B31D28 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshSessionManagerTraceDirtyTransition(__int64 a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v5; // [rsp+20h] [rbp-E0h] BYREF
  int v6; // [rsp+24h] [rbp-DCh] BYREF
  _QWORD v7[38]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v8; // [rsp+170h] [rbp+70h] BYREF
  char v9; // [rsp+178h] [rbp+78h] BYREF
  int v10; // [rsp+180h] [rbp+80h] BYREF
  int v11; // [rsp+188h] [rbp+88h] BYREF

  v8 = a1;
  v7[0] = &stru_140E67200.WaitBlock[3].Object;
  v7[1] = 4LL;
  v7[2] = &stru_140E67200.WaitBlock[3].SparePtr;
  v7[4] = &stru_140E67200.512;
  v7[6] = &stru_140E67200.QueueListEntry;
  v7[8] = &stru_140E67200.QueueListEntry.Blink;
  v10 = LOBYTE(stru_140E67200.Process->Header.WaitListHead.Flink) >> 4;
  v7[10] = &v10;
  v7[14] = (char *)&stru_140E67200.Affinity + 4;
  v7[16] = &stru_140E67200.UserAffinityPrimaryGroup;
  v1 = (LOBYTE(stru_140E67200.Process->Header.WaitListHead.Flink) >> 1) & 1;
  v7[3] = 8LL;
  v11 = v1;
  v7[18] = &v11;
  v7[20] = (char *)&stru_140E67200.Process->Header.WaitListHead.Flink + 4;
  v7[22] = &stru_140E67200.UserAffinity->StaticBitmap[2];
  LOBYTE(v1) = BYTE6(stru_140E67200.Process->Header.WaitListHead.Flink) & 0xF;
  v7[5] = 8LL;
  LOBYTE(v8) = v1;
  v7[24] = &v8;
  v2 = (BYTE6(stru_140E67200.Process->Header.WaitListHead.Flink) >> 5) & 1;
  v7[7] = 8LL;
  v5 = v2;
  v7[26] = &v5;
  v3 = (HIBYTE(stru_140E67200.UserAffinity->Count) >> 4) & 1;
  v7[9] = 8LL;
  v6 = v3;
  v7[28] = &v6;
  v7[30] = (char *)&stru_140E67200.UserAffinity->Size + 1;
  v7[32] = &stru_140E67200.UserAffinity->Reserved;
  v9 = BYTE3(stru_140E67200.Process->Header.WaitListHead.Flink) >> 6;
  v7[34] = &v9;
  v7[36] = &stru_140E67200.Affinity;
  v7[11] = 4LL;
  v7[12] = stru_140E67200.Process;
  v7[13] = 8LL;
  v7[15] = 4LL;
  v7[17] = 1LL;
  v7[19] = 4LL;
  v7[21] = 4LL;
  v7[23] = 8LL;
  v7[25] = 1LL;
  v7[27] = 4LL;
  v7[29] = 4LL;
  v7[31] = 1LL;
  v7[33] = 1LL;
  v7[35] = 1LL;
  v7[37] = 4LL;
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_DIRTY_TRANSITION_CONTROL_EVENT, 19LL, v7);
}
