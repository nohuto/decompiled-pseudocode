/*
 * XREFs of ?BltLnkReadPat1@@YAXPEAEKPEBEKKKK@Z @ 0x140204ED0
 * Callers:
 *     ?BltLnkSrcCopyMsk1@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x140343AE0 (-BltLnkSrcCopyMsk1@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BltLnkReadPat1(
        unsigned __int8 *a1,
        char a2,
        const unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  unsigned int v8; // r9d
  __int64 v9; // r10
  unsigned __int8 v10; // di
  unsigned int v11; // r11d
  char v13; // bp
  char v15; // r14
  unsigned int v16; // edx
  unsigned int v17; // r8d
  int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // ecx

  v6 = a5;
  v8 = a6;
  v9 = a5 & 7;
  v10 = 0;
  v11 = a2 & 7;
  v13 = a2;
  if ( a6 )
  {
    while ( 1 )
    {
      v15 = byte_140371930[v9] & a3[(unsigned __int64)v6 >> 3];
      if ( v11 > (unsigned int)v9 )
      {
        v20 = v8;
        if ( 8 - v11 <= v8 )
          v20 = 8 - v11;
        v17 = a4 - v6;
        if ( v20 <= a4 - v6 )
          v17 = v20;
        v18 = (unsigned __int8)(v15 & byte_140371018[v17 + (unsigned int)v9]) >> (v11 - v9);
      }
      else
      {
        v16 = v8;
        if ( 8 - (int)v9 <= v8 )
          v16 = 8 - v9;
        v17 = a4 - v6;
        if ( v16 <= a4 - v6 )
          v17 = v16;
        v18 = (unsigned __int8)(v15 & byte_140371018[v17 + (unsigned int)v9]) << (v9 - v11);
      }
      v19 = v17 + v6;
      v13 += v17;
      v6 = 0;
      v10 |= v18;
      v8 -= v17;
      if ( v19 != a4 )
        v6 = v19;
      v9 = 0LL;
      if ( v19 != a4 )
        v9 = v19 & 7;
      v11 = v13 & 7;
      if ( (v13 & 7) == 0 || !v8 )
      {
        *a1++ = v10;
        v10 = 0;
        if ( !v8 )
          break;
      }
    }
  }
}
