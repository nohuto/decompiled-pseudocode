/*
 * XREFs of PopPowerButtonWorkCallback @ 0x14060CD70
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 *     DbgPrintEx @ 0x140397530 (DbgPrintEx.c)
 *     KeDisableTimer2 @ 0x1403AA104 (KeDisableTimer2.c)
 *     KeInitializeIRTimer @ 0x140456C5C (KeInitializeIRTimer.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopRecordPhysicalPowerButton @ 0x1407C9068 (PopRecordPhysicalPowerButton.c)
 *     PopDiagTracePowerButtonBugcheck @ 0x1407D3B74 (PopDiagTracePowerButtonBugcheck.c)
 *     PopBsdPowerTransitionToParam1 @ 0x1407DA978 (PopBsdPowerTransitionToParam1.c)
 *     PopPublishPowerButtonState @ 0x1407DAB74 (PopPublishPowerButtonState.c)
 *     PopRecordPoBlackboxInformation @ 0x1407E39E0 (PopRecordPoBlackboxInformation.c)
 *     ExUuidCreate @ 0x140A76B60 (ExUuidCreate.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140B41E00 (DbgkWerCaptureLiveKernelDump.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140B41E80 (DbgkWerCaptureLiveKernelDump2.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x140B56830 (PopQueryPowerButtonBugcheckEnabled.c)
 */

