/*
 * XREFs of HalpApicTimerInitialize @ 0x14059B780
 * Callers:
 *     HalpApicTimerStop @ 0x14059B8F0 (HalpApicTimerStop.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicTimerInitialize(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // rbx

  v1 = a1;
  guard_dispatch_icall_no_overrides(992LL, *((unsigned int *)a1 + 1));
  LODWORD(v1) = *v1 | 0x30000;
  guard_dispatch_icall_no_overrides(896LL, 0xFFFFFFFFLL);
  guard_dispatch_icall_no_overrides(800LL, (unsigned int)v1);
  return 0LL;
}
