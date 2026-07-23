/*
 * XREFs of PipDmgEnforceEnumerationPolicy @ 0x14096EC44
 * Callers:
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x14096EA80 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PipCallDriverAddDevice @ 0x140970138 (PipCallDriverAddDevice.c)
 * Callees:
 *     PipDmgReevaluateQueue @ 0x140773D50 (PipDmgReevaluateQueue.c)
 *     PiDmaGuardQueueInsertEntry @ 0x140778870 (PiDmaGuardQueueInsertEntry.c)
 *     PipDmaGuardBlockAddDevice @ 0x1407B4204 (PipDmaGuardBlockAddDevice.c)
 *     PiIommuIsPassthroughAllowedWhileConsoleLocked @ 0x1407B7A8C (PiIommuIsPassthroughAllowedWhileConsoleLocked.c)
 *     PiIommuIsDeviceSafeWhileConsoleLocked @ 0x14096EBB8 (PiIommuIsDeviceSafeWhileConsoleLocked.c)
 *     PipDmgSetIommuDomainPolicyAndNotifyHal @ 0x14096ED2C (PipDmgSetIommuDomainPolicyAndNotifyHal.c)
 *     PiCslIsConsoleLocked @ 0x14096EDA4 (PiCslIsConsoleLocked.c)
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
