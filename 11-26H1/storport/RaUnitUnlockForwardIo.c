/*
 * XREFs of RaUnitUnlockForwardIo @ 0x1400429E0
 * Callers:
 *     RaidBusEnumeratorGetUnit @ 0x14000C0F0 (RaidBusEnumeratorGetUnit.c)
 *     RaidDeleteDeviceQueueEntry @ 0x140012998 (RaidDeleteDeviceQueueEntry.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1400197D8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidRemovePendingDeviceQueue @ 0x140057CFC (RaidRemovePendingDeviceQueue.c)
 *     RaidLunQueueCheckWaitTimeout @ 0x140074394 (RaidLunQueueCheckWaitTimeout.c)
 *     RaUnitFlushQueueSrb @ 0x14009B4F0 (RaUnitFlushQueueSrb.c)
 *     RaUnitReleaseQueueSrb @ 0x14009E89C (RaUnitReleaseQueueSrb.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1400A6948 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitTestDeviceQueue @ 0x1400A9E8C (RaidUnitTestDeviceQueue.c)
 *     RaUnitStartDeviceIrp @ 0x1401BB140 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline @ 0x140097F6C (Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall RaUnitUnlockForwardIo(__int64 a1, int a2)
{
  _DWORD *v2; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  KIRQL v8; // r14
  int v9; // edi
  int v10; // edi
  int v11; // edi
  __int64 v12; // rcx
  __int16 v13; // cx
  _DWORD *v14; // rax
  _OWORD v15[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v16; // [rsp+40h] [rbp-20h]
  __int64 v17; // [rsp+50h] [rbp-10h]

  v2 = 0LL;
  v17 = 0LL;
  memset(v15, 0, sizeof(v15));
  v16 = 0LL;
  if ( *(_QWORD *)(a1 + 32) && RaidIsUnitControlSupported(a1, 31) )
  {
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL));
    if ( a2 )
    {
      v9 = a2 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            if ( v11 == 1 )
              --*(_DWORD *)(*(_QWORD *)(a1 + 32) + 84LL);
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) &= ~0x80u;
          }
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) &= ~0x40u;
        }
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) &= ~0x20u;
      }
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) &= ~0x100u;
    }
    v12 = *(_QWORD *)(a1 + 32);
    if ( (*(_DWORD *)(v12 + 80) & 0x1E0) == 0 && *(int *)(v12 + 84) <= 0 )
    {
      LODWORD(v15[0]) = 56;
      *(_QWORD *)((char *)v15 + 4) = 0x300000038LL;
      if ( (unsigned int)Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline(v12, v5, v6, v7) )
      {
        HIDWORD(v16) = 4;
        WORD4(v16) = 1;
        v13 = *(_WORD *)(*(_QWORD *)(a1 + 24) + 56LL);
        LOWORD(v17) = *(_WORD *)(a1 + 104);
        BYTE2(v17) = *(_BYTE *)(a1 + 106);
        WORD5(v16) = v13;
      }
      v14 = *(_DWORD **)(a1 + 24);
      if ( *v14 == 1094997074 )
      {
        v2 = v14 + 94;
      }
      else if ( *v14 == 1314275652 )
      {
        v2 = v14 + 42;
      }
      RaCallMiniportUnitControl(v2, 31LL, v15);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v8);
  }
}
