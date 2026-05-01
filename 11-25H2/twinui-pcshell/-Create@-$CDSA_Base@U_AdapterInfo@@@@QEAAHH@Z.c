/*
 * XREFs of ?Create@?$CDSA_Base@U_AdapterInfo@@@@QEAAHH@Z @ 0x18059A838
 * Callers:
 *     ?BuildMonitorIndex@MonitorIDFinder@SnapAccessibilityHelpers@@QEAAXXZ @ 0x18059A478 (-BuildMonitorIndex@MonitorIDFinder@SnapAccessibilityHelpers@@QEAAXXZ.c)
 * Callees:
 *     DSA_Create @ 0x18065DFC0 (DSA_Create.c)
 */

_BOOL8 __fastcall CDSA_Base<_AdapterInfo>::Create(HDSA *a1)
{
  HDSA v2; // rax

  v2 = g_pfn_DSA_Create(32, 3);
  *a1 = v2;
  return v2 != 0LL;
}
