/*
 * XREFs of IoMapKsrPersistentMemoryEx @ 0x14079F2A0
 * Callers:
 *     <none>
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PipGetPersistentMemory @ 0x1407A00BC (PipGetPersistentMemory.c)
 */

__int64 __fastcall IoMapKsrPersistentMemoryEx(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  _WORD *v8; // rcx
  __int64 v9; // rcx
  unsigned __int16 *v10; // rdi
  _WORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx

  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  if ( a2 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
    if ( !v6 || (*(_DWORD *)(v6 + 396) & 0x20000) != 0 )
    {
      IoAddTriageDumpDataBlock(a2, (PVOID)*(unsigned __int16 *)(a2 + 2));
      v7 = *(_QWORD *)(a2 + 8);
      if ( v7 )
      {
        IoAddTriageDumpDataBlock(v7, (PVOID)(unsigned int)*(__int16 *)(v7 + 2));
        v8 = (_WORD *)(*(_QWORD *)(a2 + 8) + 56LL);
        if ( *v8 )
        {
          IoAddTriageDumpDataBlock((ULONG)v8, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
        }
      }
      v9 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
      if ( v9 )
      {
        v10 = (unsigned __int16 *)(v9 + 40);
        IoAddTriageDumpDataBlock(v9, (PVOID)0x388);
        if ( *v10 )
        {
          IoAddTriageDumpDataBlock((ULONG)v10, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v10 + 1), (PVOID)*v10);
        }
        v11 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL);
        if ( *v11 )
        {
          IoAddTriageDumpDataBlock((ULONG)v11, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL));
        }
        v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
        if ( v12 )
        {
          if ( *(_WORD *)(v12 + 56) )
          {
            IoAddTriageDumpDataBlock(v12 + 56, (PVOID)2);
            v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v13 + 64), (PVOID)*(unsigned __int16 *)(v13 + 56));
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, a2, 0LL, 0LL);
    }
  }
  if ( PnpKsrEnabled )
    return PipGetPersistentMemory(a1, a2, a3, a4, a5);
  else
    return 3221225659LL;
}
