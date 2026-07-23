/*
 * XREFs of VfPtMmAllocateContiguousMemoryEx_Exit @ 0x140C2FF30
 * Callers:
 *     <none>
 * Callees:
 *     VfEnabledOnKernel @ 0x1404783A0 (VfEnabledOnKernel.c)
 *     VfPtMiscPoolNotification @ 0x1405061A8 (VfPtMiscPoolNotification.c)
 */

char __fastcall VfPtMmAllocateContiguousMemoryEx_Exit(__int64 a1)
{
  __int64 *v2; // rax

  LOBYTE(v2) = VfEnabledOnKernel();
  if ( !(_BYTE)v2 )
  {
    v2 = *(__int64 **)(a1 + 8);
    if ( *v2 )
      LOBYTE(v2) = VfPtMiscPoolNotification(*v2, **(_QWORD **)(a1 + 64), 0x546E6F43u, 0);
  }
  return (char)v2;
}
