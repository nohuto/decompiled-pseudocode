/*
 * XREFs of MiGetHugeFreePageCount @ 0x1404A2920
 * Callers:
 *     MiHugeFreePagesMayExist @ 0x1404A28CC (MiHugeFreePagesMayExist.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetHugeFreePageCount(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // r9
  unsigned __int8 i; // al
  __int64 v6; // rcx

  result = *(_QWORD *)(a1 + 17048);
  v4 = 0LL;
  if ( result )
  {
    for ( i = 0; i < (unsigned __int8)byte_140E2D898; v4 += *(_QWORD *)(a2 + 8 * (2LL * a3 + v6) + 13912) )
      v6 = i++;
    return v4;
  }
  return result;
}
