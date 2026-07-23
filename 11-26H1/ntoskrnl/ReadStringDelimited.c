/*
 * XREFs of ReadStringDelimited @ 0x1405409E8
 * Callers:
 *     _input_s @ 0x140540B80 (_input_s.c)
 * Callees:
 *     ReadString @ 0x140540840 (ReadString.c)
 */

__int64 __fastcall ReadStringDelimited(
        char a1,
        unsigned __int8 **a2,
        int *a3,
        _DWORD *a4,
        _WORD **a5,
        int a6,
        FILE *File,
        __int64 a8,
        _DWORD *a9)
{
  unsigned __int8 *v10; // rcx
  unsigned __int8 v14; // dl
  char v15; // al
  unsigned __int8 *v16; // r8
  unsigned __int8 v17; // al
  unsigned __int8 v18; // r9
  unsigned __int8 v19; // cl
  unsigned __int8 v20; // r10
  unsigned __int8 v21; // r11
  int v23[4]; // [rsp+50h] [rbp-48h] BYREF
  __int128 v24; // [rsp+60h] [rbp-38h]

  v10 = *a2 + 1;
  *a2 = v10;
  *(_OWORD *)v23 = 0LL;
  v14 = *v10;
  v24 = 0LL;
  if ( v14 == 94 )
  {
    a1 |= 8u;
    v14 = *++v10;
  }
  v15 = HIBYTE(v23[2]);
  if ( v14 == 93 )
    v15 = 32;
  v16 = v10 + 1;
  if ( v14 != 93 )
    v16 = v10;
  HIBYTE(v23[2]) = v15;
  v17 = *v16;
  if ( *v16 != 93 )
  {
    v18 = v14 != 93 ? 0 : 0x5D;
    do
    {
      ++v16;
      if ( v17 == 45 && v18 && (v19 = *v16, *v16 != 93) )
      {
        ++v16;
        v20 = v18;
        v21 = v19;
        if ( v18 >= v19 )
        {
          v21 = v18;
          v20 = v19;
        }
        while ( v20 <= v21 )
        {
          *((_BYTE *)v23 + ((unsigned __int64)v20 >> 3)) |= 1 << (v20 & 7);
          ++v20;
        }
        v18 = 0;
      }
      else
      {
        v18 = v17;
        *((_BYTE *)v23 + ((unsigned __int64)v17 >> 3)) |= 1 << (v17 & 7);
      }
      v17 = *v16;
    }
    while ( *v16 != 93 );
  }
  *a2 = v16;
  return ReadString(a1, (__int64)v23, a3, a4, a5, a6, File, a8, a9);
}
