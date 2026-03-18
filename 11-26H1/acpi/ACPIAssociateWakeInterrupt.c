/*
 * XREFs of ACPIAssociateWakeInterrupt @ 0x1400401CC
 * Callers:
 *     ACPIWakeEmulationEnable @ 0x140040128 (ACPIWakeEmulationEnable.c)
 * Callees:
 *     OSPowerTryAcquireWakeInterruptChangeStateLock @ 0x140049804 (OSPowerTryAcquireWakeInterruptChangeStateLock.c)
 *     ACPIDelayedFreeWakeInterrupt @ 0x14005092C (ACPIDelayedFreeWakeInterrupt.c)
 *     ACPIDereferenceWakeInterrupt @ 0x140050A88 (ACPIDereferenceWakeInterrupt.c)
 *     ACPIFindWakeInterruptForVector @ 0x140050C34 (ACPIFindWakeInterruptForVector.c)
 *     Feature_Independent_Wake_Interrupt__private_IsEnabledDeviceUsageNoInline @ 0x140063B14 (Feature_Independent_Wake_Interrupt__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_SF_qqdq @ 0x14006B804 (WPP_RECORDER_SF_qqdq.c)
 *     memset @ 0x140072740 (memset.c)
 *     ACPIConnectWakeInterrupt @ 0x1400A924C (ACPIConnectWakeInterrupt.c)
 */

