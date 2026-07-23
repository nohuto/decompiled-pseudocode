/*
 * XREFs of IopOpenRegistryKey @ 0x140B1EB30
 * Callers:
 *     IopAllowRemoteDASD @ 0x1404FEC38 (IopAllowRemoteDASD.c)
 *     IopIsBitlockerOn @ 0x1405CC2CC (IopIsBitlockerOn.c)
 *     IopReadDumpRegistry @ 0x1405CC3AC (IopReadDumpRegistry.c)
 *     IoInitializeLiveDump @ 0x1405CE8E8 (IoInitializeLiveDump.c)
 *     IopLiveDumpInitRegistrySettings @ 0x1405D2760 (IopLiveDumpInitRegistrySettings.c)
 *     SecureDump_ReadRegistry @ 0x1405D99A0 (SecureDump_ReadRegistry.c)
 *     IopInitializeDumpPolicySettings @ 0x140796374 (IopInitializeDumpPolicySettings.c)
 *     IopCopyBootLogRegistryToFile @ 0x14079722C (IopCopyBootLogRegistryToFile.c)
 *     IopBootLog @ 0x140A3AA14 (IopBootLog.c)
 *     pIoQueryDeviceDescription @ 0x140A4A8E8 (pIoQueryDeviceDescription.c)
 *     IopUnloadDriver @ 0x140B2CE78 (IopUnloadDriver.c)
 *     IopSafebootDriverLoad @ 0x140B5F86C (IopSafebootDriverLoad.c)
 *     IopInitializeOfflineCrashDump @ 0x140CC0704 (IopInitializeOfflineCrashDump.c)
 * Callees:
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
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
