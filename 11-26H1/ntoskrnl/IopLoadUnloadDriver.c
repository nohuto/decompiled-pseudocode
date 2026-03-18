/*
 * XREFs of IopLoadUnloadDriver @ 0x140A264F0
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140437F84 (IopCompleteUnloadOrDelete.c)
 *     IopLoadDriverImage @ 0x14052A428 (IopLoadDriverImage.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     VfIsVerifierEnabled @ 0x1404FC020 (VfIsVerifierEnabled.c)
 *     VfDriverProcessUnload @ 0x140641494 (VfDriverProcessUnload.c)
 *     DifIsPluginRunningWithoutReboot @ 0x14064B940 (DifIsPluginRunningWithoutReboot.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     IopCallDriverReinitializationRoutines @ 0x140A265E4 (IopCallDriverReinitializationRoutines.c)
 *     IopLoadDriver @ 0x140A26FC4 (IopLoadDriver.c)
 */

LONG __fastcall IopLoadUnloadDriver(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  NTSTATUS Driver; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  KeyHandle = 0LL;
  if ( v3 )
  {
    guard_dispatch_icall_no_overrides(v3, a2);
    if ( (unsigned int)VfIsVerifierEnabled() || DifIsPluginRunningWithoutReboot() )
      VfDriverProcessUnload(*(_QWORD *)(a1 + 56));
    Driver = 0;
  }
  else
  {
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = *(PUNICODE_STRING *)(a1 + 64);
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    Driver = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( Driver >= 0 )
    {
      Driver = IopLoadDriver(KeyHandle);
      if ( Driver == -1073740955 )
      {
        Driver = 0;
      }
      else if ( Driver == -1073740914 )
      {
        Driver = -1073741772;
      }
      IopCallDriverReinitializationRoutines(0LL);
    }
  }
  *(_DWORD *)(a1 + 72) = Driver;
  return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
