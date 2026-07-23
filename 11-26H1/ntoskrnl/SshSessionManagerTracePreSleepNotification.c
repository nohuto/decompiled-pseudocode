/*
 * XREFs of SshSessionManagerTracePreSleepNotification @ 0x140B77BD0
 * Callers:
 *     PopDiagTracePreSleepNotification @ 0x1407D79C4 (PopDiagTracePreSleepNotification.c)
 * Callees:
 *     Feature_NU4MP__private_IsEnabledDeviceUsageNoInline @ 0x140602F80 (Feature_NU4MP__private_IsEnabledDeviceUsageNoInline.c)
 *     SshpSessionManagerTracePreSleepNotificationV1 @ 0x1407E9CD0 (SshpSessionManagerTracePreSleepNotificationV1.c)
 *     SshpSessionManagerSendControlEvent @ 0x140B31D28 (SshpSessionManagerSendControlEvent.c)
 */

void __fastcall SshSessionManagerTracePreSleepNotification(
        int a1,
        int a2,
        int a3,
        int a4,
        char a5,
        char a6,
        __int64 a7,
        char a8,
        char a9)
{
  int v9; // ecx
  int v10; // r8d
  struct _KLOCK_ENTRIES *v11; // r9
  __int64 v12; // rax
  int v13; // [rsp+58h] [rbp-B0h] BYREF
  int v14; // [rsp+5Ch] [rbp-ACh] BYREF
  int v15; // [rsp+60h] [rbp-A8h] BYREF
  int v16; // [rsp+64h] [rbp-A4h] BYREF
  _QWORD v17[21]; // [rsp+68h] [rbp-A0h] BYREF
  int v18; // [rsp+110h] [rbp+8h]
  int v19; // [rsp+114h] [rbp+Ch]
  char *v20; // [rsp+118h] [rbp+10h]
  __int64 v21; // [rsp+120h] [rbp+18h]
  int v22; // [rsp+138h] [rbp+30h] BYREF
  int v23; // [rsp+140h] [rbp+38h] BYREF
  int v24; // [rsp+148h] [rbp+40h] BYREF
  int v25; // [rsp+150h] [rbp+48h] BYREF

  v25 = a4;
  v24 = a3;
  v23 = a2;
  v22 = a1;
  if ( (unsigned int)Feature_NU4MP__private_IsEnabledDeviceUsageNoInline() )
  {
    SshpSessionManagerTracePreSleepNotificationV1(v22, v23, v24, v25, a5, a6, a7, a8, a9);
  }
  else
  {
    v17[0] = &v22;
    v17[2] = &v23;
    v17[4] = &v24;
    v17[6] = &v25;
    v17[8] = &a5;
    v17[10] = &a6;
    v17[1] = 4LL;
    v17[3] = 4LL;
    v17[5] = 4LL;
    v17[7] = 4LL;
    v17[9] = 4LL;
    v17[11] = 1LL;
    if ( a7 )
    {
      v13 = *(_DWORD *)(a7 + 8);
      if ( v13 )
      {
        v9 = *(_DWORD *)(a7 + 28);
        v10 = *(_DWORD *)(a7 + 24);
      }
      else
      {
        v9 = -1;
        v10 = -1;
      }
      v11 = (struct _KLOCK_ENTRIES *)(a7 + *(_QWORD *)(a7 + 16));
    }
    else
    {
      v9 = -1;
      v11 = (struct _KLOCK_ENTRIES *)&cchOriginalDestLength;
      v13 = -1;
      v10 = -1;
    }
    v14 = v10;
    v17[12] = &v13;
    v17[14] = &v14;
    v17[16] = &v15;
    v12 = -1LL;
    v15 = v9;
    v17[13] = 4LL;
    v17[15] = 4LL;
    v17[17] = 4LL;
    do
      ++v12;
    while ( *((_WORD *)&v11->Thread + v12) );
    v16 = v12;
    v17[18] = &v16;
    v18 = 2 * v12;
    v17[19] = 4LL;
    v20 = &a8;
    v17[20] = v11;
    v19 = 0;
    v21 = 1LL;
    SshpSessionManagerSendControlEvent(
      (__int64)SLEEPSTUDY_EVT_PRE_SLEEP_NOTIFICATION_CONTROL_EVENT_V4,
      0xCu,
      (__int64)v17,
      v11);
  }
}
