/*
 * XREFs of ??_ECVisualTargetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140120450
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

DirectComposition::CVisualTargetMarshaler *__fastcall DirectComposition::CVisualTargetMarshaler::`vector deleting destructor'(
        DirectComposition::CVisualTargetMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,1>::`vftable';
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)this);
  return this;
}
