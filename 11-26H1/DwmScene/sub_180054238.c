/*
 * XREFs of sub_180054238 @ 0x180054238
 * Callers:
 *     sub_1800C68A0 @ 0x1800C68A0 (sub_1800C68A0.c)
 *     sub_1800C8130 @ 0x1800C8130 (sub_1800C8130.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180054238(__int64 a1)
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
      return *(unsigned int *)(v3 + 12);
  }
  return result;
}
