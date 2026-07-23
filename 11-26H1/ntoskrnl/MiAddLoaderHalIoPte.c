/*
 * XREFs of MiAddLoaderHalIoPte @ 0x140CF7890
 * Callers:
 *     <none>
 * Callees:
 *     MiReferenceIoPages @ 0x1402D2018 (MiReferenceIoPages.c)
 */

__int64 __fastcall MiAddLoaderHalIoPte(__int64 a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // r9d

  v3 = *a2;
  if ( (*a2 & 1) != 0 )
  {
    v5 = (v3 >> 12) & 0xFFFFFFFFFFLL;
    if ( v5 > qword_140E2D920 || ((*(_QWORD *)(48 * v5 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
    {
      if ( (v3 & 0x80u) == 0LL )
      {
        v6 = 1LL;
      }
      else
      {
        v6 = 512LL;
        if ( a3 > 1 )
        {
          v7 = (unsigned int)(a3 - 1);
          do
          {
            v6 <<= 9;
            --v7;
          }
          while ( v7 );
        }
      }
      if ( (v3 & 0x18) == 8 )
        v8 = 2;
      else
        v8 = (v3 & 0x10) == 0;
      MiReferenceIoPages(1u, v5, v6, v8, 0LL, 0LL);
    }
  }
  return 0LL;
}
