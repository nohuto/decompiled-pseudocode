/*
 * XREFs of sub_140015988 @ 0x140015988
 * Callers:
 *     sub_140014B7C @ 0x140014B7C (sub_140014B7C.c)
 *     sub_1400153FC @ 0x1400153FC (sub_1400153FC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140015988(struct _MDL *a1, __int64 a2, LOCK_OPERATION a3)
{
  MmProbeAndLockPages(a1, 0, a3);
  return 0LL;
}
