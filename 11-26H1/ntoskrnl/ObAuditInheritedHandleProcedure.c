/*
 * XREFs of ObAuditInheritedHandleProcedure @ 0x1407C5130
 * Callers:
 *     <none>
 * Callees:
 *     ExUnlockHandleTableEntry @ 0x140A4DFE0 (ExUnlockHandleTableEntry.c)
 *     SeAuditHandleDuplication @ 0x140B2A79C (SeAuditHandleDuplication.c)
 */

char __fastcall ObAuditInheritedHandleProcedure(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rbx

  v5 = *a2 >> 17;
  ExUnlockHandleTableEntry(a1, a2);
  if ( (v5 & 4) != 0 )
    SeAuditHandleDuplication(a3, a3, a4[1], *a4);
  return 0;
}
