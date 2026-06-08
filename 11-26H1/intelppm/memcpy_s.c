/*
 * XREFs of memcpy_s @ 0x140006038
 * Callers:
 *     AcpiEval_PDC @ 0x14002EBD8 (AcpiEval_PDC.c)
 *     AcpiEval_OSC @ 0x140042F0C (AcpiEval_OSC.c)
 * Callees:
 *     AcpiCStateIdleComplete @ 0x140004320 (AcpiCStateIdleComplete.c)
 *     memmove @ 0x140010440 (memmove.c)
 *     memset @ 0x140010740 (memset.c)
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
