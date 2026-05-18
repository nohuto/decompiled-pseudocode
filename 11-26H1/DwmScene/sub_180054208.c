/*
 * XREFs of sub_180054208 @ 0x180054208
 * Callers:
 *     sub_1800C403C @ 0x1800C403C (sub_1800C403C.c)
 *     sub_1800C6000 @ 0x1800C6000 (sub_1800C6000.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180054208(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 8);
  return result;
}
