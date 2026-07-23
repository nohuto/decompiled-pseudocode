/*
 * XREFs of PopAdaptiveStandbyNotifyShellPhaseState @ 0x1407E4A18
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1406105F0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     EtwActivityIdControl @ 0x140460340 (EtwActivityIdControl.c)
 *     IoSetActivityIdThread @ 0x14048B360 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140493970 (IoClearActivityIdThread.c)
 *     SSHSupportIsPlatformAoAc @ 0x1404C3180 (SSHSupportIsPlatformAoAc.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopAdaptiveStandbySessionStart @ 0x1407E4FE4 (PopAdaptiveStandbySessionStart.c)
 *     PopAdaptiveStandbySessionStop @ 0x1407E5384 (PopAdaptiveStandbySessionStop.c)
 */

unsigned __int8 __fastcall PopAdaptiveStandbyNotifyShellPhaseState(char a1)
{
  unsigned __int8 result; // al
  struct _LIST_ENTRY *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  char v7; // [rsp+30h] [rbp-9h] BYREF
  GUID ActivityId; // [rsp+38h] [rbp-1h] BYREF
  GUID *v9; // [rsp+48h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR v10[2]; // [rsp+50h] [rbp+17h] BYREF
  char *v11; // [rsp+70h] [rbp+37h]
  __int64 v12; // [rsp+78h] [rbp+3Fh]

  ActivityId = 0LL;
  v9 = 0LL;
  result = SSHSupportIsPlatformAoAc();
  if ( result )
  {
    EtwActivityIdControl(3u, &ActivityId);
    v3 = IoSetActivityIdThread((struct _LIST_ENTRY *)&ActivityId);
    v9 = (GUID *)v3;
    if ( (unsigned int)dword_140E08138 > 5 )
    {
      v7 = a1;
      v11 = &v7;
      v12 = 1LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E08138,
        (unsigned __int8 *)byte_14004FBB9,
        &ActivityId,
        (const GUID *)v3,
        3u,
        v10);
    }
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopAdaptiveStandbyLock, v4, v5, v6);
    if ( a1 )
      PopAdaptiveStandbySessionStart(&PopAdaptiveStandbyContext, 0LL);
    else
      PopAdaptiveStandbySessionStop(&PopAdaptiveStandbyContext, 1LL);
    PopReleaseRwLock((struct _KTHREAD *)&PopAdaptiveStandbyLock);
    if ( (unsigned int)dword_140E08138 > 5 )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E08138,
        (unsigned __int8 *)&qword_14004FBF0,
        &ActivityId,
        v9,
        2u,
        v10);
    return (unsigned __int8)IoClearActivityIdThread((struct _LIST_ENTRY *)v9);
  }
  return result;
}
