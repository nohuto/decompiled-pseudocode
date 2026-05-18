/*
 * XREFs of sub_18007C314 @ 0x18007C314
 * Callers:
 *     sub_18007B9FC @ 0x18007B9FC (sub_18007B9FC.c)
 *     sub_18007BE98 @ 0x18007BE98 (sub_18007BE98.c)
 *     sub_18007C50C @ 0x18007C50C (sub_18007C50C.c)
 * Callees:
 *     sub_18007B264 @ 0x18007B264 (sub_18007B264.c)
 */

__int64 __fastcall sub_18007C314(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx

  result = *(unsigned int *)(a1 + 1172);
  v2 = a1 + 80;
  v3 = *(_QWORD *)(a1 + 80);
  v4 = (*(_QWORD *)(a1 + 88) - v3) >> 2;
  if ( result )
  {
    v5 = v4 + result - 1;
    result = ~(result - 1);
    v6 = result & v5;
  }
  else
  {
    v6 = v4;
  }
  if ( v6 >= v4 )
  {
    if ( v6 <= v4 )
      return result;
    if ( v6 > (*(_QWORD *)(v2 + 16) - v3) >> 2 )
      return sub_18007B100((const void **)v2, v6);
    result = sub_18007B264(*(_QWORD *)(v2 + 8), v6 - v4, v2);
  }
  else
  {
    result = v3 + 4 * v6;
  }
  *(_QWORD *)(v2 + 8) = result;
  return result;
}
