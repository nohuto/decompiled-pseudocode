/*
 * XREFs of IoGetKsrPersistentMemoryBuffer @ 0x14079F220
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall IoGetKsrPersistentMemoryBuffer(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v4; // r9d
  _QWORD *v5; // rdx

  v4 = 0;
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  if ( *(_DWORD *)a1 == 2 || *(_DWORD *)a1 == 1 )
  {
    if ( a3 )
    {
      if ( a2 )
      {
        v5 = *(_QWORD **)(a1 + 40);
        *a3 = *v5;
        *a2 = v5 + 1;
      }
      else
      {
        return (unsigned int)-1073741583;
      }
    }
    else
    {
      return (unsigned int)-1073741584;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v4;
}
