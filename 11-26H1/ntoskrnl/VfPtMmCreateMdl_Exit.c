/*
 * XREFs of VfPtMmCreateMdl_Exit @ 0x140C30170
 * Callers:
 *     <none>
 * Callees:
 *     VfEnabledOnKernel @ 0x1404783A0 (VfEnabledOnKernel.c)
 *     VfPtMiscPoolNotification @ 0x1405061A8 (VfPtMiscPoolNotification.c)
 */

char __fastcall VfPtMmCreateMdl_Exit(__int64 a1)
{
  char result; // al
  __int64 v3; // rcx

  result = VfEnabledOnKernel();
  if ( !result )
  {
    v3 = *(_QWORD *)(a1 + 32);
    if ( v3 )
      return VfPtMiscPoolNotification(v3, *(__int16 *)(v3 + 8), 0x6C646D4Du, 0);
  }
  return result;
}
