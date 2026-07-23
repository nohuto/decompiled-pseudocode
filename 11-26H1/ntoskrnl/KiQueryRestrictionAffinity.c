/*
 * XREFs of KiQueryRestrictionAffinity @ 0x1404B76B4
 * Callers:
 *     PpmEventTraceHeteroSets @ 0x1404B7270 (PpmEventTraceHeteroSets.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiQueryRestrictionAffinity(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v6; // rdx
  __int64 v7; // r11
  __int64 v8; // r8
  __int64 result; // rax
  __int64 v10; // rcx
  _WORD *v11; // r10
  __int64 v12; // rcx

  v3 = 0LL;
  v6 = 496LL * a2 + 416;
  v7 = 7LL;
  do
  {
    v8 = 2LL;
    do
    {
      result = KiHeteroConfig;
      v10 = *(unsigned __int16 *)(a1 + 136);
      v11 = *(_WORD **)(v6 + KiHeteroConfig);
      if ( (unsigned __int16)v10 >= *v11 )
        v12 = 0LL;
      else
        v12 = *(_QWORD *)&v11[4 * v10 + 4];
      *(_QWORD *)(a3 + 8 * v3) = v12;
      v6 += 8LL;
      v3 = (unsigned int)(v3 + 1);
      --v8;
    }
    while ( v8 );
    --v7;
  }
  while ( v7 );
  return result;
}
