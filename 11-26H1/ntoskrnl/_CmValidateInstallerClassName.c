/*
 * XREFs of _CmValidateInstallerClassName @ 0x140AC32D0
 * Callers:
 *     _CmClassSubkeyCallback @ 0x140898750 (_CmClassSubkeyCallback.c)
 *     _PnpDispatchInterfaceClass @ 0x140917770 (_PnpDispatchInterfaceClass.c)
 *     _PnpDispatchInstallerClass @ 0x140918340 (_PnpDispatchInstallerClass.c)
 * Callees:
 *     PnpIsValidGuidString @ 0x1409A25C0 (PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateInstallerClassName(__int64 a1, const WCHAR *a2)
{
  return !PnpIsValidGuidString(a2) ? 0xC0000033 : 0;
}
