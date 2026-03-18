/*
 * XREFs of ACPIDelayedFreeWakeInterrupt @ 0x14005092C
 * Callers:
 *     ACPIFreeWaitWakePowerRequest @ 0x140033B30 (ACPIFreeWaitWakePowerRequest.c)
 *     ACPIAssociateWakeInterrupt @ 0x1400401CC (ACPIAssociateWakeInterrupt.c)
 * Callees:
 *     OSPowerTryAcquireWakeInterruptChangeStateLock @ 0x140049804 (OSPowerTryAcquireWakeInterruptChangeStateLock.c)
 *     ACPIFindWakeInterruptForVector @ 0x140050C34 (ACPIFindWakeInterruptForVector.c)
 *     Feature_Independent_Wake_Interrupt__private_IsEnabledDeviceUsageNoInline @ 0x140063B14 (Feature_Independent_Wake_Interrupt__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall ACPIDelayedFreeWakeInterrupt(__int64 a1, unsigned int a2, __int64 a3)
{
  KIRQL v6; // bp
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // rbx
  KIRQL v10; // al
  __int64 v11; // rax
  _QWORD *v12; // rcx
  _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-28h] BYREF
  PVOID Entry; // [rsp+68h] [rbp+20h] BYREF

  LODWORD(Parameters.ConnectionContext.Generic) = 0;
  *(_QWORD *)&Parameters.Version = 0LL;
  Entry = 0LL;
  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  if ( (int)ACPIFindWakeInterruptForVector(a1, a2, a3, &Entry) >= 0 )
  {
    v9 = Entry;
    if ( !*((_DWORD *)Entry + 22) )
    {
      Feature_Independent_Wake_Interrupt__private_IsEnabledDeviceUsageNoInline(v8, v7);
      if ( v9[14] != 5 )
      {
        if ( !OSPowerTryAcquireWakeInterruptChangeStateLock((__int64)v9) )
          goto LABEL_10;
        v9[14] = 1;
        KeReleaseSpinLock(&AcpiPowerLock, v6);
        Parameters.Version = 1;
        Parameters.ConnectionContext.Generic = (PVOID)*((_QWORD *)v9 + 6);
        IoDisconnectInterruptEx(&Parameters);
        v10 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
        v9[14] = 5;
        v6 = v10;
        KeSetEvent((PRKEVENT)(v9 + 16), 0, 0);
      }
      if ( !v9[22] )
      {
        v11 = *(_QWORD *)v9;
        if ( *(_DWORD **)(*(_QWORD *)v9 + 8LL) != v9 || (v12 = (_QWORD *)*((_QWORD *)v9 + 1), (_DWORD *)*v12 != v9) )
          __fastfail(3u);
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        *((_QWORD *)v9 + 1) = v9;
        *(_QWORD *)v9 = v9;
        ExFreeToNPagedLookasideList(&WakeInterruptLookAsideList, v9);
      }
    }
  }
LABEL_10:
  KeReleaseSpinLock(&AcpiPowerLock, v6);
}
