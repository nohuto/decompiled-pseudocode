/*
 * XREFs of HvpFillFileName @ 0x140AC4DEC
 * Callers:
 *     HvHiveStartFileBacked @ 0x140AC430C (HvHiveStartFileBacked.c)
 *     HvHiveStartMemoryBacked @ 0x140B4A534 (HvHiveStartMemoryBacked.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall HvpFillFileName(__int64 a1, unsigned __int16 *a2)
{
  void *v2; // rdi
  void *result; // rax
  unsigned int v5; // ecx
  int v6; // eax
  size_t v7; // r8

  v2 = (void *)(a1 + 48);
  result = memset_0((void *)(a1 + 48), 0, 0x40uLL);
  v5 = 0;
  if ( a2 )
  {
    v6 = *a2;
    if ( (unsigned __int16)v6 >= 0x40u )
    {
      v7 = 62LL;
      v5 = v6 - 62;
    }
    else
    {
      v7 = *a2;
    }
    return memmove(v2, (const void *)(*((_QWORD *)a2 + 1) + v5), v7);
  }
  return result;
}
