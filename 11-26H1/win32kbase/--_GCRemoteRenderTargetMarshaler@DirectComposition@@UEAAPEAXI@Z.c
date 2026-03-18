/*
 * XREFs of ??_GCRemoteRenderTargetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14022AA80
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

DirectComposition::CRemoteRenderTargetMarshaler *__fastcall DirectComposition::CRemoteRenderTargetMarshaler::`scalar deleting destructor'(
        DirectComposition::CRemoteRenderTargetMarshaler *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  *(_QWORD *)this = &DirectComposition::CRemoteRenderTargetMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)this, a2, a3, a4);
  return this;
}
