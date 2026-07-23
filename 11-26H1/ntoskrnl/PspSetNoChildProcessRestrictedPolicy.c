/*
 * XREFs of PspSetNoChildProcessRestrictedPolicy @ 0x140B40E18
 * Callers:
 *     PspApplyMitigationOptions @ 0x140B4F59C (PspApplyMitigationOptions.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x1404F3CE8 (SeTokenSetNoChildProcessRestricted.c)
 */

signed __int64 __fastcall PspSetNoChildProcessRestrictedPolicy(
        __int64 a1,
        int a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  ULONG_PTR v6; // rbx

  v6 = PsReferencePrimaryTokenWithTag(a1, 0x79517350u, a3, a4);
  SeTokenSetNoChildProcessRestricted(v6, a2 == 2, a2 == 3);
  return ObFastDereferenceObject((signed __int64 *)(a1 + 584), v6, 0x79517350u);
}
