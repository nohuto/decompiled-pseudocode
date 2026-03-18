/*
 * XREFs of VfPtMmFreeContiguousMemory_Entry @ 0x140C2A1A0
 * Callers:
 *     <none>
 * Callees:
 *     VfEnabledOnKernel @ 0x14047EA30 (VfEnabledOnKernel.c)
 *     VfPtMiscPoolNotification @ 0x14050C738 (VfPtMiscPoolNotification.c)
 */

char __fastcall VfPtMmFreeContiguousMemory_Entry(__int64 a1)
{
  char result; // al
  __int64 v3; // rcx

  result = VfEnabledOnKernel();
  if ( !result )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( v3 )
      return VfPtMiscPoolNotification(v3, 0LL, 0x546E6F43u, 1);
  }
  return result;
}
