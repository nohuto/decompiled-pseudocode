/*
 * XREFs of ??_GCProjectedShadowReceiverMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14022AA50
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

DirectComposition::CProjectedShadowReceiverMarshaler *__fastcall DirectComposition::CProjectedShadowReceiverMarshaler::`scalar deleting destructor'(
        DirectComposition::CProjectedShadowReceiverMarshaler *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  *(_QWORD *)this = &DirectComposition::CProjectedShadowReceiverMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)this, a2, a3, a4);
  return this;
}
