/*
 * XREFs of StorpPopulateErrorData @ 0x140082D48
 * Callers:
 *     StorpMarkDeviceFailed @ 0x14007CEEC (StorpMarkDeviceFailed.c)
 * Callees:
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

void *__fastcall StorpPopulateErrorData(
        __int128 *a1,
        char a2,
        const void **a3,
        __int64 a4,
        __int16 a5,
        __int16 a6,
        _BYTE *Src,
        _BYTE *a8,
        size_t Size,
        void *a10)
{
  size_t v13; // r8
  unsigned __int64 v14; // rax
  size_t v15; // r8
  unsigned __int64 v16; // rax
  size_t v17; // r8
  void *result; // rax
  unsigned int v19; // eax

  memset_0(&unk_140172845, 0, 0x44FuLL);
  WheaErrorData = 0x54524F50524F5453LL;
  word_140172838 = 1;
  word_14017283C = Size;
  word_140172840 = 1;
  word_14017283A = Size + 98;
  v13 = 32LL;
  word_14017283E = a6;
  word_140172842 = a5;
  byte_140172844 = a2;
  xmmword_140172848 = *a1;
  if ( *(_WORD *)a3 <= 0x20u )
    v13 = *(unsigned __int16 *)a3;
  memmove(&unk_140172858, a3[1], v13);
  v14 = -1LL;
  do
    ++v14;
  while ( Src[v14] );
  v15 = 8LL;
  if ( v14 <= 8 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( Src[v15] );
  }
  memmove(&unk_140172878, Src, v15);
  v16 = -1LL;
  do
    ++v16;
  while ( a8[v16] );
  v17 = 16LL;
  if ( v16 <= 0x10 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a8[v17] );
  }
  result = memmove(&unk_140172881, a8, v17);
  if ( a10 )
  {
    v19 = 1024;
    if ( (unsigned int)Size <= 0x400 )
      v19 = Size;
    return memmove(&unk_140172892, a10, v19);
  }
  return result;
}
