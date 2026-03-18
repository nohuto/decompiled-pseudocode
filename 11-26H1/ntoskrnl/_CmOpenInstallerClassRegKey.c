/*
 * XREFs of _CmOpenInstallerClassRegKey @ 0x14099E2B4
 * Callers:
 *     _CmCreateInstallerClassWorker @ 0x140896448 (_CmCreateInstallerClassWorker.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140897348 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x14089B4DC (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _PnpDispatchInstallerClass @ 0x140918340 (_PnpDispatchInstallerClass.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140B44E74 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x14099F0C4 (_CmOpenCommonClassRegKey.c)
 */

__int64 __fastcall CmOpenInstallerClassRegKey(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  return CmOpenCommonClassRegKey(a1, a2, 32, 0, a5, a6, a7, a8);
}
