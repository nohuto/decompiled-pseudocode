/*
 * XREFs of sub_14003AC54 @ 0x14003AC54
 * Callers:
 *     sub_140033304 @ 0x140033304 (sub_140033304.c)
 *     sub_1400AD420 @ 0x1400AD420 (sub_1400AD420.c)
 *     sub_1400AD490 @ 0x1400AD490 (sub_1400AD490.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14003AC54(__int64 a1)
{
  unsigned int *v2; // rcx
  __int64 result; // rax

  v2 = *(unsigned int **)(a1 + 136);
  result = 16LL;
  if ( v2 )
  {
    result = *v2;
    if ( (unsigned int)result > 0x10 )
    {
      _InterlockedExchange(*(volatile __int32 **)(a1 + 136), 16);
      return 16LL;
    }
  }
  return result;
}
