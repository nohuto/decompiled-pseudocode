/*
 * XREFs of Xp10ScatteredBitBufferReadBytes @ 0x140814484
 * Callers:
 *     Xp10ReadAndValidateCrc @ 0x14081422C (Xp10ReadAndValidateCrc.c)
 * Callees:
 *     Xp10ScatteredReadBytes @ 0x1408148E8 (Xp10ScatteredReadBytes.c)
 */

__int64 __fastcall Xp10ScatteredBitBufferReadBytes(__int64 a1, _BYTE *a2, unsigned int a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rcx

  v4 = a3;
  if ( *(_DWORD *)(a1 + 16) >= 8u )
  {
    v6 = a1 - (_QWORD)a2;
    do
    {
      if ( !v4 )
        break;
      --v4;
      *a2 = a2[v6 + 8];
      ++a2;
      *(_DWORD *)(a1 + 16) -= 8;
    }
    while ( *(_DWORD *)(a1 + 16) >= 8u );
  }
  *(_QWORD *)(a1 + 8) >>= 8 * ((unsigned __int8)a3 - (unsigned __int8)v4);
  if ( v4 )
    v4 -= Xp10ScatteredReadBytes(a1 + 24, a2, v4);
  return a3 - v4;
}
