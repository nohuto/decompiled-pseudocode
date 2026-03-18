/*
 * XREFs of ??_E?$CSharedResourceMarshaler@VCManipulationTransformMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x14012EEB0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

char *__fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CManipulationTransformMarshaler,2>::`vector deleting destructor'(
        char *a1,
        char a2)
{
  *(_QWORD *)a1 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CManipulationTransformMarshaler,2>::`vftable';
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex(a1);
  return a1;
}
