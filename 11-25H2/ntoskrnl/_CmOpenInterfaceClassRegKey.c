/*
 * XREFs of _CmOpenInterfaceClassRegKey @ 0x140A1B224
 * Callers:
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x14080E4E8 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x14080FE28 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 *     _PnpDispatchInterfaceClass @ 0x140953770 (_PnpDispatchInterfaceClass.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x1408CA33C (_CmOpenCommonClassRegKey.c)
 */

__int64 __fastcall CmOpenInterfaceClassRegKey(
        _QWORD *a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  return CmOpenCommonClassRegKey(a1, a2, 64, 0, a5, a6, a7, a8);
}
