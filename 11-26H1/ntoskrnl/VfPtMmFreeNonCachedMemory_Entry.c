/*
 * XREFs of VfPtMmFreeNonCachedMemory_Entry @ 0x140C30230
 * Callers:
 *     <none>
 * Callees:
 *     VfEnabledOnKernel @ 0x1404783A0 (VfEnabledOnKernel.c)
 *     VfPtMiscPoolNotification @ 0x1405061A8 (VfPtMiscPoolNotification.c)
 */

char __fastcall VfPtMmFreeNonCachedMemory_Entry(__int64 a1)
{
  char result; // al
  __int64 v3; // rcx

  result = VfEnabledOnKernel();
  if ( !result )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
      return VfPtMiscPoolNotification(v3, *(_QWORD *)(a1 + 8), 0x69646D4Du, 1);
  }
  return result;
}
