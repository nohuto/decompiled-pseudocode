/*
 * XREFs of sub_14003E420 @ 0x14003E420
 * Callers:
 *     sub_14003E410 @ 0x14003E410 (sub_14003E410.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14003E420(PTP_POOL *a1)
{
  struct _TP_CLEANUP_GROUP *v2; // rcx

  v2 = a1[21];
  if ( v2 )
  {
    CloseThreadpoolCleanupGroupMembers(v2, 1, 0LL);
    CloseThreadpoolCleanupGroup(a1[21]);
    a1[21] = 0LL;
  }
  if ( *a1 )
  {
    CloseThreadpool(*a1);
    *a1 = 0LL;
  }
}
