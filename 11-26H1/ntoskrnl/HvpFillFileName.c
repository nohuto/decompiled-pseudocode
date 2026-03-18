/*
 * XREFs of HvpFillFileName @ 0x140AC2D4C
 * Callers:
 *     HvHiveStartFileBacked @ 0x140AC226C (HvHiveStartFileBacked.c)
 *     HvHiveStartMemoryBacked @ 0x140B487A4 (HvHiveStartMemoryBacked.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
