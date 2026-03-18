/*
 * XREFs of HalpApicTimerIsInvariant @ 0x14059905C
 * Callers:
 *     HalpApicTimerDiscover @ 0x140598E58 (HalpApicTimerDiscover.c)
 * Callees:
 *     HalSocRequestApi @ 0x1404EF27C (HalSocRequestApi.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpApicTimerIsInvariant(__int64 a1)
{
  int v2; // [rsp+50h] [rbp+20h]

  v2 = 0;
  if ( (int)HalSocRequestApi(a1, 0LL, 2, 16LL, &HalpApicTimerCpuApi) >= 0 )
    guard_dispatch_icall_no_overrides(0LL, 0LL);
  return 0;
}
