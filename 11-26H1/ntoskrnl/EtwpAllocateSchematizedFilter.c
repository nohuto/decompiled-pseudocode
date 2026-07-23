/*
 * XREFs of EtwpAllocateSchematizedFilter @ 0x1408382F4
 * Callers:
 *     EtwpAllocateFilter @ 0x140AA2CB4 (EtwpAllocateFilter.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpAllocateSchematizedFilter(__int64 a1, _QWORD *a2)
{
  _DWORD *Pool2; // rax
  _DWORD *v5; // rdi
  __int64 result; // rax
  unsigned int v7; // ebx

  if ( *a2 || (unsigned int)(*(_DWORD *)(a1 + 8) - 24) > 0x3E8 )
    return 3221225485LL;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v7 = *(_DWORD *)(a1 + 8);
  memmove(Pool2, *(const void **)a1, v7);
  v5[4] = v7;
  result = 0LL;
  v5[5] = 0;
  *a2 = v5;
  return result;
}
