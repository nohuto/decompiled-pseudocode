/*
 * XREFs of Xp10ScatteredBitBufferReadBytes @ 0x180120ED8
 * Callers:
 *     Xp10ReadAndValidateCrc @ 0x1800FA3D8 (Xp10ReadAndValidateCrc.c)
 * Callees:
 *     Xp10ScatteredReadBytes @ 0x1800FA0B0 (Xp10ScatteredReadBytes.c)
 */

__int64 __fastcall Xp10ScatteredBitBufferReadBytes(__int64 a1, char *a2, int a3)
{
  int v4; // ebx
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
  return (unsigned int)(a3 - v4);
}
