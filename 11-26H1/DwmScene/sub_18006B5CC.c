/*
 * XREFs of sub_18006B5CC @ 0x18006B5CC
 * Callers:
 *     sub_18006B040 @ 0x18006B040 (sub_18006B040.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006B5CC(__int64 a1)
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
      return *(unsigned int *)(v3 + 16);
  }
  return result;
}
