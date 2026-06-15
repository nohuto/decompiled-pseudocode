/*
 * XREFs of sub_14005C478 @ 0x14005C478
 * Callers:
 *     sub_14005BDD0 @ 0x14005BDD0 (sub_14005BDD0.c)
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14005BC28 @ 0x14005BC28 (sub_14005BC28.c)
 */

__int64 __fastcall sub_14005C478(struct _RTL_CRITICAL_SECTION **a1, struct _RTL_CRITICAL_SECTION *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 result; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    sub_14005BC28(v2);
    return j_j__o_free((__int64)v2);
  }
  return result;
}
