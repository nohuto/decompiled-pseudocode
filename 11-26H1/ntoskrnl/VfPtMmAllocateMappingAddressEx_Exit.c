/*
 * XREFs of VfPtMmAllocateMappingAddressEx_Exit @ 0x140C2FFF0
 * Callers:
 *     <none>
 * Callees:
 *     VfEnabledOnKernel @ 0x1404783A0 (VfEnabledOnKernel.c)
 *     VfPtMiscPoolNotification @ 0x1405061A8 (VfPtMiscPoolNotification.c)
 */

char __fastcall VfPtMmAllocateMappingAddressEx_Exit(__int64 a1)
{
  char result; // al
  __int64 v3; // rcx

  result = VfEnabledOnKernel();
  if ( !result )
  {
    v3 = *(_QWORD *)(a1 + 24);
    if ( v3 )
      return VfPtMiscPoolNotification(v3, *(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 12), 0);
  }
  return result;
}
