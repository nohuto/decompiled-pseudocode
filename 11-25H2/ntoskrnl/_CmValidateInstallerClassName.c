/*
 * XREFs of _CmValidateInstallerClassName @ 0x14095AF00
 * Callers:
 *     _CmClassSubkeyCallback @ 0x14080B010 (_CmClassSubkeyCallback.c)
 *     _PnpDispatchInterfaceClass @ 0x140953770 (_PnpDispatchInterfaceClass.c)
 *     _PnpDispatchInstallerClass @ 0x1409AB040 (_PnpDispatchInstallerClass.c)
 * Callees:
 *     PnpIsValidGuidString @ 0x14095AE04 (PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateInstallerClassName(__int64 a1, const WCHAR *a2)
{
  return !PnpIsValidGuidString(a2) ? 0xC0000033 : 0;
}
