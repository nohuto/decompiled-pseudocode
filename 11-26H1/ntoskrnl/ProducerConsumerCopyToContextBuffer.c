/*
 * XREFs of ProducerConsumerCopyToContextBuffer @ 0x140C0473C
 * Callers:
 *     PopCountDataAsProduced @ 0x140C00088 (PopCountDataAsProduced.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

void *__fastcall ProducerConsumerCopyToContextBuffer(char *Src, size_t Size, __int64 a3, char *a4)
{
  __int64 v4; // r11
  char *v7; // rcx
  unsigned int v8; // r8d
  __int64 v9; // rdi
  unsigned int v10; // ebx
  void *result; // rax

  v4 = *(unsigned int *)(a3 + 8);
  v7 = &a4[-v4];
  if ( (unsigned __int64)a4 < v4 + *(_QWORD *)a3 )
    v7 = a4;
  v8 = Size + (_DWORD)v7 - *(_DWORD *)a3;
  if ( v8 > (unsigned int)v4 )
    LODWORD(Size) = v4 - v8 + Size;
  v9 = (unsigned int)Size;
  v10 = (unsigned int)v4 < v8 ? v8 - v4 : 0;
  result = memmove(v7, Src, (unsigned int)Size);
  if ( v10 )
    return memmove(*(void **)a3, &Src[v9], v10);
  return result;
}
