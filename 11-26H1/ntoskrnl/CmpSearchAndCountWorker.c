/*
 * XREFs of CmpSearchAndCountWorker @ 0x14085F980
 * Callers:
 *     <none>
 * Callees:
 *     CmpDumpKeyBodyList @ 0x140B24994 (CmpDumpKeyBodyList.c)
 */

__int64 __fastcall CmpSearchAndCountWorker(__int64 a1, __int64 a2)
{
  CmpDumpKeyBodyList(a1, a2 + 8, *(_QWORD *)(a2 + 16));
  return 0LL;
}
