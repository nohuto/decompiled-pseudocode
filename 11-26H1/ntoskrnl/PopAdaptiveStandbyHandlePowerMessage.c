/*
 * XREFs of PopAdaptiveStandbyHandlePowerMessage @ 0x1407E4270
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1407DF428 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     EtwActivityIdControl @ 0x140460340 (EtwActivityIdControl.c)
 *     IoGetActivityIdThread @ 0x140468BC0 (IoGetActivityIdThread.c)
 *     IoSetActivityIdThread @ 0x14048B360 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140493970 (IoClearActivityIdThread.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopAdaptiveStandbyQueryReserveConfiguration @ 0x1407E4E04 (PopAdaptiveStandbyQueryReserveConfiguration.c)
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
  if ( (unsigned int)dword_140E08138 > 5 )
  {
    v14 = *(_DWORD *)a1;
    v20 = 4LL;
    v19 = (__int64 *)&v14;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08138,
      (unsigned __int8 *)byte_1400506A5,
      &ActivityId,
      (const GUID *)v2,
      3u,
      v18);
  }
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopAdaptiveStandbyLock, v3, v4, v5);
  if ( *(_DWORD *)a1 == 19 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    qword_140F0BB3C = v11;
    if ( (unsigned int)dword_140E08138 <= 5 )
      goto LABEL_16;
    v13 = v11;
    v19 = (__int64 *)&v13;
    v21 = (__int64 *)&v14;
    v20 = 1LL;
    v14 = HIDWORD(v11);
    v22 = 4LL;
    ActivityIdThread = IoGetActivityIdThread();
    v10 = byte_14005051B;
  }
  else
  {
    if ( *(_DWORD *)a1 != 20 )
      goto LABEL_16;
    byte_140F0BB58 = 0;
    if ( qword_140F0BB60 )
    {
      v6 = Pdcv2ActivationClientDeactivate();
      if ( (unsigned int)dword_140E08138 > 5 )
      {
        v14 = v6;
        v19 = (__int64 *)&v14;
        v15 = qword_140F0BB60;
        v21 = &v15;
        v20 = 4LL;
        v22 = 8LL;
        v7 = IoGetActivityIdThread();
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E08138,
          (unsigned __int8 *)&word_140050566,
          (const GUID *)v7,
          0LL,
          4u,
          v18);
      }
      qword_140F0BB60 = 0LL;
    }
    if ( qword_140F0BB48 != *(_QWORD *)(a1 + 8) )
    {
      PopAdaptiveStandbyQueryReserveConfiguration(&PopAdaptiveStandbyContext);
      goto LABEL_16;
    }
    v8 = *(_DWORD *)(a1 + 16);
    dword_140F0BB50 = v8;
    if ( (unsigned int)dword_140E08138 <= 5 )
      goto LABEL_16;
    v15 = qword_140F0BB48;
    v14 = v8;
    v19 = &v15;
    v21 = (__int64 *)&v14;
    v20 = 8LL;
    v22 = 4LL;
    ActivityIdThread = IoGetActivityIdThread();
    v10 = byte_1400505C5;
  }
  tlgWriteTransfer_EtwWriteTransfer(
    (__int64)&dword_140E08138,
    (unsigned __int8 *)v10,
    (const GUID *)ActivityIdThread,
    0LL,
    4u,
    v18);
LABEL_16:
  PopReleaseRwLock((struct _KTHREAD *)&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08138 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08138,
      (unsigned __int8 *)&byte_14005061F,
      &ActivityId,
      v17,
      2u,
      v18);
  return IoClearActivityIdThread((struct _LIST_ENTRY *)v17);
}
