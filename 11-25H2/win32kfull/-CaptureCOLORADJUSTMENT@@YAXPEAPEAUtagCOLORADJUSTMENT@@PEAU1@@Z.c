/*
 * XREFs of ?CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z @ 0x1402298B8
 * Callers:
 *     NtGdiEngStretchBlt @ 0x140263F90 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1402644B0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngPlgBlt @ 0x14033BF20 (NtGdiEngPlgBlt.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

void __fastcall CaptureCOLORADJUSTMENT(struct tagCOLORADJUSTMENT **a1, struct tagCOLORADJUSTMENT *a2)
{
  const void *v4; // rdx

  v4 = *a1;
  if ( *a1 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a2, v4, 0x18uLL);
    *a1 = a2;
  }
}
