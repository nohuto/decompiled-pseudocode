/*
 * XREFs of SshpSessionManagerTracePreSleepNotificationV1 @ 0x1407E9CD0
 * Callers:
 *     SshSessionManagerTracePreSleepNotification @ 0x140B77BD0 (SshSessionManagerTracePreSleepNotification.c)
 * Callees:
 *     SshpSessionManagerSendControlEvent @ 0x140B31D28 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshpSessionManagerTracePreSleepNotificationV1(
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
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // r8d
  const wchar_t *v12; // r9
  __int64 v13; // rax
  int v15; // [rsp+28h] [rbp-B1h] BYREF
  int v16; // [rsp+2Ch] [rbp-ADh] BYREF
  __int64 v17; // [rsp+30h] [rbp-A9h] BYREF
  _QWORD v18[21]; // [rsp+38h] [rbp-A1h] BYREF
  int v19; // [rsp+E0h] [rbp+7h]
  int v20; // [rsp+E4h] [rbp+Bh]
  char *v21; // [rsp+E8h] [rbp+Fh]
  __int64 v22; // [rsp+F0h] [rbp+17h]
  char *v23; // [rsp+F8h] [rbp+1Fh]
  __int64 v24; // [rsp+100h] [rbp+27h]
  int v25; // [rsp+118h] [rbp+3Fh] BYREF
  int v26; // [rsp+120h] [rbp+47h] BYREF
  int v27; // [rsp+128h] [rbp+4Fh] BYREF
  int v28; // [rsp+130h] [rbp+57h] BYREF

  v28 = a4;
  v27 = a3;
  v26 = a2;
  v25 = a1;
  v9 = a7;
  v18[0] = &v25;
  v18[1] = 4LL;
  v18[2] = &v26;
  v18[4] = &v27;
  v18[6] = &v28;
  v18[8] = &a5;
  v18[10] = &a6;
  v18[3] = 4LL;
  v18[5] = 4LL;
  v18[7] = 4LL;
  v18[9] = 4LL;
  v18[11] = 1LL;
  if ( a7 )
  {
    LODWORD(a7) = *(_DWORD *)(a7 + 8);
    if ( (_DWORD)a7 )
    {
      v10 = *(_DWORD *)(v9 + 28);
      v11 = *(_DWORD *)(v9 + 24);
    }
    else
    {
      v10 = -1;
      v11 = -1;
    }
    v12 = (const wchar_t *)(v9 + *(_QWORD *)(v9 + 16));
  }
  else
  {
    v10 = -1;
    v12 = &cchOriginalDestLength;
    LODWORD(a7) = -1;
    v11 = -1;
  }
  v15 = v11;
  v18[12] = &a7;
  v18[14] = &v15;
  v18[16] = &v16;
  v13 = -1LL;
  v16 = v10;
  v18[13] = 4LL;
  v18[15] = 4LL;
  v18[17] = 4LL;
  do
    ++v13;
  while ( v12[v13] );
  LODWORD(v17) = v13;
  v18[18] = &v17;
  v19 = 2 * v13;
  v18[19] = 4LL;
  v21 = &a8;
  v18[20] = v12;
  v23 = &a9;
  v20 = 0;
  v22 = 1LL;
  v24 = 1LL;
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_PRE_SLEEP_NOTIFICATION_CONTROL_EVENT, 13LL, v18);
}
