/*
 * XREFs of memcpy_s @ 0x140001510
 * Callers:
 *     HUBACPI_EvaluateDsmMethod @ 0x14008E290 (HUBACPI_EvaluateDsmMethod.c)
 *     HUBACPI_ExecuteDSM @ 0x14008E7E8 (HUBACPI_ExecuteDSM.c)
 * Callees:
 *     HUBFDO_GetPortStatusForDebuggingComplete @ 0x14000E3C0 (HUBFDO_GetPortStatusForDebuggingComplete.c)
 *     memmove @ 0x1400468C0 (memmove.c)
 *     memset @ 0x140046BC0 (memset.c)
 */

errno_t __cdecl memcpy_s(void *a1, rsize_t DstSize, const void *Src, rsize_t MaxCount)
{
  errno_t v8; // ebx

  if ( !MaxCount )
    return 0;
  if ( !a1 )
    goto LABEL_11;
  if ( Src && DstSize >= MaxCount )
  {
    memmove(a1, Src, MaxCount);
    return 0;
  }
  memset(a1, 0, DstSize);
  if ( Src )
  {
    if ( DstSize >= MaxCount )
      return 22;
    v8 = 34;
  }
  else
  {
LABEL_11:
    v8 = 22;
  }
  HUBFDO_GetPortStatusForDebuggingComplete(0LL, 0LL, 0LL, 0LL, 0LL);
  return v8;
}
