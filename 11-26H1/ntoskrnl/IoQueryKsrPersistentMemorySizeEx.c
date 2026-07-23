/*
 * XREFs of IoQueryKsrPersistentMemorySizeEx @ 0x14079F4B0
 * Callers:
 *     IoQueryKsrPersistentMemorySize @ 0x14079F480 (IoQueryKsrPersistentMemorySize.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PipGetPersistentMemory @ 0x1407A00BC (PipGetPersistentMemory.c)
 */

__int64 __fastcall IoQueryKsrPersistentMemorySizeEx(
        __int64 a1,
        ULONG_PTR a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  _WORD *v9; // rcx
  __int64 v10; // rcx
  unsigned __int16 *v11; // rdi
  _WORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 result; // rax

  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  if ( a2 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
    if ( !v7 || (*(_DWORD *)(v7 + 396) & 0x20000) != 0 )
    {
      IoAddTriageDumpDataBlock(a2, (PVOID)*(unsigned __int16 *)(a2 + 2));
      v8 = *(_QWORD *)(a2 + 8);
      if ( v8 )
      {
        IoAddTriageDumpDataBlock(v8, (PVOID)(unsigned int)*(__int16 *)(v8 + 2));
        v9 = (_WORD *)(*(_QWORD *)(a2 + 8) + 56LL);
        if ( *v9 )
        {
          IoAddTriageDumpDataBlock((ULONG)v9, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
        }
      }
      v10 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
      if ( v10 )
      {
        v11 = (unsigned __int16 *)(v10 + 40);
        IoAddTriageDumpDataBlock(v10, (PVOID)0x388);
        if ( *v11 )
        {
          IoAddTriageDumpDataBlock((ULONG)v11, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v11 + 1), (PVOID)*v11);
        }
        v12 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL);
        if ( *v12 )
        {
          IoAddTriageDumpDataBlock((ULONG)v12, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL));
        }
        v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
        if ( v13 )
        {
          if ( *(_WORD *)(v13 + 56) )
          {
            IoAddTriageDumpDataBlock(v13 + 56, (PVOID)2);
            v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v14 + 64), (PVOID)*(unsigned __int16 *)(v14 + 56));
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, a2, 0LL, 0LL);
    }
  }
  *a6 = 0LL;
  result = PipGetPersistentMemory(a1, a2, a3, a4, a5);
  if ( (_DWORD)result == -1073741789 && *a6 )
    return 0LL;
  return result;
}
