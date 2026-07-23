/*
 * XREFs of SshSessionManagerTracePostSleepNotification @ 0x140B31BE8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     SshpSessionManagerInterruptTimeToSystemTime @ 0x1407E9550 (SshpSessionManagerInterruptTimeToSystemTime.c)
 *     SshpSessionManagerSendControlEvent @ 0x140B31D28 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshSessionManagerTracePostSleepNotification(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  __int64 v9; // r11
  __int64 v10; // rbx
  __int64 v11; // r10
  _QWORD v13[15]; // [rsp+20h] [rbp-91h] BYREF
  int v14; // [rsp+98h] [rbp-19h]
  int v15; // [rsp+9Ch] [rbp-15h]
  __int64 *v16; // [rsp+A0h] [rbp-11h]
  __int64 v17; // [rsp+A8h] [rbp-9h]
  __int64 v18; // [rsp+B0h] [rbp-1h]
  int v19; // [rsp+B8h] [rbp+7h]
  int v20; // [rsp+BCh] [rbp+Bh]
  char *v21; // [rsp+C0h] [rbp+Fh]
  __int64 v22; // [rsp+C8h] [rbp+17h]
  __int64 v23; // [rsp+F0h] [rbp+3Fh] BYREF
  __int64 v24; // [rsp+F8h] [rbp+47h] BYREF
  int v25; // [rsp+100h] [rbp+4Fh] BYREF
  int v26; // [rsp+108h] [rbp+57h] BYREF

  v26 = a4;
  v25 = a3;
  v9 = a8;
  v10 = a7;
  v11 = a2;
  v23 = 0LL;
  v24 = 0LL;
  LODWORD(a8) = *(unsigned __int16 *)a8 >> 1;
  LODWORD(a7) = *(unsigned __int16 *)a7 >> 1;
  if ( a1 )
    SshpSessionManagerInterruptTimeToSystemTime();
  if ( v11 )
    SshpSessionManagerInterruptTimeToSystemTime();
  v13[1] = 8LL;
  v13[0] = &v23;
  v13[3] = 8LL;
  v13[2] = &v24;
  v13[5] = 4LL;
  v13[4] = &v25;
  v13[7] = 4LL;
  v13[6] = &v26;
  v13[8] = &a5;
  v13[10] = &a6;
  v13[12] = &a8;
  v13[14] = *(_QWORD *)(v9 + 8);
  v13[9] = 4LL;
  v14 = 2 * a8;
  v16 = &a7;
  v18 = *(_QWORD *)(v10 + 8);
  v13[11] = 4LL;
  v19 = 2 * a7;
  v21 = &a9;
  v13[13] = 4LL;
  v15 = 0;
  v17 = 4LL;
  v20 = 0;
  v22 = 4LL;
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_POST_SLEEP_NOTIFICATION_CONTROL_EVENT, 11LL, v13);
}
