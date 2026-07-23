/*
 * XREFs of ?SmStoreCompressCompleteCompressedChunks@@YAJPEAU_SM_COMPRESSED_PAGE_HEADER@@PEAKK1@Z @ 0x14064291C
 * Callers:
 *     SmStoreCompressBuffer @ 0x14024CEF0 (SmStoreCompressBuffer.c)
 *     SmStoreCompletePendingCompress @ 0x140642E74 (SmStoreCompletePendingCompress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmStoreCompressCompleteCompressedChunks(
        struct _SM_COMPRESSED_PAGE_HEADER *a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int *a4)
{
  unsigned int v4; // r11d
  unsigned int v5; // r10d
  unsigned int i; // ebx

  v4 = 0;
  v5 = 2 * (a3 - 1);
  for ( i = 0; i < a3; a1 = (struct _SM_COMPRESSED_PAGE_HEADER *)((char *)a1 + 2) )
  {
    if ( i != a3 - 1 )
      *(_WORD *)a1 = *(_WORD *)a2;
    v5 += *a2;
    ++i;
    ++a2;
  }
  if ( v5 < 0xF80 )
    *a4 = v5;
  else
    return (unsigned int)-1073741789;
  return v4;
}
