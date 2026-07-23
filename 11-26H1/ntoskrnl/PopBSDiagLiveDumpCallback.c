/*
 * XREFs of PopBSDiagLiveDumpCallback @ 0x140610DD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopBSDiagLiveDumpCallback(__int64 a1)
{
  return guard_dispatch_icall_no_overrides(a1, &GUID_PO_BLACK_SCREEN_DIAGNOSTIC_DATA);
}
