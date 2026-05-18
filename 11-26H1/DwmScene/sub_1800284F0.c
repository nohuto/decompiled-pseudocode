/*
 * XREFs of sub_1800284F0 @ 0x1800284F0
 * Callers:
 *     sub_1800281D0 @ 0x1800281D0 (sub_1800281D0.c)
 *     sub_1800948B0 @ 0x1800948B0 (sub_1800948B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800284F0(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 136);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 128);
    if ( v3 )
      return *(unsigned int *)(v3 + 4);
  }
  return result;
}
