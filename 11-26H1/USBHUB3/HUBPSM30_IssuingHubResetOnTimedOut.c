/*
 * XREFs of HUBPSM30_IssuingHubResetOnTimedOut @ 0x140014130
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_CheckAndQueueIfResetHubIsEnabled @ 0x140010938 (HUBMUX_CheckAndQueueIfResetHubIsEnabled.c)
 *     HUBMUX_ReleaseInterruptReference @ 0x140011F3C (HUBMUX_ReleaseInterruptReference.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPSM30_IssuingHubResetOnTimedOut(__int64 a1)
{
  __int64 *v1; // rbx

  v1 = *(__int64 **)(a1 + 960);
  (*(void (__fastcall **)(__int64, __int64))(v1[166] + 1480))(v1[166], 4046LL);
  HUBMUX_CheckAndQueueIfResetHubIsEnabled(*v1);
  HUBMUX_ReleaseInterruptReference((volatile signed __int32 *)v1);
  return 3013LL;
}
