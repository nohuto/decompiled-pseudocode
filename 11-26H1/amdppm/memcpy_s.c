/*
 * XREFs of memcpy_s @ 0x140003BF8
 * Callers:
 *     AcpiEval_OSC @ 0x140028B28 (AcpiEval_OSC.c)
 *     AcpiEval_PDC @ 0x1400290A8 (AcpiEval_PDC.c)
 * Callees:
 *     AcpiCStateIdleComplete @ 0x140002EE0 (AcpiCStateIdleComplete.c)
 *     memmove @ 0x14000E740 (memmove.c)
 *     memset @ 0x14000EA40 (memset.c)
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
  AcpiCStateIdleComplete();
  return v8;
}
