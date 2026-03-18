/*
 * XREFs of _CcdOpenRegistrySubkey @ 0x1403E4610
 * Callers:
 *     AdjustCcdDatabasePermissions @ 0x14026CCDC (AdjustCcdDatabasePermissions.c)
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x14026D888 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     _CcdOpenRegistrySubkey_0 @ 0x1403E4678 (_CcdOpenRegistrySubkey_0.c)
 */

__int64 __fastcall CcdOpenRegistrySubkey(int a1, int a2, int a3, PCWSTR SourceString, PULONG a5)
{
  struct _UNICODE_STRING v9; // [rsp+30h] [rbp-18h] BYREF

  v9 = 0LL;
  RtlInitUnicodeString(&v9, SourceString);
  return CcdOpenRegistrySubkey_0(a1, a2, a3, (int)&v9, a5);
}
