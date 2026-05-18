/*
 * XREFs of sub_180054028 @ 0x180054028
 * Callers:
 *     sub_18006AD9C @ 0x18006AD9C (sub_18006AD9C.c)
 *     sub_1800C403C @ 0x1800C403C (sub_1800C403C.c)
 *     sub_1800C4B58 @ 0x1800C4B58 (sub_1800C4B58.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180054028(__int64 a1)
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
      return *(unsigned int *)(v3 + 20);
  }
  return result;
}
