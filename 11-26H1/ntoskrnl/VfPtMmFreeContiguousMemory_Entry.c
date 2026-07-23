/*
 * XREFs of VfPtMmFreeContiguousMemory_Entry @ 0x140C301B0
 * Callers:
 *     <none>
 * Callees:
 *     VfEnabledOnKernel @ 0x1404783A0 (VfEnabledOnKernel.c)
 *     VfPtMiscPoolNotification @ 0x1405061A8 (VfPtMiscPoolNotification.c)
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
