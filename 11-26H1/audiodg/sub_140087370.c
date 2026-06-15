/*
 * XREFs of sub_140087370 @ 0x140087370
 * Callers:
 *     sub_140087460 @ 0x140087460 (sub_140087460.c)
 * Callees:
 *     sub_140053D30 @ 0x140053D30 (sub_140053D30.c)
 */

__int64 __fastcall sub_140087370(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_140053D30(v1);
  return result;
}