__int64 __fastcall ACPIAssociateWakeInterrupt(__int64 a1)
{
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v3; // r15
  int v4; // r13d
  KIRQL v5; // si
  unsigned int v6; // ebx
  __int64 v7; // r14
  unsigned int v8; // r12d
  int v9; // r9d
  __int64 v11; // rbx
  int v12; // edi
  _QWORD *v13; // rcx
  int v14; // eax
  KIRQL v15; // r14
  PVOID v16; // rax
  _QWORD *v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // [rsp+50h] [rbp-10h] BYREF
  __int64 v21; // [rsp+58h] [rbp-8h]
  __int64 v22; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+48h]
  __int64 v24; // [rsp+B0h] [rbp+50h]

  LODWORD(v21) = 0;
  v20 = 0LL;
  IsEnabledDeviceUsageNoInline = Feature_Independent_Wake_Interrupt__private_IsEnabledDeviceUsageNoInline();
  v3 = *(_QWORD *)(a1 + 16);
  v4 = IsEnabledDeviceUsageNoInline;
  v22 = 0LL;
  v24 = *(_QWORD *)(v3 + 40);
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  if ( *(_DWORD *)(v3 + 108) )
  {
    v6 = -1073741536;
LABEL_8:
    KeReleaseSpinLock(&AcpiPowerLock, v5);
    return v6;
  }
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(_DWORD *)(a1 + 24);
  v23 = v7;
  if ( (int)ACPIFindWakeInterruptForVector(v3 & -(__int64)(v4 != 0), v8, v7, &v22) < 0 )
  {
    v16 = ExAllocateFromNPagedLookasideList(&WakeInterruptLookAsideList);
    v11 = (__int64)v16;
    if ( !v16 )
    {
      v12 = -1073741670;
      KeReleaseSpinLock(&AcpiPowerLock, v5);
      v11 = v22;
      goto LABEL_33;
    }
    memset(v16, 0, 0x60uLL);
    v17 = (_QWORD *)(v11 + 16);
    if ( v4 )
    {
      *v17 = a1;
      *(_QWORD *)a1 = v11;
      *(_QWORD *)(v11 + 24) = v3;
    }
    else
    {
      *(_QWORD *)(v11 + 8) = v11;
      *(_QWORD *)v11 = v11;
      *(_QWORD *)a1 = v17;
      *(_QWORD *)(a1 + 8) = v17;
      *v17 = a1;
      *(_QWORD *)(v11 + 24) = a1;
    }
    *(_DWORD *)(v11 + 32) = v8;
    *(_DWORD *)(v11 + 36) = *(_DWORD *)(a1 + 28);
    *(_QWORD *)(v11 + 40) = v7;
    *(_DWORD *)(v11 + 56) = 0;
    KeInitializeEvent((PRKEVENT)(v11 + 64), SynchronizationEvent, 0);
    *(_DWORD *)(v11 + 88) = 2;
    v18 = (__int64 *)qword_14008F7B8;
    if ( *(__int64 **)qword_14008F7B8 == &AcpiPowerWaitWakeInterruptList )
    {
      *(_QWORD *)v11 = &AcpiPowerWaitWakeInterruptList;
      *(_QWORD *)(v11 + 8) = v18;
      *v18 = v11;
      qword_14008F7B8 = v11;
      v22 = v11;
      goto LABEL_28;
    }
LABEL_26:
    __fastfail(3u);
  }
  if ( v4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqdq(
        WPP_GLOBAL_Control->DeviceExtension,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 24) + 40LL) + 784LL),
        *(_QWORD *)(v22 + 24),
        v9);
    v6 = -1073741436;
    goto LABEL_8;
  }
  v11 = v22;
  if ( *(_DWORD *)(v22 + 36) == *(_DWORD *)(a1 + 28) )
  {
    *(_DWORD *)(v22 + 88) += 2;
    v13 = *(_QWORD **)(v11 + 24);
    if ( *v13 == v11 + 16 )
    {
      *(_QWORD *)a1 = v11 + 16;
      *(_QWORD *)(a1 + 8) = v13;
      *v13 = a1;
      *(_QWORD *)(v11 + 24) = a1;
      if ( *(int *)(v11 + 56) >= 2 )
      {
        if ( !(unsigned __int8)OSPowerTryAcquireWakeInterruptChangeStateLock(v11) )
        {
          KeReleaseSpinLock(&AcpiPowerLock, v5);
          v12 = -1073741823;
          goto LABEL_33;
        }
      }
      else
      {
        KeReleaseSpinLock(&AcpiPowerLock, v5);
        KeWaitForSingleObject((PVOID)(v11 + 64), Executive, 0, 0, 0LL);
        v5 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      }
      v14 = *(_DWORD *)(v11 + 56);
      v15 = v5;
      if ( v14 == 3 )
      {
        KeSetEvent((PRKEVENT)(v11 + 64), 0, 0);
        KeReleaseSpinLock(&AcpiPowerLock, v5);
        v12 = 0;
LABEL_32:
        v7 = v23;
LABEL_33:
        if ( v11 )
        {
          ACPIDereferenceWakeInterrupt(&v22);
          if ( v4 )
            v19 = v3;
          else
            v19 = 0LL;
          ACPIDelayedFreeWakeInterrupt(v19, v8, v7);
        }
        return (unsigned int)v12;
      }
      *(_DWORD *)(v11 + 56) = 0;
      if ( v14 == 4 )
      {
        LODWORD(v20) = 1;
        v21 = *(_QWORD *)(v11 + 48);
        IoReportInterruptActive(&v20);
        v12 = 0;
        goto LABEL_29;
      }
LABEL_28:
      KeReleaseSpinLock(&AcpiPowerLock, v5);
      v12 = ACPIConnectWakeInterrupt(v24, v11);
      v15 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      if ( v12 < 0 )
      {
        *(_DWORD *)(v11 + 56) = 5;
        goto LABEL_31;
      }
LABEL_29:
      *(_DWORD *)(v11 + 56) = 3;
LABEL_31:
      KeSetEvent((PRKEVENT)(v11 + 64), 0, 0);
      KeReleaseSpinLock(&AcpiPowerLock, v15);
      goto LABEL_32;
    }
    goto LABEL_26;
  }
  KeReleaseSpinLock(&AcpiPowerLock, v5);
  return (unsigned int)-1073741637;
}