void PopPowerButtonWorkCallback()
{
  KIRQL v0; // al
  __m128i v1; // xmm6
  unsigned int v2; // r15d
  unsigned int v3; // r14d
  __int128 v4; // xmm6
  __int64 v5; // rcx
  unsigned int v6; // ebx
  unsigned int SchedulerAssistYieldCounter; // edi
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  ULONG_PTR BugCheckParameter1; // [rsp+58h] [rbp-49h] BYREF
  __int64 v12[4]; // [rsp+60h] [rbp-41h] BYREF
  __int128 *v13; // [rsp+80h] [rbp-21h]
  _BYTE Uuid[24]; // [rsp+88h] [rbp-19h] BYREF
  __int128 v15; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v16; // [rsp+B0h] [rbp+Fh]
  __int128 v17; // [rsp+C0h] [rbp+1Fh]

  memset(v12, 0, sizeof(v12));
  v13 = 0LL;
  BugCheckParameter1 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v0 = KeAcquireSpinLockRaiseToDpc(&PopModernStandbyStateNotify.Padding[1]);
  do
  {
    v1 = (__m128i)xmmword_140F0C3B8;
    *(_OWORD *)Uuid = xmmword_140F0C3B8;
    *(_QWORD *)&Uuid[16] = qword_140F0C3C8;
    KeReleaseSpinLock(&PopModernStandbyStateNotify.Padding[1], v0);
    v2 = _mm_cvtsi128_si32(_mm_srli_si128(v1, 4));
    v3 = _mm_cvtsi128_si32(v1);
    if ( (dword_140F0C3D0 & 1) != 0 && ((v3 & 1) == 0 || v2 != dword_140F0C3D4) )
    {
      PopRecordPhysicalPowerButton(0LL);
      dword_140F0C3D0 = 0;
      LOBYTE(PopModernStandbyStateNotify.SchedulerSharedSwappablePage) = 0;
      PopPublishPowerButtonState(&dword_140F0C3D0);
      KeDisableTimer2((__int64)&PopModernStandbyStateNotify.Padding[2], 1, 1, 0LL);
    }
    if ( (v3 & 1) != 0 )
    {
      if ( (dword_140F0C3D0 & 1) == 0 )
      {
        ExUuidCreate((UUID *)&Uuid[8]);
        v4 = *(_OWORD *)&Uuid[8];
        LOBYTE(v5) = 1;
        *(_OWORD *)&PopModernStandbyStateNotify.Spare35[1] = *(_OWORD *)&Uuid[8];
        PopRecordPhysicalPowerButton(v5);
        v2 = *(_DWORD *)&Uuid[4];
        dword_140F0C3D4 = *(_DWORD *)&Uuid[4];
        xmmword_140F0C3D8 = v4;
        dword_140F0C3E8 = PopQueryPowerButtonBugcheckEnabled();
        HIDWORD(BugCheckParameter1) = 65544;
        KeInitializeIRTimer(
          (__int64)&PopModernStandbyStateNotify.Padding[2],
          (__int64)PopPowerButtonTimerCallback,
          v2,
          (unsigned __int16 *)&BugCheckParameter1 + 2,
          2);
        KeSetTimer2((__int64)&PopModernStandbyStateNotify.Padding[2], -10000000LL, 10000000LL, 0LL);
        v3 = *(_DWORD *)Uuid;
      }
      dword_140F0C3D0 = v3;
      PopPublishPowerButtonState(&dword_140F0C3D0);
      v6 = v3 >> 1;
      if ( v3 >> 1 >= 0x1B58 )
      {
        PopDiagTracePowerButtonBugcheck(v6);
        PopRecordPoBlackboxInformation();
        if ( dword_140F0C3E8 )
        {
          PopBsdPowerTransitionToParam1(&BugCheckParameter1);
          KeBugCheckEx(
            0x1C8u,
            (unsigned int)BugCheckParameter1,
            (ULONG_PTR)&PopModernStandbyStateNotify.SchedulerAssistPriorityFloor,
            (unsigned __int64)v3 >> 1,
            0LL);
        }
      }
      SchedulerAssistYieldCounter = PopModernStandbyStateNotify.SchedulerAssistYieldCounter;
      if ( (PopModernStandbyStateNotify.SchedulerAssistYieldCounter & 1) != 0
        && !dword_140F0C3E8
        && v6 == 1000 * (LOBYTE(PopModernStandbyStateNotify.SchedulerAssistYieldCounter) >> 4) )
      {
        PopBsdPowerTransitionToParam1(&BugCheckParameter1);
        if ( (SchedulerAssistYieldCounter & 8) != 0 )
        {
          v12[0] = 0x2800000001LL;
          *((_QWORD *)&v15 + 1) = ((unsigned __int64)SchedulerAssistYieldCounter >> 8) & 1;
          v13 = &v15;
          v12[3] = 24LL;
          *(_OWORD *)&v12[1] = 0LL;
          *(_QWORD *)&v15 = 0x3000000001LL;
          v16 = 0LL;
          v17 = 0LL;
          v10 = DbgkWerCaptureLiveKernelDump2(L"PopPowerButton", (unsigned __int64)v3 >> 1, 1LL, (__int64)v12);
          DbgPrintEx(
            0x92u,
            2u,
            "PopPowerButtonWorkCallback: DbgkWerCaptureLiveKernelDump2 completed with Status: %08x, SelectiveThreadKernelStacks: %01x\n",
            v10,
            (SchedulerAssistYieldCounter >> 8) & 1);
        }
        else
        {
          v8 = SchedulerAssistYieldCounter & 4 | ((SchedulerAssistYieldCounter & 2 | 0x10) >> 1);
          v9 = DbgkWerCaptureLiveKernelDump(
                 (unsigned int)L"PopPowerButton",
                 4552,
                 BugCheckParameter1,
                 (unsigned int)&PopModernStandbyStateNotify.SchedulerAssistPriorityFloor,
                 (unsigned __int64)v3 >> 1,
                 0LL,
                 0LL,
                 0LL,
                 v8);
          DbgPrintEx(
            0x92u,
            2u,
            "PopPowerButtonWorkCallback: DbgkWerCaptureLiveKernelDump completed with Status: %08x, UserPages:  %08x, Hype"
            "rvisorPages:  %08x\n",
            v9,
            v8 & 1,
            (v8 >> 2) & 1);
        }
      }
    }
    v0 = KeAcquireSpinLockRaiseToDpc(&PopModernStandbyStateNotify.Padding[1]);
  }
  while ( __PAIR64__(v2, v3) != (_QWORD)xmmword_140F0C3B8 );
  _InterlockedExchange(&dword_140F0C3B0, 0);
  KeReleaseSpinLock(&PopModernStandbyStateNotify.Padding[1], v0);
}
