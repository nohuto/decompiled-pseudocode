/*
 * XREFs of RtlWaitForWnfMetaNotification @ 0x1800701C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18006E03C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18006E910 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     NtWaitForSingleObject @ 0x18015EFC0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwCreateEvent @ 0x18015F840 (ZwCreateEvent.c)
 *     NtQueryWnfStateNameInformation @ 0x180161D70 (NtQueryWnfStateNameInformation.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlWaitForWnfMetaNotification(__int64 a1, int a2, unsigned int a3, __int64 a4, int *a5)
{
  __int64 v5; // rsi
  __int64 v6; // r13
  int v8; // r12d
  int v9; // edi
  NTSTATUS Event; // ebx
  int v12; // eax
  int v13; // ecx
  int v14; // [rsp+20h] [rbp-51h]
  int v15; // [rsp+50h] [rbp-21h] BYREF
  __int64 v16; // [rsp+58h] [rbp-19h] BYREF
  LARGE_INTEGER Timeout; // [rsp+60h] [rbp-11h] BYREF
  HANDLE Handle[2]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v19; // [rsp+78h] [rbp+7h]
  __int64 v20; // [rsp+80h] [rbp+Fh] BYREF

  v5 = 0LL;
  v6 = a3;
  v20 = a1;
  v19 = 0LL;
  *a5 = 0;
  Timeout.QuadPart = 0LL;
  v15 = 0;
  *(_OWORD *)Handle = 0LL;
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
        Event = NtQueryWnfStateNameInformation(&v20, 2LL, 0LL, &v15, 4);
        if ( Event < 0 )
          goto LABEL_10;
        if ( v15 )
          v9 = 8;
      }
      if ( (a2 & 6) != 0 )
      {
        Event = NtQueryWnfStateNameInformation(&v20, 1LL, 0LL, &v15, 4);
        if ( Event < 0 )
          goto LABEL_10;
        if ( v15 )
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
      LOBYTE(v14) = 0;
      Event = ZwCreateEvent(&Handle[1], 2031619LL, 0LL, 0LL, v14);
      if ( Event < 0 )
        goto LABEL_12;
      v16 = 0LL;
      if ( !a2 || (a2 & 0x11) != 0 )
      {
        Event = -1073741811;
        goto LABEL_10;
      }
      v12 = RtlpSubscribeWnfStateChangeNotificationInternal(
              &v16,
              v20,
              -1,
              (int)RtlpWnfMetaCallbackProc,
              (__int64)Handle,
              0LL,
              0,
              1,
              a2);
      v5 = v16;
      Event = v12;
      if ( v12 < 0 )
        goto LABEL_10;
    }
    Timeout.QuadPart = -10000 * v6;
    Event = NtWaitForSingleObject(Handle[1], 0, &Timeout);
    if ( !Event )
      *a5 = (int)Handle[0];
LABEL_10:
    if ( v5 )
      RtlUnsubscribeWnfNotificationWaitForCompletion(v5);
  }
LABEL_12:
  if ( Handle[1] )
    NtClose(Handle[1]);
  return (unsigned int)Event;
}
