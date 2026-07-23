/*
 * XREFs of IoWriteKsrPersistentMemory @ 0x14079FC30
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall IoWriteKsrPersistentMemory(__int64 a1, const void *a2, size_t a3)
{
  unsigned int v4; // ebx
  size_t *v5; // rdx

  v4 = 0;
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  if ( *(_DWORD *)a1 == 2 || *(_DWORD *)a1 == 1 )
  {
    v5 = *(size_t **)(a1 + 40);
    if ( a3 <= *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) )
    {
      *v5 = a3;
      memmove(v5 + 1, a2, a3);
    }
    else
    {
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v4;
}
