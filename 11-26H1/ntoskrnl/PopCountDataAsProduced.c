/*
 * XREFs of PopCountDataAsProduced @ 0x140BFA088
 * Callers:
 *     PopCompressHiberBlocks @ 0x140BF9F94 (PopCompressHiberBlocks.c)
 *     PopWriteHiberImage @ 0x140BFCAD4 (PopWriteHiberImage.c)
 * Callees:
 *     ProducerBufferComplete @ 0x140BFE360 (ProducerBufferComplete.c)
 *     ProducerConsumerCopyToContextBuffer @ 0x140BFE534 (ProducerConsumerCopyToContextBuffer.c)
 *     ProducerGetBuffer @ 0x140BFE5C8 (ProducerGetBuffer.c)
 */

char __fastcall PopCountDataAsProduced(__int64 a1, void *a2, _DWORD *a3, void *a4, int a5, unsigned int a6)
{
  void *v7; // rdi
  unsigned int v11; // ebp
  unsigned int v12; // r14d
  __int64 Buffer; // rsi
  char result; // al
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax

  v7 = qword_140F0FE08;
  v11 = 8 * (unsigned __int8)*a3;
  v12 = ((*a3 >> 8) & 0x1FFFFF) + v11;
  Buffer = ProducerGetBuffer(qword_140F0FE08, v12 + 4, a6);
  result = 0;
  if ( Buffer )
  {
    ProducerConsumerCopyToContextBuffer(a3, 4uLL);
    ProducerConsumerCopyToContextBuffer(a4, v11);
    ProducerConsumerCopyToContextBuffer(a2, (*a3 >> 8) & 0x1FFFFF);
    v15 = __rdtsc();
    ProducerBufferComplete(v7, Buffer, v12 + 4, (unsigned int)(a5 << 12));
    v16 = __rdtsc();
    *(_QWORD *)(a1 + 80) += (((unsigned __int64)HIDWORD(v16) << 32) | (unsigned int)v16) - v15;
    return 1;
  }
  return result;
}
