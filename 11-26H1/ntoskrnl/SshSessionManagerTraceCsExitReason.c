/*
 * XREFs of SshSessionManagerTraceCsExitReason @ 0x140B726FC
 * Callers:
 *     PopSleepstudyCaptureSessionStatistics @ 0x140B65FE4 (PopSleepstudyCaptureSessionStatistics.c)
 * Callees:
 *     SshpSessionManagerSendControlEvent @ 0x140B2FF48 (SshpSessionManagerSendControlEvent.c)
 */

void __fastcall SshSessionManagerTraceCsExitReason(__int64 a1, __int64 a2, int *a3)
{
  int v4; // eax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  int v7; // ecx
  int v8; // [rsp+20h] [rbp-E0h] BYREF
  int v9; // [rsp+24h] [rbp-DCh] BYREF
  int v10; // [rsp+28h] [rbp-D8h] BYREF
  int v11; // [rsp+2Ch] [rbp-D4h] BYREF
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v17[46]; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+1D0h] [rbp+D0h] BYREF
  int v19; // [rsp+1D8h] [rbp+D8h] BYREF
  int v20; // [rsp+1E0h] [rbp+E0h] BYREF
  int v21; // [rsp+1E8h] [rbp+E8h] BYREF

  v17[1] = 4LL;
  v17[0] = a3 + 8;
  v10 = *(unsigned __int8 *)(a1 + 56);
  v17[2] = &v10;
  v4 = *a3;
  v17[3] = 4LL;
  v18 = 0;
  if ( v4 == 1 || v4 == 3 )
    v18 = 1;
  v17[5] = 4LL;
  v17[4] = &v18;
  v17[7] = 8LL;
  v17[6] = a1 + 8;
  v17[8] = 0xFFFFF780000002C4uLL;
  v17[10] = &v19;
  v17[12] = a1 + 40;
  v17[14] = a1 + 44;
  v17[16] = a1 + 48;
  v17[18] = a1 + 52;
  v5 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
  v17[9] = 4LL;
  v17[11] = 4LL;
  v17[13] = 4LL;
  v17[15] = 4LL;
  v17[17] = 4LL;
  v17[19] = 4LL;
  v16 = v5 / 0xA;
  v17[20] = &v16;
  v17[21] = 8LL;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v8 = 0;
  v9 = 0;
  v15 = 0LL;
  if ( a2 )
  {
    v6 = *(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 16);
    v20 = *(_DWORD *)(a2 + 40);
    v21 = *(_DWORD *)(a2 + 44);
    v8 = *(_DWORD *)(a2 + 48);
    v7 = *(_DWORD *)(a2 + 52);
    v15 = v6 / 0xA;
    v19 = 1;
    v9 = v7;
  }
  v17[23] = 4LL;
  v17[22] = &v20;
  v17[25] = 4LL;
  v17[24] = &v21;
  v17[27] = 4LL;
  v17[26] = &v8;
  v17[28] = &v9;
  v17[30] = &v15;
  v17[32] = (char *)a3 + 57;
  v11 = *((unsigned __int8 *)a3 + 61);
  v17[34] = &v11;
  v12 = *((unsigned __int8 *)a3 + 62);
  v17[36] = &v12;
  v13 = *((unsigned __int8 *)a3 + 63);
  v17[38] = &v13;
  v14 = *((unsigned __int8 *)a3 + 64);
  v17[40] = &v14;
  v17[42] = (char *)a3 + 59;
  v17[29] = 4LL;
  v17[31] = 8LL;
  v17[33] = 1LL;
  v17[35] = 4LL;
  v17[37] = 4LL;
  v17[39] = 4LL;
  v17[41] = 4LL;
  v17[43] = 1LL;
  SshpSessionManagerSendControlEvent(
    (__int64)SLEEPSTUDY_EVT_CS_EXIT_REASON_CONTROL_EVENT,
    0x16u,
    (__int64)v17,
    (struct _KLOCK_ENTRIES *)a2);
}
