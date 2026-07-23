/*
 * XREFs of PopPowerButtonWorkCallback @ 0x14060FE80
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     KeDisableTimer2 @ 0x1403B3D14 (KeDisableTimer2.c)
 *     KeInitializeIRTimer @ 0x14044E4C8 (KeInitializeIRTimer.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopRecordPhysicalPowerButton @ 0x1407CC108 (PopRecordPhysicalPowerButton.c)
 *     PopDiagTracePowerButtonBugcheck @ 0x1407D6CF4 (PopDiagTracePowerButtonBugcheck.c)
 *     PopBsdPowerTransitionToParam1 @ 0x1407DE868 (PopBsdPowerTransitionToParam1.c)
 *     PopPublishPowerButtonState @ 0x1407DEA64 (PopPublishPowerButtonState.c)
 *     PopRecordPoBlackboxInformation @ 0x1407E8D2C (PopRecordPoBlackboxInformation.c)
 *     ExUuidCreate @ 0x140A7F880 (ExUuidCreate.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140B43CF0 (DbgkWerCaptureLiveKernelDump.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140B43D70 (DbgkWerCaptureLiveKernelDump2.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x140B59530 (PopQueryPowerButtonBugcheckEnabled.c)
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
  unsigned int v7; // edi
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
  v0 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopPdcDeviceListLock.Teb);
  do
  {
    v1 = *(__m128i *)&PopPdcDeviceListLock.WaitBlockFill11[104];
    *(_OWORD *)Uuid = *(_OWORD *)&PopPdcDeviceListLock.WaitBlockFill11[104];
    *(_QWORD *)&Uuid[16] = PopPdcDeviceListLock.WaitBlock[2].Thread;
    KeReleaseSpinLock((PKSPIN_LOCK)&PopPdcDeviceListLock.Teb, v0);
    v2 = _mm_cvtsi128_si32(_mm_srli_si128(v1, 4));
    v3 = _mm_cvtsi128_si32(v1);
    if ( (PopPdcDeviceListLock.WaitBlockFill7[128] & 1) != 0
      && ((v3 & 1) == 0 || v2 != *(_DWORD *)&PopPdcDeviceListLock.WaitBlockFill11[132]) )
    {
      PopRecordPhysicalPowerButton(0LL);
      *(_DWORD *)&PopPdcDeviceListLock.WaitBlockFill11[128] = 0;
      PopPdcDeviceListLock.SavedApcStateFill[32] = 0;
      PopPublishPowerButtonState(&PopPdcDeviceListLock.WaitBlockFill11[128]);
      KeDisableTimer2((__int64)&PopPdcDeviceListLock.RelativeTimerBias, 1, 1, 0LL);
    }
    if ( (v3 & 1) != 0 )
    {
      if ( (PopPdcDeviceListLock.WaitBlockFill7[128] & 1) == 0 )
      {
        ExUuidCreate((UUID *)&Uuid[8]);
        v4 = *(_OWORD *)&Uuid[8];
        LOBYTE(v5) = 1;
        *(_OWORD *)&PopPdcDeviceListLock.NpxState = *(_OWORD *)&Uuid[8];
        PopRecordPhysicalPowerButton(v5);
        v2 = *(_DWORD *)&Uuid[4];
        *(_DWORD *)&PopPdcDeviceListLock.WaitBlockFill11[132] = *(_DWORD *)&Uuid[4];
        *(_OWORD *)&PopPdcDeviceListLock.WaitBlockFill11[136] = v4;
        *(_DWORD *)&PopPdcDeviceListLock.WaitBlockFill11[152] = PopQueryPowerButtonBugcheckEnabled();
        HIDWORD(BugCheckParameter1) = 65544;
        KeInitializeIRTimer(
          (__int64)&PopPdcDeviceListLock.RelativeTimerBias,
          (__int64)PopPowerButtonTimerCallback,
          v2,
          (unsigned __int16 *)&BugCheckParameter1 + 2,
          2);
        KeSetTimer2((__int64)&PopPdcDeviceListLock.RelativeTimerBias, -10000000LL, 10000000LL, 0LL);
        v3 = *(_DWORD *)Uuid;
      }
      *(_DWORD *)&PopPdcDeviceListLock.WaitBlockFill11[128] = v3;
      PopPublishPowerButtonState(&PopPdcDeviceListLock.WaitBlockFill11[128]);
      v6 = v3 >> 1;
      if ( v3 >> 1 >= 0x1B58 )
      {
        PopDiagTracePowerButtonBugcheck(v6);
        PopRecordPoBlackboxInformation();
        if ( *(_DWORD *)&PopPdcDeviceListLock.WaitBlockFill11[152] )
        {
          PopBsdPowerTransitionToParam1(&BugCheckParameter1);
          KeBugCheckEx(
            0x1C8u,
            (unsigned int)BugCheckParameter1,
            (ULONG_PTR)&PopPdcDeviceListLock.QueueListEntry.Blink,
            (unsigned __int64)v3 >> 1,
            0LL);
        }
      }
      v7 = *(_DWORD *)&PopPdcDeviceListLock.SchedulerApcFill5[16];
      if ( (PopPdcDeviceListLock.SchedulerApcFill3[16] & 1) != 0
        && !*(_DWORD *)&PopPdcDeviceListLock.WaitBlockFill11[152]
        && v6 == 1000 * (PopPdcDeviceListLock.SchedulerApcFill3[16] >> 4) )
      {
        PopBsdPowerTransitionToParam1(&BugCheckParameter1);
        if ( (v7 & 8) != 0 )
        {
          v12[0] = 0x2800000001LL;
          *((_QWORD *)&v15 + 1) = ((unsigned __int64)v7 >> 8) & 1;
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
            (v7 >> 8) & 1);
        }
        else
        {
          v8 = v7 & 4 | ((v7 & 2 | 0x10) >> 1);
          v9 = DbgkWerCaptureLiveKernelDump(
                 (unsigned int)L"PopPowerButton",
                 4552,
                 BugCheckParameter1,
                 (unsigned int)&PopPdcDeviceListLock.QueueListEntry.Blink,
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
    v0 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopPdcDeviceListLock.Teb);
  }
  while ( (struct _LIST_ENTRY *)__PAIR64__(v2, v3) != PopPdcDeviceListLock.WaitBlock[2].WaitListEntry.Blink );
  _InterlockedExchange((volatile __int32 *)&PopPdcDeviceListLock.WaitBlockFill11[96], 0);
  KeReleaseSpinLock((PKSPIN_LOCK)&PopPdcDeviceListLock.Teb, v0);
}
