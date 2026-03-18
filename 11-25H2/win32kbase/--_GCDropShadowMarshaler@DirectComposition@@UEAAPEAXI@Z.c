/*
 * XREFs of ??_GCDropShadowMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140146AE0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

DirectComposition::CDropShadowMarshaler *__fastcall DirectComposition::CDropShadowMarshaler::`scalar deleting destructor'(
        DirectComposition::CDropShadowMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CDropShadowMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)this);
  return this;
}
