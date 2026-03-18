/*
 * XREFs of ACPIDeviceInitializePowerRequest @ 0x140025FA4
 * Callers:
 *     ACPIDeviceInternalSynchronizeRequest @ 0x14001C9F8 (ACPIDeviceInternalSynchronizeRequest.c)
 *     ACPIDeviceIrpDeviceRequest @ 0x14002507C (ACPIDeviceIrpDeviceRequest.c)
 *     ACPIDeviceIrpDeviceFilterRequest @ 0x140025310 (ACPIDeviceIrpDeviceFilterRequest.c)
 *     ACPIDeviceInternalDelayedDeviceRequest @ 0x140034A74 (ACPIDeviceInternalDelayedDeviceRequest.c)
 *     ACPIDeviceIrpWaitWakeRequest @ 0x14003CFF8 (ACPIDeviceIrpWaitWakeRequest.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x140042918 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIDeviceIrpSystemRequest @ 0x1400457B0 (ACPIDeviceIrpSystemRequest.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x14005CFCC (ACPIDeviceIrpWarmEjectRequest.c)
 *     AcpiDeviceResetInvokeReset @ 0x14005DCB4 (AcpiDeviceResetInvokeReset.c)
 * Callees:
 *     ACPIDeviceInternalQueueRequest @ 0x1400272FC (ACPIDeviceInternalQueueRequest.c)
 *     ACPIDereferenceWaitWakePowerRequest @ 0x140032B58 (ACPIDereferenceWaitWakePowerRequest.c)
 *     ACPIWakeEnableDisableAsync @ 0x140032F20 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeEmulationEnable @ 0x140040128 (ACPIWakeEmulationEnable.c)
 *     ACPIDeviceNotifyWakeEventDevice @ 0x14005D118 (ACPIDeviceNotifyWakeEventDevice.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     memset @ 0x140072740 (memset.c)
 *     ACPIWakeEmulationPrepare @ 0x1400C5DE4 (ACPIWakeEmulationPrepare.c)
 */

__int64 __fastcall ACPIDeviceInitializePowerRequest(
        __int64 a1,
        int a2,
        _DWORD *a3,
        void (__fastcall *a4)(__int64, __int64, __int64),
        __int64 a5,
        int a6,
        int a7,
        unsigned int a8)
{
  _DWORD *v12; // rax
  _DWORD *v13; // rdi
  KIRQL v14; // r12
  unsigned int v15; // esi
  __int64 result; // rax
  struct _DEVICE_OBJECT *v17; // rcx
  __int64 v18; // rdx
  int v19; // ebx

  v12 = ExAllocateFromNPagedLookasideList(&RequestLookAsideList);
  v13 = v12;
  if ( !v12 )
  {
    v19 = -1073741670;
    if ( a4 )
      a4(a1, a5, 3221225626LL);
    return (unsigned int)v19;
  }
  memset(v12, 0, 0x108uLL);
  v13[64] = 0;
  *((_QWORD *)v13 + 25) = a5;
  v13[12] = a7;
  v13[8] = 1599293264;
  *((_QWORD *)v13 + 24) = a4;
  *((_QWORD *)v13 + 5) = a1;
  v13[52] = 3;
  *((_QWORD *)v13 + 1) = v13;
  *(_QWORD *)v13 = v13;
  *((_QWORD *)v13 + 3) = v13 + 4;
  *((_QWORD *)v13 + 2) = v13 + 4;
  *((_QWORD *)v13 + 11) = v13 + 20;
  *((_QWORD *)v13 + 10) = v13 + 20;
  *((_QWORD *)v13 + 9) = v13 + 16;
  *((_QWORD *)v13 + 8) = v13 + 16;
  v14 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  if ( !a7 )
  {
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 736), 0, 0) )
    {
LABEL_4:
      v15 = a8;
      goto LABEL_5;
    }
    if ( a6 == 3 )
    {
      if ( a2 != 4 )
        goto LABEL_4;
      v15 = a8 | 0x10;
    }
    else
    {
      if ( a2 != 1 )
        goto LABEL_4;
      v15 = a8 | 0x20;
    }
LABEL_5:
    v13[26] = a2;
    v13[27] = 0;
    v13[14] = v15;
    if ( a2 > *(_DWORD *)(a1 + 384) )
    {
      v17 = *(struct _DEVICE_OBJECT **)(a1 + 768);
      if ( v17 )
        PoSetPowerState(v17, DevicePowerState, (POWER_STATE)a2);
    }
    if ( a2 > 1 )
      *(_QWORD *)(a1 + 1008) &= ~0x10000uLL;
    goto LABEL_8;
  }
  if ( a7 == 1 )
  {
    v15 = a8;
    v13[26] = a2;
    v13[27] = *a3;
    v13[28] = a6;
    goto LABEL_8;
  }
  if ( a7 != 2 )
  {
    if ( a7 == 3 )
    {
      v15 = a8;
      v13[26] = a2;
LABEL_40:
      v13[14] = v15;
      goto LABEL_8;
    }
    v15 = a8;
    if ( a7 == 4 )
      goto LABEL_40;
LABEL_8:
    if ( (v15 & 2) == 0 )
      ACPIDeviceInternalQueueRequest(a1, v13, v15);
    KeReleaseSpinLock(&AcpiPowerQueueLock, v14);
    return 3221225494LL;
  }
  v13[14] = a8;
  v13[26] = a2;
  v13[28] = 1;
  KeReleaseSpinLock(&AcpiPowerQueueLock, v14);
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 1000)) )
  {
    v19 = -1073741436;
LABEL_31:
    if ( a4 )
      a4(a1, a5, (unsigned int)v19);
    ACPIDereferenceWaitWakePowerRequest(v13);
    return (unsigned int)v19;
  }
  if ( _bittest64((const signed __int64 *)(a1 + 1008), 0x20u) )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v19 = -1073741496;
    }
    else
    {
      v19 = ACPIWakeEmulationPrepare(v13);
      if ( v19 >= 0 )
      {
        v19 = ACPIWakeEmulationEnable(v13);
        if ( v19 >= 0 )
          goto LABEL_23;
      }
    }
    goto LABEL_31;
  }
LABEL_23:
  if ( _bittest64((const signed __int64 *)(a1 + 1008), 0x26u) )
  {
    LOBYTE(v18) = 1;
    ACPIDeviceNotifyWakeEventDevice(a1, v18);
  }
  LOBYTE(v18) = 1;
  result = ACPIWakeEnableDisableAsync(a1, v18, ACPIDeviceIrpWaitWakeRequestPending, v13);
  if ( (_DWORD)result == 259 )
    return 3221225494LL;
  return result;
}
