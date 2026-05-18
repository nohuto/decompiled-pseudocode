/*
 * XREFs of sub_180014014 @ 0x180014014
 * Callers:
 *     sub_180012FD0 @ 0x180012FD0 (sub_180012FD0.c)
 *     sub_18001E17C @ 0x18001E17C (sub_18001E17C.c)
 *     sub_18001EBB8 @ 0x18001EBB8 (sub_18001EBB8.c)
 *     sub_18001EC60 @ 0x18001EC60 (sub_18001EC60.c)
 *     sub_18001ED64 @ 0x18001ED64 (sub_18001ED64.c)
 *     sub_18001EE58 @ 0x18001EE58 (sub_18001EE58.c)
 *     sub_1800307B8 @ 0x1800307B8 (sub_1800307B8.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_180014014(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r9
  unsigned __int64 result; // rax

  v3 = a1 | 7;
  if ( v3 > a3 )
    return a3;
  v4 = a2 >> 1;
  if ( a2 > a3 - (a2 >> 1) )
    return a3;
  result = v4 + a2;
  if ( v3 >= v4 + a2 )
    return v3;
  return result;
}
