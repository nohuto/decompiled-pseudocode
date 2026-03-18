/*
 * XREFs of PopAdaptiveStandbyNotifyShellPhaseState @ 0x1407DFFD0
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x14060D4E0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     EtwActivityIdControl @ 0x140466BF0 (EtwActivityIdControl.c)
 *     IoSetActivityIdThread @ 0x140491810 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140499E20 (IoClearActivityIdThread.c)
 *     SSHSupportIsPlatformAoAc @ 0x1404C9760 (SSHSupportIsPlatformAoAc.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopAdaptiveStandbySessionStart @ 0x1407E03B4 (PopAdaptiveStandbySessionStart.c)
 *     PopAdaptiveStandbySessionStop @ 0x1407E05F8 (PopAdaptiveStandbySessionStop.c)
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
    if ( (unsigned int)dword_140E08090 > 5 )
    {
      v7 = a1;
      v11 = &v7;
      v12 = 1LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E08090,
        (unsigned __int8 *)&word_14004F85E,
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
    PopReleaseRwLock(&PopAdaptiveStandbyLock);
    if ( (unsigned int)dword_140E08090 > 5 )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E08090,
        (unsigned __int8 *)byte_14004F895,
        &ActivityId,
        v9,
        2u,
        v10);
    return (unsigned __int8)IoClearActivityIdThread((struct _LIST_ENTRY *)v9);
  }
  return result;
}
