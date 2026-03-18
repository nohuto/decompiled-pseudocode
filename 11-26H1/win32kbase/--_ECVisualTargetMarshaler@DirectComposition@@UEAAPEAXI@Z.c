/*
 * XREFs of ??_ECVisualTargetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14015E500
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

DirectComposition::CVisualTargetMarshaler *__fastcall DirectComposition::CVisualTargetMarshaler::`vector deleting destructor'(
        DirectComposition::CVisualTargetMarshaler *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  *(_QWORD *)this = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,1>::`vftable';
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)this, a2, a3, a4);
  return this;
}
