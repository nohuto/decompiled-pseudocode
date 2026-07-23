/*
 * XREFs of SshSessionManagerTraceCsExitReason @ 0x140B77904
 * Callers:
 *     PopSleepstudyCaptureSessionStatistics @ 0x140B69084 (PopSleepstudyCaptureSessionStatistics.c)
 * Callees:
 *     Feature_NU4MP__private_IsEnabledDeviceUsageNoInline @ 0x140602F80 (Feature_NU4MP__private_IsEnabledDeviceUsageNoInline.c)
 *     SshpSessionManagerTraceCsExitReasonV1 @ 0x1407E9A18 (SshpSessionManagerTraceCsExitReasonV1.c)
 *     SshpSessionManagerSendControlEvent @ 0x140B31D28 (SshpSessionManagerSendControlEvent.c)
 */

void __fastcall SshSessionManagerTraceCsExitReason(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KLOCK_ENTRIES *v6; // r9
  int v7; // eax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  int v10; // ecx
  int v11; // [rsp+28h] [rbp-E0h] BYREF
  int v12; // [rsp+2Ch] [rbp-DCh] BYREF
  int v13; // [rsp+30h] [rbp-D8h] BYREF
  int v14; // [rsp+34h] [rbp-D4h] BYREF
  int v15; // [rsp+38h] [rbp-D0h] BYREF
  int v16; // [rsp+3Ch] [rbp-CCh] BYREF
  int v17; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+44h] [rbp-C4h] BYREF
  int v19; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned __int64 v21; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v23[44]; // [rsp+68h] [rbp-A0h] BYREF
  int v24; // [rsp+1F0h] [rbp+E8h] BYREF

  if ( (unsigned int)Feature_NU4MP__private_IsEnabledDeviceUsageNoInline() )
  {
    SshpSessionManagerTraceCsExitReasonV1(a1, a2, (int *)a3);
  }
  else
  {
    v23[1] = 4LL;
    v23[0] = a3 + 32;
    v16 = *(unsigned __int8 *)(a1 + 56);
    v23[2] = &v16;
    v7 = *(_DWORD *)a3;
    v23[3] = 4LL;
    v24 = 0;
    if ( v7 == 1 || v7 == 3 )
      v24 = 1;
    v8 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
    v23[4] = &v24;
    v23[6] = a1 + 8;
    v23[8] = 0xFFFFF780000002C4uLL;
    v23[10] = &v11;
    v23[12] = a1 + 40;
    v23[14] = a1 + 44;
    v23[16] = a1 + 48;
    v23[18] = a1 + 52;
    v23[5] = 4LL;
    v23[7] = 8LL;
    v23[9] = 4LL;
    v23[11] = 4LL;
    v23[13] = 4LL;
    v23[15] = 4LL;
    v23[17] = 4LL;
    v23[19] = 4LL;
    v22 = v8 / 0xA;
    v23[20] = &v22;
    v23[21] = 8LL;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v21 = 0LL;
    if ( a2 )
    {
      v9 = *(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 16);
      v12 = *(_DWORD *)(a2 + 40);
      v13 = *(_DWORD *)(a2 + 44);
      v14 = *(_DWORD *)(a2 + 48);
      v10 = *(_DWORD *)(a2 + 52);
      v21 = v9 / 0xA;
      v11 = 1;
      v15 = v10;
    }
    v23[23] = 4LL;
    v23[22] = &v12;
    v23[25] = 4LL;
    v23[24] = &v13;
    v23[27] = 4LL;
    v23[26] = &v14;
    v23[29] = 4LL;
    v23[28] = &v15;
    v23[30] = &v21;
    v23[32] = a3 + 57;
    v17 = *(unsigned __int8 *)(a3 + 63);
    v23[34] = &v17;
    v18 = *(unsigned __int8 *)(a3 + 64);
    v23[36] = &v18;
    v19 = *(unsigned __int8 *)(a3 + 65);
    v23[38] = &v19;
    v20 = *(unsigned __int8 *)(a3 + 66);
    v23[40] = &v20;
    v23[42] = a3 + 59;
    v23[31] = 8LL;
    v23[33] = 1LL;
    v23[35] = 4LL;
    v23[37] = 4LL;
    v23[39] = 4LL;
    v23[41] = 4LL;
    v23[43] = 1LL;
    SshpSessionManagerSendControlEvent((__int64)SLEEPSTUDY_EVT_CS_EXIT_REASON_CONTROL_EVENT_V3, 0x16u, (__int64)v23, v6);
  }
}
