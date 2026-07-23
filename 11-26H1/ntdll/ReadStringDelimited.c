/*
 * XREFs of ReadStringDelimited @ 0x180131910
 * Callers:
 *     _input_l @ 0x180131AA0 (_input_l.c)
 * Callees:
 *     ReadString @ 0x180131738 (ReadString.c)
 */

__int64 __fastcall ReadStringDelimited(
        char a1,
        unsigned __int8 **a2,
        int *a3,
        _DWORD *a4,
        _QWORD *SrcCh,
        int a6,
        FILE *Stream,
        _DWORD *a8)
{
  unsigned __int8 *v9; // r9
  unsigned __int8 v12; // cl
  char v13; // al
  unsigned __int8 *v14; // r8
  unsigned __int8 v15; // al
  unsigned __int8 v16; // r9
  unsigned __int8 v17; // cl
  unsigned __int8 v18; // r10
  unsigned __int8 v19; // r11
  int v21[4]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v22; // [rsp+50h] [rbp-38h]

  v9 = *a2 + 1;
  *a2 = v9;
  *(_OWORD *)v21 = 0LL;
  v12 = *v9;
  v22 = 0LL;
  if ( v12 == 94 )
  {
    a1 |= 8u;
    v12 = *++v9;
  }
  v13 = HIBYTE(v21[2]);
  v14 = v9 + 1;
  if ( v12 == 93 )
    v13 = 32;
  else
    v14 = v9;
  HIBYTE(v21[2]) = v13;
  v15 = *v14;
  if ( *v14 != 93 )
  {
    v16 = v12 != 93 ? 0 : 0x5D;
    do
    {
      ++v14;
      if ( v15 == 45 && v16 && (v17 = *v14, *v14 != 93) )
      {
        ++v14;
        v18 = v16;
        v19 = v17;
        if ( v16 >= v17 )
        {
          v19 = v16;
          v18 = v17;
        }
        while ( v18 <= v19 )
        {
          *((_BYTE *)v21 + ((unsigned __int64)v18 >> 3)) |= 1 << (v18 & 7);
          ++v18;
        }
        v16 = 0;
      }
      else
      {
        v16 = v15;
        *((_BYTE *)v21 + ((unsigned __int64)v15 >> 3)) |= 1 << (v15 & 7);
      }
      v15 = *v14;
    }
    while ( *v14 != 93 );
  }
  *a2 = v14;
  return ReadString(a1, (__int64)v21, a3, a4, SrcCh, a6, Stream, a8);
}
