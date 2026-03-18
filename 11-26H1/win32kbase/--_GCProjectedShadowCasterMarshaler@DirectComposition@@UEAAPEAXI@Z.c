/*
 * XREFs of ??_GCProjectedShadowCasterMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140194830
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

DirectComposition::CProjectedShadowCasterMarshaler *__fastcall DirectComposition::CProjectedShadowCasterMarshaler::`scalar deleting destructor'(
        DirectComposition::CProjectedShadowCasterMarshaler *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  *(_QWORD *)this = &DirectComposition::CProjectedShadowCasterMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)this, a2, a3, a4);
  return this;
}
