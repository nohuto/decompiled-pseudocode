/*
 * XREFs of PspGetNoChildProcessRestrictedPolicy @ 0x140A94144
 * Callers:
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x14047F35C (SeTokenGetNoChildProcessRestricted.c)
 */

__int64 __fastcall PspGetNoChildProcessRestrictedPolicy(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  ULONG_PTR v5; // rbx
  bool v7; // [rsp+30h] [rbp+8h] BYREF
  bool v8; // [rsp+38h] [rbp+10h] BYREF
  bool v9; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0;
  v8 = 0;
  v9 = 0;
  v5 = PsReferencePrimaryTokenWithTag(a1, 0x79517350u, a3, a4);
  SeTokenGetNoChildProcessRestricted(v5, &v7, &v8, &v9);
  ObFastDereferenceObject((signed __int64 *)(a1 + 584), v5, 0x79517350u);
  if ( v7 )
    return (unsigned int)v8 + 1;
  else
    return v9 ? 3 : 0;
}
