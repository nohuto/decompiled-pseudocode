/*
 * XREFs of RtlAreBitsSetEx @ 0x140448230
 * Callers:
 *     MiPatchDataPagesCallback @ 0x140879770 (MiPatchDataPagesCallback.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RtlAreBitsSetEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r11
  __int64 v6; // rbx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r10
  __int64 v9; // rdx

  if ( a2 >= *a1 )
    return 0;
  if ( a3 <= 1 )
  {
    if ( a3 == 1 )
      return _bittest64((const signed __int64 *)(a1[1] + 8 * (a2 >> 6)), a2 & 0x3F);
    return 0;
  }
  if ( *a1 - a2 < a3 )
    return 0;
  v4 = a1[1];
  v5 = a2 + a3 - 1;
  v6 = *(_QWORD *)(v4 + 8 * (a2 >> 6));
  v7 = v4 + 8 * (a2 >> 6);
  v8 = v4 + 8 * (v5 >> 6);
  if ( v7 == v8 )
    return (v6 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)a3) << a2)) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)a3) << a2;
  if ( (v6 & (-1LL << a2)) != -1LL << a2 )
    return 0;
  while ( 1 )
  {
    v9 = *(_QWORD *)(v7 + 8);
    v7 += 8LL;
    if ( v7 == v8 )
      break;
    if ( v9 != -1 )
      return 0;
  }
  return (v9 & (0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v5)) == 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v5;
}
