/*
 * XREFs of sub_140077BF8 @ 0x140077BF8
 * Callers:
 *     sub_140039BC0 @ 0x140039BC0 (sub_140039BC0.c)
 *     sub_140039E80 @ 0x140039E80 (sub_140039E80.c)
 *     sub_140079AF0 @ 0x140079AF0 (sub_140079AF0.c)
 *     sub_140079E70 @ 0x140079E70 (sub_140079E70.c)
 * Callees:
 *     sub_140020090 @ 0x140020090 (sub_140020090.c)
 *     sub_1400296E0 @ 0x1400296E0 (sub_1400296E0.c)
 */

__int64 __fastcall sub_140077BF8(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx

  v1 = a1 + 376;
  v2 = -1073741637;
  if ( sub_140020090(a1 + 376, 7) )
    return (unsigned int)sub_1400296E0(v1);
  return v2;
}
