/*
 * XREFs of ProducerConsumerCopyFromContextBuffer @ 0x140C046B0
 * Callers:
 *     PopDecompressHiberBlocks @ 0x140C002A4 (PopDecompressHiberBlocks.c)
 *     PopReadProducerConsumerBuffer @ 0x140C0127C (PopReadProducerConsumerBuffer.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

void *__fastcall ProducerConsumerCopyFromContextBuffer(char *a1, size_t Size, __int64 a3, char *a4)
{
  __int64 v4; // r10
  unsigned int v5; // r11d
  unsigned int v8; // ecx
  __int64 v9; // rsi
  unsigned int v10; // ebx
  void *result; // rax

  v4 = *(unsigned int *)(a3 + 8);
  v5 = (_DWORD)a4 - *(_DWORD *)a3;
  if ( v5 >= (unsigned int)v4 )
  {
    v5 -= v4;
    a4 -= v4;
  }
  v8 = v5 + Size;
  if ( v5 + (unsigned int)Size > (unsigned int)v4 )
    LODWORD(Size) = v4 - v5;
  v9 = (unsigned int)Size;
  v10 = (unsigned int)v4 < v8 ? v8 - v4 : 0;
  result = memmove(a1, a4, (unsigned int)Size);
  if ( v10 )
    return memmove(&a1[v9], *(const void **)a3, v10);
  return result;
}
