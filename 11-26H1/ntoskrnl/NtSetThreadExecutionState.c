/*
 * XREFs of NtSetThreadExecutionState @ 0x1407D2150
 * Callers:
 *     DifNtSetThreadExecutionStateWrapper @ 0x14068DF10 (DifNtSetThreadExecutionStateWrapper.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x14030B820 (PsGetSessionIdEx.c)
 *     PopGetLegacyPowerRequestFlags @ 0x140434DB8 (PopGetLegacyPowerRequestFlags.c)
 *     PoCaptureReasonContext @ 0x140436EC8 (PoCaptureReasonContext.c)
 *     PopPowerRequestCreateCommon @ 0x140436FDC (PopPowerRequestCreateCommon.c)
 *     SessionIsInteractive @ 0x1404378AC (SessionIsInteractive.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x1404A61E0 (PopApplyLegacyPowerRequestFlags.c)
 *     SSHSupportIsPlatformAoAc @ 0x1404C9760 (SSHSupportIsPlatformAoAc.c)
 *     _tlgDefineProvider_annotation__TlgMiTraceHandleProv @ 0x1404F8580 (_tlgDefineProvider_annotation__TlgMiTraceHandleProv.c)
 *     PoDestroyReasonContext @ 0x14050A3C0 (PoDestroyReasonContext.c)
 *     PopGetCurrentPdcPhase @ 0x14060D670 (PopGetCurrentPdcPhase.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     PopDiagTraceSetThreadExecutionState @ 0x1407D4AB4 (PopDiagTraceSetThreadExecutionState.c)
 *     PoEnergyContextUpdateComponentPower @ 0x1409505D0 (PoEnergyContextUpdateComponentPower.c)
 *     PopAcquireAdaptiveLock @ 0x140A3AFDC (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x140A3D6E4 (PopReleaseAdaptiveLock.c)
 *     PopNotifyConsoleUserPresent @ 0x140A3DB40 (PopNotifyConsoleUserPresent.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall NtSetThreadExecutionState(int a1, unsigned int *a2)
{
  char PreviousMode; // di
  int v5; // ebx
  struct _KTHREAD *CurrentThread; // r13
  int ULongFromUser; // eax
  __int64 v8; // rdx
  unsigned int *Blink; // rbx
  _QWORD *v10; // rdi
  char LegacyPowerRequestFlags; // di
  unsigned int v12; // r14d
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  bool v20; // bl
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int SessionId; // eax
  __int64 v28; // rcx
  __int64 v30; // [rsp+20h] [rbp-48h]
  __int64 v31; // [rsp+28h] [rbp-40h]
  unsigned int *v32; // [rsp+30h] [rbp-38h] BYREF
  __int64 v33; // [rsp+38h] [rbp-30h]
  __int64 v34; // [rsp+40h] [rbp-28h]
  __int64 v35; // [rsp+48h] [rbp-20h]
  int v36; // [rsp+80h] [rbp+18h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  v36 = 0;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
    return (unsigned int)-1073741637;
  CurrentThread = KeGetCurrentThread();
  if ( (a1 & 0x7FFFFFBC) != 0 || (a1 & 0x40) != 0 && a1 >= 0 )
    return (unsigned int)-1073741811;
  ULongFromUser = RtlReadULongFromUser(a2);
  RtlWriteULongToUser(a2, ULongFromUser);
  Blink = (unsigned int *)CurrentThread[1].ApcState.ApcListHead[1].Blink;
  v32 = Blink;
  if ( Blink || a1 >= 0 )
  {
LABEL_14:
    LegacyPowerRequestFlags = PopGetLegacyPowerRequestFlags(Blink, a1, &v36);
    RtlWriteULongToUser(a2, v36);
    if ( a1 < 0 )
    {
      PopApplyLegacyPowerRequestFlags(Blink, a1, LegacyPowerRequestFlags);
      return 0;
    }
    v12 = 0;
    v13 = a1;
    if ( (int)PopGetCurrentPdcPhase() >= 2 )
    {
      v12 = 1;
      v13 = a1 & 0xFFFFFFFC;
LABEL_27:
      PopDiagTraceSetThreadExecutionState(CurrentThread, (unsigned int)a1, v13, v12);
      if ( (v13 & 1) != 0 )
      {
        PopAcquirePolicyLock(v22, v21);
        tlgDefineProvider_annotation__TlgMiTraceHandleProv();
        PopReleasePolicyLock(v24, v23, v25, v26, v30, v31, v32, v33, v34, v35);
      }
      if ( (v13 & 2) != 0 )
      {
        PoEnergyContextUpdateComponentPower(KeGetCurrentThread()->ApcState.Process, 12LL, 3LL);
        SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( SessionIsInteractive(SessionId) )
        {
          LOBYTE(v28) = 1;
          PopNotifyConsoleUserPresent(v28, 8LL);
        }
      }
      return 0;
    }
    if ( (a1 & 2) == 0 )
      goto LABEL_27;
    PopAcquirePolicyLock(v15, v14);
    if ( !SSHSupportIsPlatformAoAc() || PopLidOpened || PopConsoleExternalDisplayConnected )
    {
      LOBYTE(v17) = 1;
      PopAcquireAdaptiveLock(v17);
      v20 = LOBYTE(ExpPlatformBinaryLock.Timer.Dpc) != 0;
      PopReleaseAdaptiveLock();
      if ( !v20 )
      {
LABEL_26:
        PopReleasePolicyLock(v17, v16, v18, v19, v30, v31, v32, v33, v34, v35);
        goto LABEL_27;
      }
      v12 = 3;
    }
    else
    {
      v12 = 2;
    }
    v13 = a1 & 0xFFFFFFFD;
    goto LABEL_26;
  }
  LOBYTE(v8) = PreviousMode;
  v5 = PoCaptureReasonContext(0LL, v8, 0LL, 1, 0LL, &P);
  if ( v5 < 0 )
    return (unsigned int)v5;
  v10 = P;
  v5 = PopPowerRequestCreateCommon(P, 0, &v32);
  if ( v5 >= 0 )
  {
    Blink = v32;
    CurrentThread[1].ApcState.ApcListHead[1].Blink = (struct _LIST_ENTRY *)v32;
    goto LABEL_14;
  }
  if ( v10 )
    PoDestroyReasonContext(v10);
  return (unsigned int)v5;
}
