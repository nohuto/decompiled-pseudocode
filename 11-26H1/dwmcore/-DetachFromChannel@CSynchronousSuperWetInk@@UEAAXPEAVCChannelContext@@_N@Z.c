/*
 * XREFs of ?DetachFromChannel@CSynchronousSuperWetInk@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180284B60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ @ 0x180050020 (-InternalRelease@-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18014C720 (-DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?reset@?$unique_ptr@VCSharedCircularQueue@@U?$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAAXPEAVCSharedCircularQueue@@@Z @ 0x18026CEDC (-reset@-$unique_ptr@VCSharedCircularQueue@@U-$default_delete@VCSharedCircularQueue@@@std@@@std@@.c)
 *     ?Dispose@CGenericInkTipPointSource@@QEAAXXZ @ 0x180288DF0 (-Dispose@CGenericInkTipPointSource@@QEAAXXZ.c)
 */

void __fastcall CSynchronousSuperWetInk::DetachFromChannel(CSynchronousSuperWetInk *this, struct CChannelContext *a2)
{
  CGenericInkTipPointSource *v3; // rcx

  CResource::DetachFromChannel(this, a2);
  if ( !*((_QWORD *)this + 7) )
  {
    v3 = (CGenericInkTipPointSource *)*((_QWORD *)this + 11);
    if ( v3 )
      CGenericInkTipPointSource::Dispose(v3);
    Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease((__int64 *)this + 26);
    std::unique_ptr<CSharedCircularQueue>::reset((void **)this + 27, 0LL);
  }
}
