/*
 * XREFs of MiFreeNonPagedPoolPages @ 0x1403632E0
 * Callers:
 *     MiFinishDeleteNonPagedPtes @ 0x14036332C (MiFinishDeleteNonPagedPtes.c)
 * Callees:
 *     MiReturnPhysicalPoolPages @ 0x14051DF40 (MiReturnPhysicalPoolPages.c)
 *     MiLogNonPagedPoolReleaseEvent @ 0x1406FBB5C (MiLogNonPagedPoolReleaseEvent.c)
 */

__int64 __fastcall MiFreeNonPagedPoolPages(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a2 + 16);
  if ( result )
  {
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogNonPagedPoolReleaseEvent(a2);
    return MiReturnPhysicalPoolPages(a1, a2);
  }
  return result;
}
