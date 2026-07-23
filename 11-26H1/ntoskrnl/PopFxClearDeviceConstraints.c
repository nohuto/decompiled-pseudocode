/*
 * XREFs of PopFxClearDeviceConstraints @ 0x1404DB710
 * Callers:
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxReferenceDevice @ 0x140396654 (PopFxReferenceDevice.c)
 *     PopFxDereferenceDevice @ 0x1403C00F4 (PopFxDereferenceDevice.c)
 *     PoFxIdleDevice @ 0x1404ABB10 (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x1404CEB00 (PopFxActivateDevice.c)
 *     PopFxReinitializeAccountingInstance @ 0x1404DBA80 (PopFxReinitializeAccountingInstance.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1404DBB18 (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopPepClearDripsDeviceVetoMask @ 0x140614284 (PopPepClearDripsDeviceVetoMask.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PopFxClearDeviceConstraints(ULONG_PTR BugCheckParameter2)
{
  int v2; // esi
  __int64 v3; // rax
  __int64 v4; // r14
  KIRQL v5; // bl
  unsigned int i; // r15d
  __int64 v7; // rdi
  KIRQL v8; // bl

  if ( (unsigned int)PpmGetDeepSleepPlatformStateIndex() == -1 )
    return (unsigned int)-1073741823;
  if ( !BugCheckParameter2 )
    return (unsigned int)-1073741811;
  v3 = *(_QWORD *)(BugCheckParameter2 + 64);
  if ( v3 && (*(_DWORD *)(v3 + 24) & 0x8000000) == 0 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    PopFxReferenceDevice(BugCheckParameter2, 2);
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 864), 0, 0) & 0x10) != 0
      && *(_QWORD *)(BugCheckParameter2 + 56) )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 32LL);
      PopFxActivateDevice(v4, 0, 0);
      v2 = PopPepClearDripsDeviceVetoMask(*(_QWORD *)(BugCheckParameter2 + 56));
      if ( v2 >= 0 )
      {
        v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 640));
        PopFxReinitializeAccountingInstance(BugCheckParameter2 + 640, 0LL);
        *(_DWORD *)(BugCheckParameter2 + 652) = 5;
        _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 864), 0xFFFFF7EF);
        KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 640), v5);
        for ( i = 0; i < *(_DWORD *)(BugCheckParameter2 + 868); ++i )
        {
          v7 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 872) + 8LL * i) + 200LL;
          v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
          PopFxReinitializeAccountingInstance(v7, 0LL);
          *(_DWORD *)(v7 + 12) = -1;
          _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 864), 0xFFFFFEFF);
          KeReleaseSpinLock((PKSPIN_LOCK)v7, v8);
        }
      }
      PoFxIdleDevice(v4);
    }
    else
    {
      v2 = -1073741823;
    }
    PopFxDereferenceDevice(BugCheckParameter2, 2);
    if ( !v2 )
      ZwUpdateWnfStateData(&WNF_PO_DRIPS_DEVICE_CONSTRAINTS_UPDATED, 0LL, 0, 0LL, 0LL, 0, 0);
  }
  return (unsigned int)v2;
}
