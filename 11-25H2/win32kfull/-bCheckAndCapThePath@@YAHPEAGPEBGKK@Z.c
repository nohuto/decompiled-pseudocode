/*
 * XREFs of ?bCheckAndCapThePath@@YAHPEAGPEBGKK@Z @ 0x1401A2EBC
 * Callers:
 *     NtGdiRemoveFontResourceW @ 0x1401A2AE0 (NtGdiRemoveFontResourceW.c)
 *     NtGdiAddFontResourceW @ 0x1401A2CA0 (NtGdiAddFontResourceW.c)
 *     NtGdiGetFontResourceInfoInternalW @ 0x140339B00 (NtGdiGetFontResourceInfoInternalW.c)
 * Callees:
 *     ?cCapString@@YAJPEAGPEBGH@Z @ 0x1400B7BF0 (-cCapString@@YAJPEAGPEBGH@Z.c)
 */

__int64 __fastcall bCheckAndCapThePath(unsigned __int16 *a1, WCHAR *a2, unsigned int a3, int a4)
{
  unsigned int v5; // ebx
  __int64 v7; // r14
  unsigned __int16 *v8; // rdi
  int v9; // esi

  v5 = 0;
  v7 = a3;
  v8 = a1;
  v9 = 1;
  if ( !a2[a3 - 1] )
  {
    cCapString(a1, a2, a3);
    if ( a3 )
    {
      do
      {
        if ( *v8 == 124 )
        {
          *v8 = 0;
          ++v9;
        }
        ++v8;
        --v7;
      }
      while ( v7 );
    }
    LOBYTE(v5) = a4 == v9;
  }
  return v5;
}
