/*
 * XREFs of VfPtMmAllocateContiguousMemorySpecifyCache_Exit @ 0x140C2FF70
 * Callers:
 *     <none>
 * Callees:
 *     VfEnabledOnKernel @ 0x1404783A0 (VfEnabledOnKernel.c)
 *     VfPtMiscPoolNotification @ 0x1405061A8 (VfPtMiscPoolNotification.c)
 */

char __fastcall VfPtMmAllocateContiguousMemorySpecifyCache_Exit(__int64 a1)
{
  char result; // al
  __int64 v3; // rcx

  result = VfEnabledOnKernel();
  if ( !result )
  {
    v3 = *(_QWORD *)(a1 + 48);
    if ( v3 )
      return VfPtMiscPoolNotification(v3, *(_QWORD *)(a1 + 40), 0x546E6F43u, 0);
  }
  return result;
}
