/*
 * XREFs of ACPIInitDereferenceDeviceExtensionLocked @ 0x14001DB20
 * Callers:
 *     ACPIBuildSurpriseRemovedExtension @ 0x14001C264 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x14001DAA0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIBuildDevicePowerNodes @ 0x14003666C (ACPIBuildDevicePowerNodes.c)
 *     ACPIInitResetDeviceExtension @ 0x14003C110 (ACPIInitResetDeviceExtension.c)
 *     ACPICleanupRemovedExtension @ 0x140059D48 (ACPICleanupRemovedExtension.c)
 *     ACPITableNotifyFreeObject @ 0x1400696B0 (ACPITableNotifyFreeObject.c)
 * Callees:
 *     _ACPIInternalErrorEx @ 0x1400254AC (_ACPIInternalErrorEx.c)
 *     ACPIInitDeleteDeviceExtension @ 0x140061CBC (ACPIInitDeleteDeviceExtension.c)
 */

char __fastcall ACPIInitDereferenceDeviceExtensionLocked(ULONG_PTR BugCheckParameter4)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter4 + 732), 0xFFFFFFFF) != 1 )
    return 0;
  if ( _bittest64((const signed __int64 *)(BugCheckParameter4 + 8), 0x39u) )
  {
    if ( *(_DWORD *)(BugCheckParameter4 + 196) )
      ACPIInternalErrorEx(0x90361uLL, 0LL, BugCheckParameter4);
  }
  ACPIInitDeleteDeviceExtension((PVOID)BugCheckParameter4);
  return 1;
}
