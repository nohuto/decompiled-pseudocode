/*
 * XREFs of RtlAreBitsClearEx @ 0x1800DF8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall RtlAreBitsClearEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rcx
  char v5; // bl
  __int64 *v6; // r8
  __int64 v7; // r10
  __int64 *v8; // r11
  __int64 *v9; // r8
  bool result; // al
  __int64 v11; // rdx

  if ( a2 >= *a1 )
    return 0;
  if ( a3 <= 1 )
  {
    if ( a3 == 1 )
      return !_bittest64((const signed __int64 *)(a1[1] + 8 * (a2 >> 6)), a2 & 0x3F);
    return 0;
  }
  if ( *a1 - a2 < a3 )
    return 0;
  v4 = a1[1];
  v5 = a3 + a2 - 1;
  v6 = (__int64 *)(v4 + 8 * (a2 >> 6));
  v7 = *v6;
  v8 = (__int64 *)(v4 + 8 * ((a3 + a2 - 1) >> 6));
  if ( v6 != v8 )
  {
    if ( ((-1LL << a2) & v7) == 0 )
    {
      v9 = v6 + 1;
      result = 0;
      while ( 1 )
      {
        v11 = *v9;
        if ( v9 == v8 )
          break;
        if ( v11 )
          return result;
        ++v9;
      }
      return ((0xFFFFFFFFFFFFFFFFuLL >> ~v5) & v11) == 0;
    }
    return 0;
  }
  return ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)a3) << a2) & v7) == 0;
}
