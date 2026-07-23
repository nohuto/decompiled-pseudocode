/*
 * XREFs of CmGetVisibleValueCount @ 0x140A83770
 * Callers:
 *     CmpQueryKeyDataFromNode @ 0x1408C8DC0 (CmpQueryKeyDataFromNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmGetVisibleValueCount(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // rax

  result = 0xFFFFFFFFLL;
  if ( a2 )
  {
    result = *(unsigned int *)(a2 + 36);
    if ( !a1 )
      return result;
  }
  else if ( !a1 )
  {
    return result;
  }
  if ( !a3 )
    return *(unsigned int *)(a1 + 96);
  v4 = *(_QWORD *)(a1 + 288);
  if ( v4 )
  {
    v5 = 280LL;
    if ( v4 != a3 )
      v5 = 96LL;
    return *(unsigned int *)(v5 + a1);
  }
  else if ( !a2 )
  {
    return *(unsigned int *)(a1 + 96);
  }
  return result;
}
