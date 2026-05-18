/*
 * XREFs of sub_1800594A8 @ 0x1800594A8
 * Callers:
 *     sub_18005B5C4 @ 0x18005B5C4 (sub_18005B5C4.c)
 *     sub_18006B040 @ 0x18006B040 (sub_18006B040.c)
 *     sub_180086570 @ 0x180086570 (sub_180086570.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800594A8(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  unsigned int *v3; // rcx

  v1 = *(_QWORD *)(a1 + 112);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(unsigned int **)(v1 + 128);
    if ( v3 )
      return *v3;
  }
  return result;
}
