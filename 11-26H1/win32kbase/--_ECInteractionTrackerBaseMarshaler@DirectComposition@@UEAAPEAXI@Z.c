/*
 * XREFs of ??_ECInteractionTrackerBaseMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14022AA20
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

DirectComposition::CInteractionTrackerBaseMarshaler *__fastcall DirectComposition::CInteractionTrackerBaseMarshaler::`vector deleting destructor'(
        DirectComposition::CInteractionTrackerBaseMarshaler *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  *(_QWORD *)this = &DirectComposition::CInteractionTrackerBaseMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)this, a2, a3, a4);
  return this;
}
