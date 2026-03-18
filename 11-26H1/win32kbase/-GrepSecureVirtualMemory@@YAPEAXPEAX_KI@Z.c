/*
 * XREFs of ?GrepSecureVirtualMemory@@YAPEAXPEAX_KI@Z @ 0x140163ED0
 * Callers:
 *     EngAllocUserMemEx @ 0x140163CF8 (EngAllocUserMemEx.c)
 *     GdiProcessCallout @ 0x1401ADA20 (GdiProcessCallout.c)
 *     EngSecureMem @ 0x1401F07D0 (EngSecureMem.c)
 * Callees:
 *     <none>
 */

HANDLE __fastcall GrepSecureVirtualMemory(void *a1, SIZE_T a2, ULONG a3)
{
  if ( a2 )
    return MmSecureVirtualMemory(a1, a2, a3);
  else
    return 0LL;
}
