/*
 * XREFs of sub_140134748 @ 0x140134748
 * Callers:
 *     sub_140134648 @ 0x140134648 (sub_140134648.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140134748(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // rax
  __int64 i; // r8
  __int64 v5; // rax

  result = (unsigned int)(a3 - 1);
  for ( i = (int)result; i >= 0; *(_WORD *)(a1 + 2 * i--) = result )
  {
    v5 = a2 & 0xF;
    a2 >>= 4;
    result = a0123456789abcd_0[v5];
  }
  return result;
}
