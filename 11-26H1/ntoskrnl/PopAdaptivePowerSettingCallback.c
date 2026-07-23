/*
 * XREFs of PopAdaptivePowerSettingCallback @ 0x140ABE290
 * Callers:
 *     PopVideoPowerSettingCallback @ 0x1404F8B70 (PopVideoPowerSettingCallback.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     PopDiagTracePolicyChange @ 0x14077F090 (PopDiagTracePolicyChange.c)
 *     PopReleaseAdaptiveLock @ 0x1409F9104 (PopReleaseAdaptiveLock.c)
 *     PopInvokeWin32Callout @ 0x140ABE89C (PopInvokeWin32Callout.c)
 *     PopSendSessionInfo @ 0x140B48360 (PopSendSessionInfo.c)
 */

__int64 __fastcall PopAdaptivePowerSettingCallback(void *Buf2, int *a2, int a3)
{
  char v5; // r15
  struct _KTHREAD *CurrentThread; // rax
  char v7; // r14
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int128 v12; // [rsp+38h] [rbp-19h] BYREF
  __int128 v13; // [rsp+48h] [rbp-9h]
  __int128 v14; // [rsp+58h] [rbp+7h]
  __int64 v15; // [rsp+68h] [rbp+17h]
  GUID v16; // [rsp+70h] [rbp+1Fh] BYREF
  int v17; // [rsp+80h] [rbp+2Fh]

  if ( a3 != 4 || !a2 )
    return (unsigned int)-1073741811;
  v12 = 0LL;
  v13 = 0LL;
  *(_QWORD *)&v14 = 0LL;
  v5 = 0;
  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  v8 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  ExpPlatformBinaryLock.WaitBlock[3].WaitListEntry.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  PopAdaptiveContext = 0;
  if ( !memcmp(&GUID_NON_ADAPTIVE_INPUT_TIMEOUT, Buf2, 0x10uLL) )
  {
    if ( *a2 != PopInputTimeout )
    {
      PopInputTimeout = *a2;
LABEL_24:
      v5 = 1;
      goto LABEL_25;
    }
    goto LABEL_25;
  }
  if ( !memcmp(&GUID_VIDEO_POWERDOWN_TIMEOUT, Buf2, 0x10uLL) )
  {
    if ( *a2 == PopDisplayTimeout )
      goto LABEL_25;
    PopDisplayTimeout = *a2;
LABEL_9:
    v7 = 1;
    goto LABEL_25;
  }
  if ( !memcmp(&GUID_VIDEO_CONSOLE_LOCK_TIMEOUT, Buf2, 0x10uLL) )
  {
    if ( *a2 == PopAdaptiveLockConsoleTimeout )
      goto LABEL_25;
    PopAdaptiveLockConsoleTimeout = *a2;
    goto LABEL_9;
  }
  if ( !memcmp(&GUID_HUPR_ADAPTIVE_AWAY_DISPLAY_TIMEOUT, Buf2, 0x10uLL) )
  {
    PopAdaptiveSensorAwayDisplayTimeout = *a2;
    goto LABEL_25;
  }
  if ( !memcmp(&GUID_HUPR_ADAPTIVE_AWAY_DIM_TIMEOUT, Buf2, 0x10uLL) )
  {
    PopAdaptiveSensorAwayDimTimeout = *a2;
    goto LABEL_25;
  }
  if ( !memcmp(&GUID_HUPR_ADAPTIVE_INATTENTIVE_DISPLAY_TIMEOUT, Buf2, 0x10uLL) )
  {
    PopAdaptiveSensorInattentiveDisplayTimeout = *a2;
    goto LABEL_25;
  }
  if ( !memcmp(&GUID_HUPR_ADAPTIVE_INATTENTIVE_DIM_TIMEOUT, Buf2, 0x10uLL) )
  {
    PopAdaptiveSensorInattentiveDimTimeout = *a2;
    goto LABEL_25;
  }
  if ( !memcmp(&GUID_VIDEO_DIM_TIMEOUT, Buf2, 0x10uLL) )
  {
    if ( *a2 != PopAdaptiveDimTimeout )
    {
      PopAdaptiveDimTimeout = *a2;
      goto LABEL_24;
    }
LABEL_25:
    PopDiagTracePolicyChange();
    goto LABEL_27;
  }
  v8 = -1073741811;
LABEL_27:
  PopReleaseAdaptiveLock();
  v17 = 0;
  v16 = GUID_ADAPTIVE_SESSION_STATE_CHANGED;
  if ( v5 )
  {
    v12 = 0LL;
    LODWORD(v15) = 0;
    v13 = 0LL;
    v14 = 0LL;
    if ( BYTE1(PsAltSystemCallRegistrationLock.Timer.DueTime.LowPart) )
    {
      DWORD2(v13) = 20;
      DWORD2(v14) = 0;
      *(_QWORD *)&v14 = &v16;
      v15 = 0LL;
      PopInvokeWin32Callout(5LL, &v12, 2LL);
    }
  }
  else if ( v7 && PopConsoleSession )
  {
    PopSendSessionInfo((unsigned int)dword_140F0C078, v9, v10, &v16);
  }
  return v8;
}
