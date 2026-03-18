/*
 * XREFs of PipDmgEnforceEnumerationPolicy @ 0x140B13278
 * Callers:
 *     PipCallDriverAddDevice @ 0x1409156CC (PipCallDriverAddDevice.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140B130B4 (PnpSurpriseFailUnsafeDmaDevices.c)
 * Callees:
 *     PipDmgReevaluateQueue @ 0x140770D50 (PipDmgReevaluateQueue.c)
 *     PiDmaGuardQueueInsertEntry @ 0x140775870 (PiDmaGuardQueueInsertEntry.c)
 *     PipDmaGuardBlockAddDevice @ 0x1407B11A4 (PipDmaGuardBlockAddDevice.c)
 *     PiIommuIsPassthroughAllowedWhileConsoleLocked @ 0x1407B4A2C (PiIommuIsPassthroughAllowedWhileConsoleLocked.c)
 *     PiIommuIsDeviceSafeWhileConsoleLocked @ 0x140B131EC (PiIommuIsDeviceSafeWhileConsoleLocked.c)
 *     PipDmgSetIommuDomainPolicyAndNotifyHal @ 0x140B13360 (PipDmgSetIommuDomainPolicyAndNotifyHal.c)
 *     PiCslIsConsoleLocked @ 0x140B133D8 (PiCslIsConsoleLocked.c)
 */

__int64 __fastcall PipDmgEnforceEnumerationPolicy(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned int v4; // ebx
  unsigned int v6; // edi
  bool v7; // si
  int v8; // r15d
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(BugCheckParameter2 + 720);
  v4 = 0;
  v6 = 0;
  v7 = 0;
  v8 = *(_DWORD *)(v3 + 20);
  if ( PipDmaGuardPolicy != 1 )
  {
    if ( PipDmaGuardPolicy == 2 )
    {
      if ( (unsigned __int8)PiCslIsConsoleLocked() )
      {
        v7 = !PiIommuIsDeviceSafeWhileConsoleLocked(v3);
        v6 = !PiIommuIsPassthroughAllowedWhileConsoleLocked(v10);
      }
    }
    else
    {
      if ( PipDmaGuardPolicy != 3 )
        __fastfail(5u);
      v7 = !PiIommuIsDeviceSafeWhileConsoleLocked(*(_QWORD *)(BugCheckParameter2 + 720));
      LOBYTE(v6) = !PiIommuIsPassthroughAllowedWhileConsoleLocked(v9);
    }
  }
  LOBYTE(a3) = v7;
  result = PipDmgSetIommuDomainPolicyAndNotifyHal(BugCheckParameter2, v6, a3);
  if ( (int)result >= 0 )
  {
    if ( v7 )
    {
      return (unsigned int)PipDmaGuardBlockAddDevice(BugCheckParameter2);
    }
    else if ( v8 != v6 && v6 == 1 )
    {
      PiDmaGuardQueueInsertEntry(*(PVOID *)(BugCheckParameter2 + 32), 4);
      PipDmgReevaluateQueue();
    }
    return v4;
  }
  return result;
}
