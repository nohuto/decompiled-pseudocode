/*
 * XREFs of RtlDecompressChunks @ 0x140806F40
 * Callers:
 *     <none>
 * Callees:
 *     RtlDecompressBuffer @ 0x14048E660 (RtlDecompressBuffer.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

NTSTATUS __stdcall RtlDecompressChunks(
        PUCHAR UncompressedBuffer,
        ULONG UncompressedBufferSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        PUCHAR CompressedTail,
        ULONG CompressedTailSize,
        PCOMPRESSED_DATA_INFO CompressedDataInfo)
{
  ULONG v7; // r12d
  PUCHAR v8; // rbp
  UCHAR *v11; // r13
  int NumberOfChunks; // ebx
  unsigned int v13; // edx
  ULONG *CompressedChunkSizes; // r14
  __int64 v15; // rdi
  ULONG v16; // eax
  PUCHAR v17; // rbx
  char *v18; // rax
  NTSTATUS result; // eax
  __int64 v20; // rax
  unsigned int v21; // [rsp+30h] [rbp-48h]
  ULONG FinalUncompressedSize; // [rsp+80h] [rbp+8h] BYREF
  int v23; // [rsp+88h] [rbp+10h]

  v7 = UncompressedBufferSize;
  v8 = UncompressedBuffer;
  FinalUncompressedSize = 0;
  v11 = &UncompressedBuffer[UncompressedBufferSize];
  NumberOfChunks = CompressedDataInfo->NumberOfChunks;
  v13 = 1 << CompressedDataInfo->ChunkShift;
  v23 = NumberOfChunks;
  v21 = v13;
  if ( v11 >= UncompressedBuffer )
  {
    CompressedChunkSizes = CompressedDataInfo->CompressedChunkSizes;
    while ( 1 )
    {
      v15 = v7;
      if ( v7 >= v13 )
        v15 = v13;
      if ( NumberOfChunks && (v16 = *CompressedChunkSizes) != 0 )
      {
        if ( v16 == v13 )
        {
          if ( (unsigned int)v15 < CompressedBufferSize )
          {
            memmove(v8, CompressedBuffer, (unsigned int)v15);
          }
          else
          {
            if ( !CompressedTailSize && (unsigned int)v15 > CompressedBufferSize )
              return -1073741246;
            memmove(v8, CompressedBuffer, CompressedBufferSize);
            memmove(&v8[CompressedBufferSize], CompressedTail, (unsigned int)v15 - CompressedBufferSize);
            CompressedBuffer = &CompressedTail[-CompressedBufferSize];
            NumberOfChunks = v23;
            CompressedBufferSize += CompressedTailSize;
            CompressedTailSize = 0;
          }
        }
        else
        {
          if ( v16 > CompressedBufferSize )
          {
            if ( !CompressedTailSize )
              return -1073741246;
            v17 = &v8[v7 - (unsigned __int64)v13];
            v18 = (char *)&v17[CompressedBufferSize];
            if ( v18 < (char *)v17 )
              return -1073741811;
            if ( v17 < v8 || v18 > (char *)v11 )
              return -1073741246;
            memmove(v17, CompressedBuffer, CompressedBufferSize);
            memmove(&v17[CompressedBufferSize], CompressedTail, *CompressedChunkSizes - CompressedBufferSize);
            CompressedBuffer = v17;
            NumberOfChunks = v23;
          }
          result = RtlDecompressBuffer(
                     CompressedDataInfo->CompressionFormatAndEngine,
                     v8,
                     v15,
                     CompressedBuffer,
                     *CompressedChunkSizes,
                     &FinalUncompressedSize);
          if ( result < 0 )
            return result;
          if ( (unsigned int)v15 > FinalUncompressedSize )
            memset_0(&v8[FinalUncompressedSize], 0, (unsigned int)v15 - FinalUncompressedSize);
          if ( *CompressedChunkSizes >= CompressedBufferSize )
          {
            CompressedBuffer = &CompressedTail[-CompressedBufferSize];
            CompressedBufferSize += CompressedTailSize;
            CompressedTailSize = 0;
          }
        }
      }
      else
      {
        if ( &v8[v15] > v11 )
          return -1073741246;
        memset_0(v8, 0, (unsigned int)v15);
        if ( !NumberOfChunks )
        {
          NumberOfChunks = 1;
          --CompressedChunkSizes;
        }
      }
      v8 += (unsigned int)v15;
      if ( v8 > v11 || (unsigned int)v15 > v7 )
        return -1073741246;
      v20 = *CompressedChunkSizes;
      --NumberOfChunks;
      CompressedBuffer += v20;
      v23 = NumberOfChunks;
      CompressedBufferSize -= v20;
      ++CompressedChunkSizes;
      v7 -= v15;
      if ( !v7 )
        return 0;
      v13 = v21;
    }
  }
  return -1073741811;
}
