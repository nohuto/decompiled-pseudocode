/*
 * XREFs of PspIsSiloContext @ 0x140A3109C
 * Callers:
 *     PsReplaceSiloContext @ 0x1407EE7A0 (PsReplaceSiloContext.c)
 *     PsInsertPermanentSiloContextEx @ 0x140A30E34 (PsInsertPermanentSiloContextEx.c)
 *     PsInsertSiloContext @ 0x140A31020 (PsInsertSiloContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspIsSiloContext(__int64 a1)
{
  struct _SINGLE_LIST_ENTRY *v1; // rax

  v1 = (struct _SINGLE_LIST_ENTRY *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  return v1 == PspSiloMonitorLock.IoSelfBoostsEntry.Next
      || v1 == (struct _SINGLE_LIST_ENTRY *)PspSiloMonitorLock.SavedApcState.ApcListHead[0].Flink;
}
