/*
 * XREFs of sub_140048424 @ 0x140048424
 * Callers:
 *     sub_140023C54 @ 0x140023C54 (sub_140023C54.c)
 *     sub_14003D070 @ 0x14003D070 (sub_14003D070.c)
 *     sub_1400AF5FD @ 0x1400AF5FD (sub_1400AF5FD.c)
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_140048424(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return j_j__o_free(v1, 32LL);
  return result;
}
