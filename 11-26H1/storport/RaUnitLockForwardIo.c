/*
 * XREFs of RaUnitLockForwardIo @ 0x140042F00
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1400197D8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidPauseAdapterQueue @ 0x14002EEF0 (RaidPauseAdapterQueue.c)
 *     RaidFreezeUnitQueue @ 0x1400A6784 (RaidFreezeUnitQueue.c)
 *     RaidUnitTestDeviceQueue @ 0x1400A9E8C (RaidUnitTestDeviceQueue.c)
 *     RaUnitStopDeviceIrp @ 0x14018AF74 (RaUnitStopDeviceIrp.c)
 *     StorProcessNVMeNewUnit @ 0x140191C34 (StorProcessNVMeNewUnit.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline @ 0x140097F6C (Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall RaUnitLockForwardIo(__int64 a1, int a2)
{
  _DWORD *v2; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  KIRQL v9; // r14
  int v10; // edi
  int v11; // edi
  int v12; // edi
  __int64 v13; // rax
  __int16 v14; // cx
  _DWORD *v15; // rax
  _OWORD v16[2]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v17; // [rsp+50h] [rbp-20h]
  __int64 v18; // [rsp+60h] [rbp-10h]

  v2 = 0LL;
  v18 = 0LL;
  memset(v16, 0, sizeof(v16));
  v17 = 0LL;
  if ( *(_QWORD *)(a1 + 32) && RaidIsUnitControlSupported(a1, 31) )
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL));
    if ( a2 )
    {
      v10 = a2 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( v12 == 1 )
              ++*(_DWORD *)(*(_QWORD *)(a1 + 32) + 84LL);
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) |= 0x80u;
          }
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) |= 0x40u;
        }
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) |= 0x20u;
      }
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) |= 0x100u;
      v5 = *(_QWORD *)(a1 + 32);
      v6 = *(unsigned int *)(v5 + 80);
      if ( (*(_DWORD *)(v5 + 80) & 0x201) == 1 )
      {
        *(_DWORD *)(v5 + 80) = v6 | 0x200;
        KeSetCoalescableTimer(
          (PKTIMER)(*(_QWORD *)(a1 + 32) + 88LL),
          (LARGE_INTEGER)-20000000LL,
          0,
          0x12Cu,
          (PKDPC)(*(_QWORD *)(a1 + 32) + 152LL));
      }
    }
    LODWORD(v16[0]) = 56;
    *(_QWORD *)((char *)v16 + 4) = 0x200000038LL;
    if ( (unsigned int)Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline(v6, v5, v7, v8) )
    {
      v13 = *(_QWORD *)(a1 + 24);
      WORD4(v17) = 1;
      HIDWORD(v17) = 4;
      v14 = *(_WORD *)(v13 + 56);
      LOWORD(v18) = *(_WORD *)(a1 + 104);
      BYTE2(v18) = *(_BYTE *)(a1 + 106);
      WORD5(v17) = v14;
    }
    v15 = *(_DWORD **)(a1 + 24);
    if ( *v15 == 1094997074 )
    {
      v2 = v15 + 94;
    }
    else if ( *v15 == 1314275652 )
    {
      v2 = v15 + 42;
    }
    RaCallMiniportUnitControl(v2, 31LL, v16);
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v9);
  }
}
