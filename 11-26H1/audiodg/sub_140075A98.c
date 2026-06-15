/*
 * XREFs of sub_140075A98 @ 0x140075A98
 * Callers:
 *     sub_14008DBD0 @ 0x14008DBD0 (sub_14008DBD0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140075A98(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return sub_1400B6010(v1);
  return result;
}
