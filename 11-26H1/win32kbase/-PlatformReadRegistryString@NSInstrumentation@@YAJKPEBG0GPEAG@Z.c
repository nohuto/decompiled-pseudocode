/*
 * XREFs of ?PlatformReadRegistryString@NSInstrumentation@@YAJKPEBG0GPEAG@Z @ 0x1401FD4C4
 * Callers:
 *     ?FindHotpatchImageIfExists@@YA?AVLOGGED_NTSTATUS@@KKPEAU_SYSTEM_GDI_DRIVER_INFORMATION@@@Z @ 0x1402F3310 (-FindHotpatchImageIfExists@@YA-AVLOGGED_NTSTATUS@@KKPEAU_SYSTEM_GDI_DRIVER_INFORMATION@@@Z.c)
 * Callees:
 *     memset @ 0x14024BD80 (memset.c)
 */

NTSTATUS __fastcall NSInstrumentation::PlatformReadRegistryString(
        NSInstrumentation *this,
        const WCHAR *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        __int64 a5)
{
  _QWORD v7[2]; // [rsp+30h] [rbp-88h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+40h] [rbp-78h] BYREF

  v7[0] = 34078720LL;
  v7[1] = a5;
  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].Flags = 288;
  QueryTable[0].Name = L"PatchPath";
  QueryTable[0].DefaultType = 0x1000000;
  QueryTable[0].EntryContext = v7;
  return RtlQueryRegistryValues(2u, a2, QueryTable, 0LL, 0LL);
}
