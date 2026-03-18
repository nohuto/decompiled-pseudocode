/*
 * XREFs of VfPtMmAllocateContiguousMemory_Exit @ 0x140C29FA0
 * Callers:
 *     <none>
 * Callees:
 *     VfEnabledOnKernel @ 0x14047EA30 (VfEnabledOnKernel.c)
 *     VfPtMiscPoolNotification @ 0x14050C738 (VfPtMiscPoolNotification.c)
 */

char __fastcall VfPtMmAllocateContiguousMemory_Exit(__int64 a1)
{
  char result; // al
  __int64 v3; // rcx

  result = VfEnabledOnKernel();
  if ( !result )
  {
    v3 = *(_QWORD *)(a1 + 24);
    if ( v3 )
      return VfPtMiscPoolNotification(v3, *(_QWORD *)(a1 + 16), 0x546E6F43u, 0);
  }
  return result;
}
