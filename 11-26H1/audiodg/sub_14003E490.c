/*
 * XREFs of sub_14003E490 @ 0x14003E490
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_14003E490(__int64 a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 16));
  if ( !v1 )
    j_j__o_free(a1, 24LL);
  return v1;
}
