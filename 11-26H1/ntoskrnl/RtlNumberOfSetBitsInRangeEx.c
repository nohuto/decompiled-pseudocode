/*
 * XREFs of RtlNumberOfSetBitsInRangeEx @ 0x14061BC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlNumberOfSetBitsInRangeEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r9
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r11
  __int64 v7; // rdi
  int v8; // esi
  unsigned __int64 *v9; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  char v13; // dl
  __int64 v14; // rdx
  unsigned __int8 v15; // cl
  unsigned __int64 i; // rdx
  unsigned int v17; // ecx
  unsigned __int64 v18; // r11
  char v19; // cl

  if ( a2 >= *a1 )
    return -1LL;
  if ( *a1 - a2 < a3 )
    return -1LL;
  v4 = 0LL;
  if ( !a3 )
    return -1LL;
  v5 = a2 >> 3;
  v6 = (a3 + a2 - 1) >> 3;
  v7 = a2 & 7;
  v8 = (a3 + a2 - 1) & 7;
  v9 = (unsigned __int64 *)((a2 >> 3) + a1[1]);
  if ( a2 >> 3 == v6 )
    return *((unsigned __int8 *)RtlpBitsClearTotal
           + (unsigned __int8)~(*(_BYTE *)v9 & byte_140018470[v7] & byte_1400327C0[v8 + 1]));
  if ( (((unsigned __int8)a3 | (unsigned __int8)a2) & 0x3F) != 0 )
  {
    if ( (a2 & 7) != 0 )
    {
      v13 = *(_BYTE *)v9;
      v9 = (unsigned __int64 *)((char *)v9 + 1);
      ++v5;
      v4 = *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~(v13 & byte_140018470[v7]));
    }
    v14 = 8 - (v5 & 7);
    if ( (v14 & 0xFFFFFFFFFFFFFFF7uLL) != 0 )
    {
      do
      {
        if ( v5 >= v6 )
          break;
        ++v5;
        v15 = ~*(_BYTE *)v9;
        v9 = (unsigned __int64 *)((char *)v9 + 1);
        v4 += *((unsigned __int8 *)RtlpBitsClearTotal + v15);
        --v14;
      }
      while ( v14 );
    }
    for ( i = v5 + 8; i <= v6; i += 8LL )
    {
      v5 += 8LL;
      v17 = __popcnt(*v9++);
      v4 += v17;
    }
    if ( v5 < v6 )
    {
      v18 = v6 - v5;
      do
      {
        v19 = *(_BYTE *)v9;
        v9 = (unsigned __int64 *)((char *)v9 + 1);
        v4 += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v19);
        --v18;
      }
      while ( v18 );
    }
    return v4 + *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~(*(_BYTE *)v9 & byte_1400327C0[v8 + 1]));
  }
  else
  {
    v11 = ((a3 - 1) >> 6) + 1;
    do
    {
      v12 = *v9++;
      v4 += (unsigned int)__popcnt(v12);
      --v11;
    }
    while ( v11 );
    return v4;
  }
}
