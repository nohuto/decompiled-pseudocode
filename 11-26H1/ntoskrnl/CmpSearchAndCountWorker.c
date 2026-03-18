/*
 * XREFs of CmpSearchAndCountWorker @ 0x1408595F0
 * Callers:
 *     <none>
 * Callees:
 *     CmpDumpKeyBodyList @ 0x140B22594 (CmpDumpKeyBodyList.c)
 */

__int64 __fastcall CmpSearchAndCountWorker(__int64 a1, __int64 a2)
{
  CmpDumpKeyBodyList(a1, a2 + 8, *(_QWORD *)(a2 + 16));
  return 0LL;
}
