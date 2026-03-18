/*
 * XREFs of ??_GCDDisplayRenderTargetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14022A930
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

DirectComposition::CDDisplayRenderTargetMarshaler *__fastcall DirectComposition::CDDisplayRenderTargetMarshaler::`scalar deleting destructor'(
        DirectComposition::CDDisplayRenderTargetMarshaler *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  *(_QWORD *)this = &DirectComposition::CDDisplayRenderTargetMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)this, a2, a3, a4);
  return this;
}
