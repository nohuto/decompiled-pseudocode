/*
 * XREFs of MiInitializeNumaRangesTemporary @ 0x140CF7754
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void *MiInitializeNumaRangesTemporary()
{
  void *result; // rax

  qword_140E2D850 = -1LL;
  guard_dispatch_icall_no_overrides(30LL, 16LL);
  result = &unk_140E2D840;
  qword_140E2D860 = &unk_140E2D840;
  return result;
}
