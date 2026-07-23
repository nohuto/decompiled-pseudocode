/*
 * XREFs of RtlWaitForWnfMetaNotification @ 0x180090610
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18008E48C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18008ED60 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     NtWaitForSingleObject @ 0x18015EEC0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwCreateEvent @ 0x18015F740 (ZwCreateEvent.c)
 *     NtQueryWnfStateNameInformation @ 0x180161C70 (NtQueryWnfStateNameInformation.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlWaitForWnfMetaNotification(WNF_STATE_NAME a1, int a2, unsigned int a3, __int64 a4, int *a5)
{
  __int64 v5; // rsi
  __int64 v6; // r13
  int v8; // r12d
  int v9; // edi
  NTSTATUS Event; // ebx
  int v12; // eax
  int v13; // ecx
  int InfoBuffer; // [rsp+50h] [rbp-21h] BYREF
  __int64 v15; // [rsp+58h] [rbp-19h] BYREF
  LARGE_INTEGER Timeout; // [rsp+60h] [rbp-11h] BYREF
  HANDLE EventHandle[2]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v18; // [rsp+78h] [rbp+7h]
  WNF_STATE_NAME StateName; // [rsp+80h] [rbp+Fh] BYREF

  v5 = 0LL;
  v6 = a3;
  StateName = a1;
  v18 = 0LL;
  *a5 = 0;
  Timeout.QuadPart = 0LL;
  InfoBuffer = 0;
  *(_OWORD *)EventHandle = 0LL;
  if ( (a2 & 0xFFFFFFF1) != 0 )
  {
    Event = -1073741811;
  }
  else
  {
    v8 = a2 & 8;
    while ( 1 )
    {
      v9 = 0;
      if ( v8 )
      {
        Event = NtQueryWnfStateNameInformation(&StateName, WnfInfoIsQuiescent, 0LL, &InfoBuffer, 4u);
        if ( Event < 0 )
          goto LABEL_10;
        if ( InfoBuffer )
          v9 = 8;
      }
      if ( (a2 & 6) != 0 )
      {
        Event = NtQueryWnfStateNameInformation(&StateName, WnfInfoSubscribersPresent, 0LL, &InfoBuffer, 4u);
        if ( Event < 0 )
          goto LABEL_10;
        if ( InfoBuffer )
        {
          v13 = v9 | 2;
          if ( (a2 & 2) == 0 )
            v13 = v9;
          v9 = v13;
        }
        else if ( (a2 & 4) != 0 )
        {
          v9 |= 4u;
        }
      }
      if ( v9 )
      {
        *a5 = v9;
        Event = 0;
        goto LABEL_10;
      }
      if ( v5 )
        break;
      Event = ZwCreateEvent(&EventHandle[1], 0x1F0003u, 0LL, NotificationEvent, 0);
      if ( Event < 0 )
        goto LABEL_12;
      v15 = 0LL;
      if ( !a2 || (a2 & 0x11) != 0 )
      {
        Event = -1073741811;
        goto LABEL_10;
      }
      v12 = RtlpSubscribeWnfStateChangeNotificationInternal(
              &v15,
              *(_QWORD *)&StateName,
              -1,
              (int)RtlpWnfMetaCallbackProc,
              (__int64)EventHandle,
              0LL,
              0,
              1,
              a2);
      v5 = v15;
      Event = v12;
      if ( v12 < 0 )
        goto LABEL_10;
    }
    Timeout.QuadPart = -10000 * v6;
    Event = NtWaitForSingleObject(EventHandle[1], 0, &Timeout);
    if ( !Event )
      *a5 = (int)EventHandle[0];
LABEL_10:
    if ( v5 )
      RtlUnsubscribeWnfNotificationWaitForCompletion(v5);
  }
LABEL_12:
  if ( EventHandle[1] )
    NtClose(EventHandle[1]);
  return (unsigned int)Event;
}
