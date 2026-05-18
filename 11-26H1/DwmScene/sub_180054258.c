/*
 * XREFs of sub_180054258 @ 0x180054258
 * Callers:
 *     sub_1800537DC @ 0x1800537DC (sub_1800537DC.c)
 *     sub_18006AD9C @ 0x18006AD9C (sub_18006AD9C.c)
 *     sub_1800C8650 @ 0x1800C8650 (sub_1800C8650.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180054258(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(__int64 **)(a1 + 112);
  result = 0LL;
  if ( v1 )
  {
    v3 = *v1;
    if ( v3 )
      return *(unsigned int *)(v3 + 24);
  }
  return result;
}
