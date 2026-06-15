/*
 * XREFs of sub_1400B4510 @ 0x1400B4510
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14005BC28 @ 0x14005BC28 (sub_14005BC28.c)
 */

__int64 sub_1400B4510()
{
  struct _RTL_CRITICAL_SECTION *v0; // rbx
  __int64 result; // rax

  v0 = (struct _RTL_CRITICAL_SECTION *)qword_1400E9858;
  qword_1400E9858 = 0LL;
  if ( v0 )
  {
    sub_14005BC28(v0);
    return j_j__o_free((__int64)v0);
  }
  return result;
}
