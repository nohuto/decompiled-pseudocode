/*
 * XREFs of SshpSessionManagerTraceCsExitReasonV1 @ 0x1407E9A18
 * Callers:
 *     SshSessionManagerTraceCsExitReason @ 0x140B77904 (SshSessionManagerTraceCsExitReason.c)
 * Callees:
 *     SshpSessionManagerSendControlEvent @ 0x140B31D28 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshpSessionManagerTraceCsExitReasonV1(__int64 a1, __int64 a2, int *a3)
{
  int v4; // eax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  int v7; // ecx
  int v9; // [rsp+20h] [rbp-E0h] BYREF
  int v10; // [rsp+24h] [rbp-DCh] BYREF
  int v11; // [rsp+28h] [rbp-D8h] BYREF
  int v12; // [rsp+2Ch] [rbp-D4h] BYREF
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v18[48]; // [rsp+50h] [rbp-B0h] BYREF
  int v19; // [rsp+1E0h] [rbp+E0h] BYREF
  int v20; // [rsp+1E8h] [rbp+E8h] BYREF
  int v21; // [rsp+1F0h] [rbp+F0h] BYREF
  int v22; // [rsp+1F8h] [rbp+F8h] BYREF

  v18[1] = 4LL;
  v18[0] = a3 + 8;
  v11 = *(unsigned __int8 *)(a1 + 56);
  v18[2] = &v11;
  v4 = *a3;
  v18[3] = 4LL;
  v19 = 0;
  if ( v4 == 1 || v4 == 3 )
    v19 = 1;
  v18[5] = 4LL;
  v18[4] = &v19;
  v18[7] = 8LL;
  v18[6] = a1 + 8;
  v18[8] = 0xFFFFF780000002C4uLL;
  v18[10] = &v20;
  v18[12] = a1 + 40;
  v18[14] = a1 + 44;
  v18[16] = a1 + 48;
  v18[18] = a1 + 52;
  v5 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
  v18[9] = 4LL;
  v18[11] = 4LL;
  v18[13] = 4LL;
  v18[15] = 4LL;
  v18[17] = 4LL;
  v18[19] = 4LL;
  v17 = v5 / 0xA;
  v18[20] = &v17;
  v18[21] = 8LL;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v9 = 0;
  v10 = 0;
  v16 = 0LL;
  if ( a2 )
  {
    v6 = *(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 16);
    v21 = *(_DWORD *)(a2 + 40);
    v22 = *(_DWORD *)(a2 + 44);
    v9 = *(_DWORD *)(a2 + 48);
    v7 = *(_DWORD *)(a2 + 52);
    v16 = v6 / 0xA;
    v20 = 1;
    v10 = v7;
  }
  v18[23] = 4LL;
  v18[22] = &v21;
  v18[25] = 4LL;
  v18[24] = &v22;
  v18[27] = 4LL;
  v18[26] = &v9;
  v18[28] = &v10;
  v18[30] = &v16;
  v18[32] = (char *)a3 + 57;
  v12 = *((unsigned __int8 *)a3 + 63);
  v18[34] = &v12;
  v13 = *((unsigned __int8 *)a3 + 64);
  v18[36] = &v13;
  v14 = *((unsigned __int8 *)a3 + 65);
  v18[38] = &v14;
  v15 = *((unsigned __int8 *)a3 + 66);
  v18[40] = &v15;
  v18[42] = (char *)a3 + 59;
  v18[44] = (char *)a3 + 61;
  v18[29] = 4LL;
  v18[31] = 8LL;
  v18[33] = 1LL;
  v18[35] = 4LL;
  v18[37] = 4LL;
  v18[39] = 4LL;
  v18[41] = 4LL;
  v18[43] = 1LL;
  v18[45] = 1LL;
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_CS_EXIT_REASON_CONTROL_EVENT, 23LL, v18);
}
