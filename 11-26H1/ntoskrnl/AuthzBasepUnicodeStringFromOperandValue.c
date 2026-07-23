/*
 * XREFs of AuthzBasepUnicodeStringFromOperandValue @ 0x1404600D0
 * Callers:
 *     AuthzBasepCompareFQBNOperands @ 0x14045FD34 (AuthzBasepCompareFQBNOperands.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall AuthzBasepUnicodeStringFromOperandValue(__int64 a1, char a2, unsigned __int16 *a3, _BYTE *a4)
{
  unsigned int v4; // r15d
  unsigned __int16 v9; // dx
  __int64 v10; // rax
  ULONG_PTR v11; // rcx
  void *Pool2; // rax
  size_t v13; // r8
  const void *v14; // rdx
  unsigned int v16; // ebx
  __int64 v17; // rdi
  unsigned __int16 *v18; // rdx

  v4 = 0;
  *a4 = 0;
  if ( *(_DWORD *)(a1 + 12) == 1 )
  {
    a3[1] = *(_WORD *)(a1 + 24);
    v9 = *(_WORD *)(a1 + 24);
    *a3 = v9;
    v10 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    a3[1] = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL) + 2LL);
    v9 = **(_WORD **)(*(_QWORD *)(a1 + 16) + 48LL);
    *a3 = v9;
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL) + 8LL);
  }
  *((_QWORD *)a3 + 1) = v10;
  if ( !v9 || !v10 )
    return (unsigned int)-1073741406;
  if ( (*(_DWORD *)(a1 + 12) != 1 || (*(_BYTE *)(a1 + 32) & 1) == 0) && !a2 )
    return v4;
  v11 = 256LL;
  if ( KeGetCurrentIrql() >= 2u )
    v11 = 64LL;
  Pool2 = (void *)ExAllocatePool2(v11);
  *((_QWORD *)a3 + 1) = Pool2;
  if ( Pool2 )
  {
    if ( *(_DWORD *)(a1 + 12) == 1 )
    {
      v13 = *(unsigned int *)(a1 + 24);
      v14 = *(const void **)(a1 + 32);
    }
    else
    {
      v18 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 16) + 48LL);
      v13 = *v18;
      v14 = (const void *)*((_QWORD *)v18 + 1);
    }
    memmove(Pool2, v14, v13);
    *a4 = 1;
    if ( a2 )
    {
      v16 = 0;
      if ( (*a3 & 0xFFFE) != 0 )
      {
        do
        {
          v17 = 2LL * v16++;
          *(_WORD *)(v17 + *((_QWORD *)a3 + 1)) = RtlUpcaseUnicodeChar(*(_WORD *)(*((_QWORD *)a3 + 1) + v17));
        }
        while ( v16 < *a3 >> 1 );
      }
    }
    return v4;
  }
  return 3221225495LL;
}
