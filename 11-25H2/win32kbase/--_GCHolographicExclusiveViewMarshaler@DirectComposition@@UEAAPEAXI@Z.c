/*
 * XREFs of ??_GCHolographicExclusiveViewMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1402285D0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

DirectComposition::CHolographicExclusiveViewMarshaler *__fastcall DirectComposition::CHolographicExclusiveViewMarshaler::`scalar deleting destructor'(
        DirectComposition::CHolographicExclusiveViewMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CHolographicExclusiveViewMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)this);
  return this;
}
