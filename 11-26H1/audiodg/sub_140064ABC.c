/*
 * XREFs of sub_140064ABC @ 0x140064ABC
 * Callers:
 *     sub_14000E978 @ 0x14000E978 (sub_14000E978.c)
 *     sub_140064EA0 @ 0x140064EA0 (sub_140064EA0.c)
 * Callees:
 *     sub_14001DBF0 @ 0x14001DBF0 (sub_14001DBF0.c)
 */

__int64 __fastcall sub_140064ABC(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 72);
  if ( v1 < 0 )
    return sub_14001DBF0(2 * v1);
  return result;
}
