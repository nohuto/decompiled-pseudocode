/*
 * XREFs of SymCryptFdefIntBitsizeOfValue @ 0x14056FB84
 * Callers:
 *     SymCryptIntBitsizeOfValue @ 0x14055E660 (SymCryptIntBitsizeOfValue.c)
 * Callees:
 *     SymCryptFdefBitsizeOfUint32 @ 0x14056F918 (SymCryptFdefBitsizeOfUint32.c)
 */

__int64 __fastcall SymCryptFdefIntBitsizeOfValue(__int64 a1)
{
  int v2; // ebx
  int v3; // ecx
  int v4; // r11d
  unsigned int v5; // r9d
  _DWORD *v6; // r10
  int v7; // r8d

  v2 = 0;
  v3 = 0;
  v4 = -1;
  v5 = *(_DWORD *)(a1 + 4) << 6 >> 2;
  if ( v5 )
  {
    v6 = (_DWORD *)(a1 + 4 * (v5 + 8LL));
    do
    {
      --v5;
      v7 = v4 & ((unsigned __int64)-(__int64)(unsigned int)*--v6 >> 32);
      v2 |= v5 & v7;
      v3 |= v7 & *v6;
      v4 &= ~v7;
    }
    while ( v5 );
  }
  return 32 * v2 + (unsigned int)SymCryptFdefBitsizeOfUint32(v3);
}
