/*
 * XREFs of MiFreeNonPagedPoolPages @ 0x140365080
 * Callers:
 *     MiFinishDeleteNonPagedPtes @ 0x1403650CC (MiFinishDeleteNonPagedPtes.c)
 * Callees:
 *     MiReturnPhysicalPoolPages @ 0x140520550 (MiReturnPhysicalPoolPages.c)
 *     MiLogNonPagedPoolReleaseEvent @ 0x14070082C (MiLogNonPagedPoolReleaseEvent.c)
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
