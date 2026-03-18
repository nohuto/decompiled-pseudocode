/*
 * XREFs of ?bCheckAndCapThePath@@YAHPEAGPEBGKK@Z @ 0x1401045EC
 * Callers:
 *     NtGdiAddFontResourceW @ 0x1401043D0 (NtGdiAddFontResourceW.c)
 *     NtGdiRemoveFontResourceW @ 0x1401060F0 (NtGdiRemoveFontResourceW.c)
 *     NtGdiGetFontResourceInfoInternalW @ 0x140241A00 (NtGdiGetFontResourceInfoInternalW.c)
 * Callees:
 *     ?cCapString@@YAJPEAGPEBGH@Z @ 0x140103F00 (-cCapString@@YAJPEAGPEBGH@Z.c)
 */

__int64 __fastcall bCheckAndCapThePath(unsigned __int16 *a1, unsigned __int16 *a2, unsigned int a3, int a4)
{
  __int64 v7; // r14
  int v8; // esi
  unsigned int v10; // ebx

  v7 = a3;
  v8 = 1;
  GreProbeForReadFromUntrustedVa(a2, 2LL * a3, 1uLL);
  v10 = 0;
  if ( !a2[a3 - 1] )
  {
    cCapString(a1, a2, a3);
    if ( a3 )
    {
      do
      {
        if ( *a1 == 124 )
        {
          *a1 = 0;
          ++v8;
        }
        ++a1;
        --v7;
      }
      while ( v7 );
    }
    LOBYTE(v10) = a4 == v8;
  }
  return v10;
}
