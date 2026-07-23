/*
 * XREFs of PopAdaptiveStandbyInitializeActivator @ 0x1407E48B4
 * Callers:
 *     PopDelayedPdcRegistrationWorker @ 0x1407DF920 (PopDelayedPdcRegistrationWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     EtwActivityIdControl @ 0x140460340 (EtwActivityIdControl.c)
 *     IoSetActivityIdThread @ 0x14048B360 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140493970 (IoClearActivityIdThread.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
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
  if ( (unsigned int)dword_140E08138 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08138,
      (unsigned __int8 *)byte_14004FEBD,
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
    v4 = Pdcv2ActivationClientRegister(124LL, &v7, &unk_140F0BD08);
    if ( v4 >= 0 )
      v4 = 0;
  }
  else
  {
    v4 = -1073741637;
  }
  PopReleaseRwLock((struct _KTHREAD *)&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08138 > 5 )
  {
    v12 = &v6;
    v6 = v4;
    v13 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08138,
      (unsigned __int8 *)&qword_14004FEF0,
      &ActivityId,
      v10,
      3u,
      v11);
  }
  return IoClearActivityIdThread((struct _LIST_ENTRY *)v10);
}
