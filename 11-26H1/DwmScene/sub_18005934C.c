/*
 * XREFs of sub_18005934C @ 0x18005934C
 * Callers:
 *     sub_18005B5C4 @ 0x18005B5C4 (sub_18005B5C4.c)
 *     sub_18006B040 @ 0x18006B040 (sub_18006B040.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005934C(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 112);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 128);
    if ( v3 )
      return *(unsigned int *)(v3 + 4);
  }
  return result;
}
