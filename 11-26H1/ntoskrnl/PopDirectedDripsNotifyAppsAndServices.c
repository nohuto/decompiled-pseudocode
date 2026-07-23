/*
 * XREFs of PopDirectedDripsNotifyAppsAndServices @ 0x1407CF180
 * Callers:
 *     PopDirectedDripsEngage @ 0x1404C1A5C (PopDirectedDripsEngage.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x1409F2CF8 (PopPowerAggregatorDisengageModernStandby.c)
 *     PopDirectedDripsNotify @ 0x140B0A610 (PopDirectedDripsNotify.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140368A50 (MmUnlockPagableImageSection.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x1407CF534 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopDiagTraceDirectedDripsNotifyAppsAndServices @ 0x1407D658C (PopDiagTraceDirectedDripsNotifyAppsAndServices.c)
 *     PopDispatchStateCallout @ 0x1409F5718 (PopDispatchStateCallout.c)
 *     MmLockPagableSectionByHandle @ 0x140A9F220 (MmLockPagableSectionByHandle.c)
 *     PoBlockConsoleSwitch @ 0x140B56AC0 (PoBlockConsoleSwitch.c)
 */

__int64 __fastcall PopDirectedDripsNotifyAppsAndServices(__int64 a1, _DWORD *a2, char a3)
{
  __int64 v6; // r14
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v14; // [rsp+50h] [rbp+18h] BYREF

  _InterlockedOr((volatile signed __int32 *)a1, 0);
  v6 = MEMORY[0xFFFFF78000000008];
  if ( a3 )
  {
    MmLockPagableSectionByHandle(ExPageLockHandle);
    a2[17] = *a2;
    a2[15] = 2;
    a2[16] = 5;
    a2[19] = 21;
    v7 = PoBlockConsoleSwitch(a2 + 10);
    LOBYTE(v8) = 1;
    a2[8] = v7;
    LOBYTE(v9) = 1;
    PopDirectedDripsSendSuspendResumeNotification(v9, v8);
    LOBYTE(v10) = 1;
    PopDirectedDripsSendSuspendResumeNotification(0LL, v10);
    _InterlockedOr((volatile signed __int32 *)a1, 8u);
    *(_DWORD *)(a1 + 136) = 0;
  }
  else
  {
    PopDirectedDripsSendSuspendResumeNotification(0LL, 0LL);
    LOBYTE(v11) = 1;
    PopDirectedDripsSendSuspendResumeNotification(v11, 0LL);
    v14 = a2[8];
    a2[18] = 7;
    PopDispatchStateCallout(a2 + 10, &v14);
    MmUnlockPagableImageSection(ExPageLockHandle);
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFF7);
  }
  v12 = MEMORY[0xFFFFF78000000008] - v6;
  LOBYTE(v12) = a3;
  return PopDiagTraceDirectedDripsNotifyAppsAndServices(
           v12,
           (MEMORY[0xFFFFF78000000008] - v6) / 0x2710uLL,
           (MEMORY[0xFFFFF78000000008] - v6) / 0x2710uLL);
}
