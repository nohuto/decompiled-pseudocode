/*
 * XREFs of VidSchiStartContextRunningTimeAtISR @ 0x14002BAF0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0piixqq_EtwWriteTransfer @ 0x14002B678 (McTemplateK0piixqq_EtwWriteTransfer.c)
 */

char __fastcall VidSchiStartContextRunningTimeAtISR(LARGE_INTEGER *a1)
{
  LARGE_INTEGER v1; // rdi

  v1 = a1[12];
  a1[57].QuadPart = 0LL;
  if ( *(_DWORD *)(v1.QuadPart + 3020) == 1 )
    a1[59] = KeQueryPerformanceCounter(0LL);
  if ( (byte_14008A201 & 2) != 0 )
    McTemplateK0piixqq_EtwWriteTransfer((unsigned int)a1[55].HighPart, *(_QWORD *)(v1.QuadPart + 2136), a1[56].QuadPart);
  return 1;
}
