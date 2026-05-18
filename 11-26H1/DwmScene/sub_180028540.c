/*
 * XREFs of sub_180028540 @ 0x180028540
 * Callers:
 *     sub_1800281D0 @ 0x1800281D0 (sub_1800281D0.c)
 *     sub_180086570 @ 0x180086570 (sub_180086570.c)
 *     sub_1800948B0 @ 0x1800948B0 (sub_1800948B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180028540(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  unsigned int *v3; // rcx

  v1 = *(_QWORD *)(a1 + 136);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(unsigned int **)(v1 + 128);
    if ( v3 )
      return *v3;
  }
  return result;
}
