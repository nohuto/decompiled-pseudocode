/*
 * XREFs of PopAdaptiveStandbyInitializeActivator @ 0x1407DFE6C
 * Callers:
 *     PopDelayedPdcRegistrationWorker @ 0x1407DB910 (PopDelayedPdcRegistrationWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     EtwActivityIdControl @ 0x140466BF0 (EtwActivityIdControl.c)
 *     IoSetActivityIdThread @ 0x140491810 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140499E20 (IoClearActivityIdThread.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

struct _KTHREAD *PopAdaptiveStandbyInitializeActivator()
{
  struct _LIST_ENTRY *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  struct _KLOCK_ENTRIES *v3; // r9
  int v4; // ebx
  int v6; // [rsp+30h] [rbp-19h] BYREF
  __int128 v7; // [rsp+38h] [rbp-11h] BYREF
  __int64 v8; // [rsp+48h] [rbp-1h]
  GUID ActivityId; // [rsp+50h] [rbp+7h] BYREF
  GUID *v10; // [rsp+60h] [rbp+17h]
  struct _EVENT_DATA_DESCRIPTOR v11[2]; // [rsp+68h] [rbp+1Fh] BYREF
  int *v12; // [rsp+88h] [rbp+3Fh]
  __int64 v13; // [rsp+90h] [rbp+47h]

  v10 = 0LL;
  ActivityId = 0LL;
  LODWORD(v8) = 0;
  v7 = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v0 = IoSetActivityIdThread((struct _LIST_ENTRY *)&ActivityId);
  v10 = (GUID *)v0;
  if ( (unsigned int)dword_140E08090 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08090,
      (unsigned __int8 *)&word_14004F0FE,
      &ActivityId,
      (const GUID *)v0,
      2u,
      v11);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopAdaptiveStandbyLock, v1, v2, v3);
  if ( PopAdaptiveStandbyContext )
  {
    v8 = 0LL;
    *((_QWORD *)&v7 + 1) = PopAdaptiveStandbyActivatorCallback;
    LODWORD(v7) = 1;
    v4 = Pdcv2ActivationClientRegister(124LL, &v7, &unk_140F0B978);
    if ( v4 >= 0 )
      v4 = 0;
  }
  else
  {
    v4 = -1073741637;
  }
  PopReleaseRwLock(&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08090 > 5 )
  {
    v12 = &v6;
    v6 = v4;
    v13 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08090,
      (unsigned __int8 *)byte_14004F131,
      &ActivityId,
      v10,
      3u,
      v11);
  }
  return IoClearActivityIdThread((struct _LIST_ENTRY *)v10);
}
