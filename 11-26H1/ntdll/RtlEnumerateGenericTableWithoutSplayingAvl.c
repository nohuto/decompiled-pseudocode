/*
 * XREFs of RtlEnumerateGenericTableWithoutSplayingAvl @ 0x1800DA360
 * Callers:
 *     RtlEnumerateGenericTableAvl @ 0x1800DA340 (RtlEnumerateGenericTableAvl.c)
 * Callees:
 *     RealSuccessor @ 0x1800DA3D8 (RealSuccessor.c)
 */

__int64 __fastcall RtlEnumerateGenericTableWithoutSplayingAvl(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 *v4; // r9
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 i; // rax

  if ( !*(_DWORD *)(a1 + 44) )
    return 0LL;
  if ( *a2 )
  {
    v3 = RealSuccessor(*a2, a2, a3, a2);
    v5 = v3;
    if ( v3 )
      *v4 = v3;
    result = v3 + 32;
    if ( !v5 )
      return 0LL;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 16);
    for ( i = *(_QWORD *)(v7 + 8); i; i = *(_QWORD *)(i + 8) )
      v7 = i;
    *a2 = v7;
    result = v7 + 32;
    if ( !v7 )
      return 0LL;
  }
  return result;
}
