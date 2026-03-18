/*
 * XREFs of MiInitializeNumaRangesTemporary @ 0x140CF13DC
 * Callers:
 *     MiInitNucleus @ 0x140CF2CBC (MiInitNucleus.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void *MiInitializeNumaRangesTemporary()
{
  void *result; // rax

  qword_140E2D6D0 = -1LL;
  guard_dispatch_icall_no_overrides(30LL, 16LL);
  result = &unk_140E2D6C0;
  qword_140E2D6E0 = &unk_140E2D6C0;
  return result;
}
