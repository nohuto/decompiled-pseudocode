/*
 * XREFs of IopOpenRegistryKey @ 0x140B1C920
 * Callers:
 *     IopAllowRemoteDASD @ 0x1405052F8 (IopAllowRemoteDASD.c)
 *     IopIsBitlockerOn @ 0x1405C99FC (IopIsBitlockerOn.c)
 *     IopReadDumpRegistry @ 0x1405C9ADC (IopReadDumpRegistry.c)
 *     IoInitializeLiveDump @ 0x1405CC0D4 (IoInitializeLiveDump.c)
 *     IopLiveDumpInitRegistrySettings @ 0x1405CFF50 (IopLiveDumpInitRegistrySettings.c)
 *     SecureDump_ReadRegistry @ 0x1405D71B0 (SecureDump_ReadRegistry.c)
 *     IopInitializeDumpPolicySettings @ 0x140793844 (IopInitializeDumpPolicySettings.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407946FC (IopCopyBootLogRegistryToFile.c)
 *     IopBootLog @ 0x140A27974 (IopBootLog.c)
 *     pIoQueryDeviceDescription @ 0x140A73E4C (pIoQueryDeviceDescription.c)
 *     IopUnloadDriver @ 0x140B2ADF8 (IopUnloadDriver.c)
 *     IopSafebootDriverLoad @ 0x140B5C94C (IopSafebootDriverLoad.c)
 *     IopInitializeOfflineCrashDump @ 0x140CBA6C4 (IopInitializeOfflineCrashDump.c)
 * Callees:
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x140723790 (ZwCreateKey.c)
 */

NTSTATUS __fastcall IopOpenRegistryKey(HANDLE *a1, void *a2, UNICODE_STRING *a3, ACCESS_MASK a4, char a5)
{
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+88h] [rbp+18h] BYREF

  ObjectAttributes.ObjectName = a3;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  Disposition = 0;
  ObjectAttributes.RootDirectory = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( a5 )
    return ZwCreateKey(a1, a4, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
  else
    return ZwOpenKey(a1, a4, &ObjectAttributes);
}
