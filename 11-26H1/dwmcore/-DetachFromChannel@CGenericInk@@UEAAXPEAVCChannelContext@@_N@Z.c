/*
 * XREFs of ?DetachFromChannel@CGenericInk@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18026F7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18014C720 (-DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?Dispose@CGenericInkTipPointSource@@QEAAXXZ @ 0x180288DF0 (-Dispose@CGenericInkTipPointSource@@QEAAXXZ.c)
 */

void __fastcall CGenericInk::DetachFromChannel(CGenericInkTipPointSource **this, struct CChannelContext *a2)
{
  CGenericInkTipPointSource *v3; // rcx

  CResource::DetachFromChannel((CResource *)this, a2);
  if ( !this[7] )
  {
    v3 = this[11];
    if ( v3 )
      CGenericInkTipPointSource::Dispose(v3);
  }
}
