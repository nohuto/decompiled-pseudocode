/*
 * XREFs of AppendCondition @ 0x140A70CB4
 * Callers:
 *     LocalGetConditionForString @ 0x140A70494 (LocalGetConditionForString.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     SddlpAlloc @ 0x140A6F758 (SddlpAlloc.c)
 */

__int64 __fastcall AppendCondition(const void **a1, unsigned int *a2, unsigned int *a3, const void *a4, size_t Size)
{
  unsigned int v5; // edi
  unsigned int v9; // ebp
  unsigned int v10; // ebx
  PVOID v12; // rax
  PVOID v13; // r13
  void *v14; // rbx

  v5 = 0;
  if ( a1 && a2 && a3 )
  {
    v9 = *a3 + Size;
    if ( v9 < *a3 )
    {
      return 534;
    }
    else
    {
      if ( v9 > *a2 )
      {
        v12 = SddlpAlloc(v9);
        v13 = v12;
        if ( !v12 )
          return 8;
        v14 = (void *)*a1;
        memmove(v12, *a1, *a2);
        SddlpFree(v14);
        *a1 = v13;
        *a2 = v9;
      }
      v10 = *a3;
      memmove((char *)*a1 + *a3, a4, (unsigned int)Size);
      *a3 = v10 + Size;
    }
    return v5;
  }
  return 87LL;
}
