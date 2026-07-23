/*
 * XREFs of KiCompressSoftParkRankList @ 0x14025CEC8
 * Callers:
 *     KeUpdateSoftParkRankList @ 0x14025CCE8 (KeUpdateSoftParkRankList.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

_DWORD *__fastcall KiCompressSoftParkRankList(_DWORD *a1, void *a2)
{
  __int64 v4; // rbx
  char v5; // r8
  __int64 v6; // r9
  _DWORD *result; // rax
  unsigned int v8; // r11d
  __int64 v9; // rdx
  unsigned int v10; // ecx
  unsigned int *v11; // r8
  char v12; // r10
  unsigned int v13; // ecx
  _BYTE *v14; // r8

  v4 = -1LL;
  memset_0(a2, 255, 0x40uLL);
  v5 = 0;
  v6 = 64LL;
  result = a1;
  do
  {
    if ( *result == -1 )
      v4 &= ~(1LL << v5);
    ++v5;
    ++result;
    --v6;
  }
  while ( v6 );
  for ( ; v4; v4 &= ~v9 )
  {
    v8 = -1;
    v9 = 0LL;
    v10 = 0;
    v11 = a1;
    v12 = 0;
    do
    {
      if ( ((1LL << v10) & v4) != 0 )
      {
        if ( *v11 == v8 )
        {
          v9 |= 1LL << v12;
        }
        else if ( *v11 < v8 )
        {
          v9 = 1LL << v10;
          v8 = *v11;
        }
      }
      ++v10;
      ++v12;
      ++v11;
    }
    while ( v10 < 0x40 );
    v13 = 0;
    v14 = a2;
    do
    {
      result = (_DWORD *)v13;
      if ( _bittest64(&v9, v13) )
        *v14 = v6;
      ++v13;
      ++v14;
    }
    while ( v13 < 0x40 );
    LOBYTE(v6) = v6 + 1;
  }
  return result;
}
