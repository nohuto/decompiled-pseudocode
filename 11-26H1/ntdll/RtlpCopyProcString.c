/*
 * XREFs of RtlpCopyProcString @ 0x18009EA54
 * Callers:
 *     RtlCreateProcessParametersInternal @ 0x18009E510 (RtlCreateProcessParametersInternal.c)
 * Callees:
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

char *__fastcall RtlpCopyProcString(void **a1, __int64 a2, unsigned __int16 *a3, unsigned int a4)
{
  __int64 v5; // rbx
  const void *v6; // rdx
  char *v9; // rdi
  __int64 v10; // rax
  char *result; // rax

  v5 = a4;
  v6 = (const void *)*((_QWORD *)a3 + 1);
  if ( v6 && *a3 )
    memmove(*a1, v6, *a3);
  v9 = (char *)*a1;
  *(_QWORD *)(a2 + 8) = *a1;
  v10 = *a3;
  *(_WORD *)a2 = v10;
  *(_WORD *)(a2 + 2) = v5;
  if ( (unsigned __int16)v10 < (unsigned __int16)v5 )
    memset_thunk_772440563353939046(&v9[v10], 0, (unsigned __int16)v5 - v10);
  result = &v9[(v5 + 7) & 0xFFFFFFFFFFFFFFF8uLL];
  *a1 = result;
  return result;
}
