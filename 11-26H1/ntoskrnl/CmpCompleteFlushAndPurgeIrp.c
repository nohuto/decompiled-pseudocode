/*
 * XREFs of CmpCompleteFlushAndPurgeIrp @ 0x1404B8DF0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 */

__int64 __fastcall CmpCompleteFlushAndPurgeIrp(__int64 a1, __int64 a2, struct _KEVENT *a3)
{
  KeSetEvent(a3, 0, 0);
  return 3221225494LL;
}
