/*
 * XREFs of SshSessionManagerTracePreSleepNotification @ 0x140B729AC
 * Callers:
 *     PopDiagTracePreSleepNotification @ 0x1407D4844 (PopDiagTracePreSleepNotification.c)
 * Callees:
 *     SshpSessionManagerSendControlEvent @ 0x140B2FF48 (SshpSessionManagerSendControlEvent.c)
 */

void __fastcall SshSessionManagerTracePreSleepNotification(
        int a1,
        int a2,
        int a3,
        int a4,
        char a5,
        char a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // r8d
  struct _KLOCK_ENTRIES *v11; // r9
  __int64 v12; // rax
  int v13; // [rsp+28h] [rbp-99h] BYREF
  int v14; // [rsp+2Ch] [rbp-95h] BYREF
  __int64 v15; // [rsp+30h] [rbp-91h] BYREF
  _QWORD v16[21]; // [rsp+38h] [rbp-89h] BYREF
  int v17; // [rsp+E0h] [rbp+1Fh]
  int v18; // [rsp+E4h] [rbp+23h]
  char *v19; // [rsp+E8h] [rbp+27h]
  __int64 v20; // [rsp+F0h] [rbp+2Fh]
  int v21; // [rsp+108h] [rbp+47h] BYREF
  int v22; // [rsp+110h] [rbp+4Fh] BYREF
  int v23; // [rsp+118h] [rbp+57h] BYREF
  int v24; // [rsp+120h] [rbp+5Fh] BYREF

  v24 = a4;
  v23 = a3;
  v22 = a2;
  v21 = a1;
  v8 = a7;
  v16[0] = &v21;
  v16[1] = 4LL;
  v16[2] = &v22;
  v16[4] = &v23;
  v16[6] = &v24;
  v16[8] = &a5;
  v16[10] = &a6;
  v16[3] = 4LL;
  v16[5] = 4LL;
  v16[7] = 4LL;
  v16[9] = 4LL;
  v16[11] = 1LL;
  if ( a7 )
  {
    LODWORD(a7) = *(_DWORD *)(a7 + 8);
    if ( (_DWORD)a7 )
    {
      v9 = *(_DWORD *)(v8 + 28);
      v10 = *(_DWORD *)(v8 + 24);
    }
    else
    {
      v9 = -1;
      v10 = -1;
    }
    v11 = (struct _KLOCK_ENTRIES *)(v8 + *(_QWORD *)(v8 + 16));
  }
  else
  {
    v9 = -1;
    v11 = (struct _KLOCK_ENTRIES *)&cchOriginalDestLength;
    LODWORD(a7) = -1;
    v10 = -1;
  }
  v13 = v10;
  v16[12] = &a7;
  v16[14] = &v13;
  v16[16] = &v14;
  v12 = -1LL;
  v14 = v9;
  v16[13] = 4LL;
  v16[15] = 4LL;
  v16[17] = 4LL;
  do
    ++v12;
  while ( *((_WORD *)&v11->Thread + v12) );
  LODWORD(v15) = v12;
  v16[18] = &v15;
  v17 = 2 * v12;
  v16[19] = 4LL;
  v19 = &a8;
  v16[20] = v11;
  v18 = 0;
  v20 = 1LL;
  SshpSessionManagerSendControlEvent(
    (__int64)SLEEPSTUDY_EVT_PRE_SLEEP_NOTIFICATION_CONTROL_EVENT,
    0xCu,
    (__int64)v16,
    v11);
}
