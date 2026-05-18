/*
 * XREFs of sub_18001F73C @ 0x18001F73C
 * Callers:
 *     sub_18001EA5C @ 0x18001EA5C (sub_18001EA5C.c)
 *     sub_18007B100 @ 0x18007B100 (sub_18007B100.c)
 *     sub_18007F368 @ 0x18007F368 (sub_18007F368.c)
 *     sub_1800879C4 @ 0x1800879C4 (sub_1800879C4.c)
 *     sub_1800977D4 @ 0x1800977D4 (sub_1800977D4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001F73C(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0x3FFFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 2;
  v4 = v3 >> 1;
  if ( v3 <= 0x3FFFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
