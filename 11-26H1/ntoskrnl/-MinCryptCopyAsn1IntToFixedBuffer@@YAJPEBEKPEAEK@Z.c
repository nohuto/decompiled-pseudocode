/*
 * XREFs of ?MinCryptCopyAsn1IntToFixedBuffer@@YAJPEBEKPEAEK@Z @ 0x140721548
 * Callers:
 *     MinCryptVerifySignedHash2 @ 0x1408A68C0 (MinCryptVerifySignedHash2.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MinCryptCopyAsn1IntToFixedBuffer(
        const unsigned __int8 *Src,
        size_t Size,
        unsigned __int8 *a3,
        unsigned int a4)
{
  __int64 v4; // rbp
  unsigned int v6; // ebx
  unsigned int v8; // edi

  v4 = a4;
  v6 = Size;
  v8 = 0;
  while ( v6 > a4 )
  {
    if ( *Src )
      return (unsigned int)-1073740760;
    ++Src;
    --v6;
  }
  if ( v6 < a4 )
    memset_0(a3, 0, a4 - v6);
  memmove(&a3[v4 - v6], Src, v6);
  return v8;
}
