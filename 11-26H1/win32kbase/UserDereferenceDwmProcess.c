/*
 * XREFs of UserDereferenceDwmProcess @ 0x1400B3390
 * Callers:
 *     ?CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ @ 0x1400B2C30 (-CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ.c)
 *     OpenDwmHandle @ 0x1400B2D14 (OpenDwmHandle.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x140229300 (NtDCompositionSendDwmLpcMessage.c)
 *     ?CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ @ 0x14023F190 (-CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall UserDereferenceDwmProcess(void *a1)
{
  LONG_PTR result; // rax

  if ( a1 )
    return ObfDereferenceObject(a1);
  return result;
}
