/*
 * XREFs of RtlWriteNonVolatileMemory @ 0x1404C5AC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFlushNonVolatileMemory @ 0x14052F1E0 (RtlFlushNonVolatileMemory.c)
 *     RtlCopyMemoryNonTemporal @ 0x140730E40 (RtlCopyMemoryNonTemporal.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

__int64 __fastcall RtlWriteNonVolatileMemory(__int64 a1, void *a2, const void *a3, size_t a4, __int16 a5)
{
  BOOL v5; // ebx

  v5 = 0;
  if ( (a1 & 1) != 0 )
  {
    if ( (a5 & 3) == 1 )
    {
      v5 = (a5 & 0x100) != 0;
    }
    else
    {
      if ( (a5 & 2) == 0 )
      {
        memmove(a2, a3, a4);
        return v5;
      }
      if ( a4 >= 8 )
      {
        RtlCopyMemoryNonTemporal(a2, a3, a4);
        return v5;
      }
    }
    memmove(a2, a3, a4);
    return (BOOL)RtlFlushNonVolatileMemory(a1, a2, a4, v5);
  }
  return 3221225485LL;
}
