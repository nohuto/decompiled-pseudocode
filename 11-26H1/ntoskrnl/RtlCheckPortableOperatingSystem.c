/*
 * XREFs of RtlCheckPortableOperatingSystem @ 0x1404C9BA0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlQueryRegistryValuesEx @ 0x140A10120 (RtlQueryRegistryValuesEx.c)
 *     RtlCheckRegistryKey @ 0x140A10140 (RtlCheckRegistryKey.c)
 */

NTSTATUS __cdecl RtlCheckPortableOperatingSystem(PBOOLEAN IsPortable)
{
  NTSTATUS v1; // ebx
  NTSTATUS v3; // eax
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-78h] BYREF
  int v6; // [rsp+B8h] [rbp+10h] BYREF

  v1 = 0;
  v6 = 0;
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") >= 0 )
    goto LABEL_6;
  memset_0(&QueryTable, 0, 0x70uLL);
  QueryTable.Flags = 292;
  QueryTable.Name = (wchar_t *)L"PortableOperatingSystem";
  QueryTable.DefaultType = 0x4000000;
  QueryTable.EntryContext = &v6;
  v3 = RtlQueryRegistryValuesEx(2u, 0LL, &QueryTable, 0LL, 0LL);
  v1 = v3;
  if ( v3 != -1073741772 )
  {
    if ( v3 < 0 )
      return v1;
LABEL_6:
    *IsPortable = v6 != 0;
    return v1;
  }
  return -1073741275;
}
