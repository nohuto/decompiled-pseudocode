/*
 * XREFs of EtwpCancelApcThunk @ 0x1406CB580
 * Callers:
 *     <none>
 * Callees:
 *     EtwpFinalizePendingApc @ 0x140460F50 (EtwpFinalizePendingApc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

int __fastcall EtwpCancelApcThunk(__int64 a1)
{
  unsigned int **v2; // rbx

  v2 = *(unsigned int ***)(a1 + 56);
  guard_dispatch_icall_no_overrides(v2, *(_QWORD *)(a1 + 8));
  return EtwpFinalizePendingApc(v2, (_SLIST_ENTRY *)a1);
}
