/*
 * XREFs of EtwpCoverageResetWorkItemCallback @ 0x14082A280
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCoverageReset @ 0x140829D38 (EtwpCoverageReset.c)
 */

void __fastcall EtwpCoverageResetWorkItemCallback(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  *(_DWORD *)(EtwpCoverageNonPagedContext + 8) = 0;
  EtwpCoverageReset(a1, 2, a3, a4);
}
