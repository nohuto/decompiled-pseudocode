/*
 * XREFs of RtlCopyBitMap @ 0x14048CE30
 * Callers:
 *     HvpGrowDirtyVectors @ 0x14048CC48 (HvpGrowDirtyVectors.c)
 *     MiChangePagingFileMaximum @ 0x1406FD580 (MiChangePagingFileMaximum.c)
 *     Xp10ExecuteHuffmanEncode @ 0x14081277C (Xp10ExecuteHuffmanEncode.c)
 *     VmRegisterFeatureBitmap @ 0x140821EB0 (VmRegisterFeatureBitmap.c)
 *     PspQueryRateControlHistory @ 0x140A856AC (PspQueryRateControlHistory.c)
 *     PopSaveHiberContext @ 0x140C01D50 (PopSaveHiberContext.c)
 * Callees:
 *     RtlpCopyBitMapTailToHead @ 0x14048D044 (RtlpCopyBitMapTailToHead.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

void __cdecl RtlCopyBitMap(PRTL_BITMAP Source, PRTL_BITMAP Destination, ULONG TargetBit)
{
  unsigned __int64 SizeOfBitMap; // rbx
  unsigned int *Buffer; // rcx
  unsigned int *v8; // r11
  unsigned int *v9; // r8
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  size_t v13; // rdi
  char *v14; // r9
  __int64 v15; // r9
  unsigned __int64 v16; // r14
  int v17; // ebp
  int v18; // esi
  unsigned __int64 v19; // rdi
  int v20; // r12d
  int v21; // ebp
  unsigned __int64 v22; // r15
  int v23; // esi
  unsigned int v24; // r12d
  unsigned int v25; // ebx
  int v26; // r15d

  SizeOfBitMap = Destination->SizeOfBitMap - TargetBit;
  if ( Source->SizeOfBitMap <= (unsigned int)SizeOfBitMap )
    SizeOfBitMap = Source->SizeOfBitMap;
  if ( SizeOfBitMap )
  {
    Buffer = Destination->Buffer;
    v8 = Source->Buffer;
    v9 = &Buffer[(unsigned __int64)TargetBit >> 5];
    if ( v8 <= v9 && v9 <= &v8[(SizeOfBitMap - 1) >> 5] )
    {
      RtlpCopyBitMapTailToHead(Source, Destination, TargetBit, (unsigned int)SizeOfBitMap);
      return;
    }
    v10 = (unsigned __int64)TargetBit >> 3;
    if ( (TargetBit & 7) != 0 )
    {
      v15 = TargetBit & 0x1F;
      v16 = 32 - v15;
      v17 = 1 << (32 - v15);
      v18 = 1 << v15;
      if ( SizeOfBitMap >= 0x20 )
      {
        v20 = *v9;
        v21 = v17 - 1;
        v22 = SizeOfBitMap >> 5;
        v23 = v18 - 1;
        v19 = SizeOfBitMap - 32 * (SizeOfBitMap >> 5);
        do
        {
          *v9++ = v20 & v23 | ((*v8 & v21) << v15);
          v24 = (*v8++ & ~v21) >> v16;
          v20 = *v9 & -(1 << v15) | v24;
          *v9 = v20;
          --v22;
        }
        while ( v22 );
        v18 = 1 << v15;
        v17 = 1 << (32 - v15);
        if ( !v19 )
          return;
      }
      else
      {
        v19 = SizeOfBitMap;
      }
      v25 = *v8;
      v26 = *v9;
      if ( v19 > v16 )
      {
        *v9 = v26 & (v18 - 1) | ((v25 & (v17 - 1)) << v15);
        v9[1] = v9[1] & ~((1 << (v19 + v15 - 32)) - 1) | ((*v8 & (((1 << (v19 + v15 - 32)) - 1) << v16)) >> v16);
      }
      else
      {
        *v9 = ((v25 & ((1 << v19) - 1)) << v15) | v26 & ~(((1 << v19) - 1) << v15);
      }
      return;
    }
    v11 = SizeOfBitMap;
    v12 = SizeOfBitMap & 7;
    v13 = v11 >> 3;
    if ( v13 )
      memmove((char *)Buffer + v10, Source->Buffer, v13);
    if ( v12 )
    {
      v14 = (char *)Destination->Buffer + v10;
      v14[v13] &= ~((1 << v12) - 1);
      v14[v13] |= ((1 << v12) - 1) & *((_BYTE *)Source->Buffer + v13);
    }
  }
}
