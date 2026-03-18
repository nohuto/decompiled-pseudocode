/*
 * XREFs of PopAdaptiveStandbyHandlePowerMessage @ 0x1407DF87C
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x14077595C (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     EtwActivityIdControl @ 0x140466BF0 (EtwActivityIdControl.c)
 *     IoGetActivityIdThread @ 0x14046F440 (IoGetActivityIdThread.c)
 *     IoSetActivityIdThread @ 0x140491810 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140499E20 (IoClearActivityIdThread.c)
 *     PopAdaptiveStandbyQueryReserveConfiguration @ 0x140610F34 (PopAdaptiveStandbyQueryReserveConfiguration.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

struct _KTHREAD *__fastcall PopAdaptiveStandbyHandlePowerMessage(__int64 a1)
{
  struct _LIST_ENTRY *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  int v6; // eax
  struct _LIST_ENTRY *v7; // rax
  int v8; // eax
  struct _LIST_ENTRY *ActivityIdThread; // rax
  char *v10; // rdx
  __int64 v11; // rcx
  char v13; // [rsp+38h] [rbp-29h] BYREF
  int v14; // [rsp+3Ch] [rbp-25h] BYREF
  __int64 v15; // [rsp+40h] [rbp-21h] BYREF
  GUID ActivityId; // [rsp+48h] [rbp-19h] BYREF
  GUID *v17; // [rsp+58h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v18[2]; // [rsp+68h] [rbp+7h] BYREF
  __int64 *v19; // [rsp+88h] [rbp+27h]
  __int64 v20; // [rsp+90h] [rbp+2Fh]
  __int64 *v21; // [rsp+98h] [rbp+37h]
  __int64 v22; // [rsp+A0h] [rbp+3Fh]

  v17 = 0LL;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v2 = IoSetActivityIdThread((struct _LIST_ENTRY *)&ActivityId);
  v17 = (GUID *)v2;
  if ( (unsigned int)dword_140E08090 > 5 )
  {
    v14 = *(_DWORD *)a1;
    v20 = 4LL;
    v19 = (__int64 *)&v14;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08090,
      (unsigned __int8 *)&word_14004F70E,
      &ActivityId,
      (const GUID *)v2,
      3u,
      v18);
  }
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopAdaptiveStandbyLock, v3, v4, v5);
  if ( *(_DWORD *)a1 == 19 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    qword_140F0B7BC = v11;
    if ( (unsigned int)dword_140E08090 <= 5 )
      goto LABEL_16;
    v13 = v11;
    v19 = (__int64 *)&v13;
    v21 = (__int64 *)&v14;
    v20 = 1LL;
    v14 = HIDWORD(v11);
    v22 = 4LL;
    ActivityIdThread = IoGetActivityIdThread();
    v10 = &byte_14004F737;
  }
  else
  {
    if ( *(_DWORD *)a1 != 20 )
      goto LABEL_16;
    byte_140F0B7D8 = 0;
    if ( qword_140F0B7E0 )
    {
      v6 = Pdcv2ActivationClientDeactivate();
      if ( (unsigned int)dword_140E08090 > 5 )
      {
        v14 = v6;
        v19 = (__int64 *)&v14;
        v15 = qword_140F0B7E0;
        v21 = &v15;
        v20 = 4LL;
        v22 = 8LL;
        v7 = IoGetActivityIdThread();
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E08090,
          (unsigned __int8 *)word_14004F782,
          (const GUID *)v7,
          0LL,
          4u,
          v18);
      }
      qword_140F0B7E0 = 0LL;
    }
    if ( qword_140F0B7C8 != *(_QWORD *)(a1 + 8) )
    {
      PopAdaptiveStandbyQueryReserveConfiguration((__int64)&PopAdaptiveStandbyContext);
      goto LABEL_16;
    }
    v8 = *(_DWORD *)(a1 + 16);
    dword_140F0B7D0 = v8;
    if ( (unsigned int)dword_140E08090 <= 5 )
      goto LABEL_16;
    v15 = qword_140F0B7C8;
    v14 = v8;
    v19 = &v15;
    v21 = (__int64 *)&v14;
    v20 = 8LL;
    v22 = 4LL;
    ActivityIdThread = IoGetActivityIdThread();
    v10 = byte_14004F7E1;
  }
  tlgWriteTransfer_EtwWriteTransfer(
    (__int64)&dword_140E08090,
    (unsigned __int8 *)v10,
    (const GUID *)ActivityIdThread,
    0LL,
    4u,
    v18);
LABEL_16:
  PopReleaseRwLock(&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08090 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08090,
      (unsigned __int8 *)byte_14004F83B,
      &ActivityId,
      v17,
      2u,
      v18);
  return IoClearActivityIdThread((struct _LIST_ENTRY *)v17);
}
