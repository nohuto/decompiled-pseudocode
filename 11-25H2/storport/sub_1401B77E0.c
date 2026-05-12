/*
 * XREFs of sub_1401B77E0 @ 0x1401B77E0
 * Callers:
 *     <none>
 * Callees:
 *     StorPortSynchronizeAccess @ 0x140029780 (StorPortSynchronizeAccess.c)
 */

char __fastcall sub_1401B77E0(__int64 a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  return StorPortSynchronizeAccess(a1, a2, a3);
}
