/*
 * XREFs of _CmValidateInstallerClassName @ 0x140AC4F40
 * Callers:
 *     _CmClassSubkeyCallback @ 0x14089EB50 (_CmClassSubkeyCallback.c)
 *     _PnpDispatchInterfaceClass @ 0x1409721D0 (_PnpDispatchInterfaceClass.c)
 *     _PnpDispatchInstallerClass @ 0x140972DA0 (_PnpDispatchInstallerClass.c)
 * Callees:
 *     PnpIsValidGuidString @ 0x140963020 (PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateInstallerClassName(__int64 a1, const WCHAR *a2)
{
  return !PnpIsValidGuidString(a2) ? 0xC0000033 : 0;
}
