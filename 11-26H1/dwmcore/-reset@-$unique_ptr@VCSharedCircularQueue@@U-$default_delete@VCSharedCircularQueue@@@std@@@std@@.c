/*
 * XREFs of ?reset@?$unique_ptr@VCSharedCircularQueue@@U?$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAAXPEAVCSharedCircularQueue@@@Z @ 0x18026CEDC
 * Callers:
 *     ?CreatePointQueue@CDelegatedInkCanvas@@AEAAJXZ @ 0x18026C8FC (-CreatePointQueue@CDelegatedInkCanvas@@AEAAJXZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCSharedCircularQueue@@U?$default_delete@VCSharedCircularQueue@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180284A50 (--1-$out_param_t@V-$unique_ptr@VCSharedCircularQueue@@U-$default_delete@VCSharedCircularQueue@@@.c)
 *     ?DetachFromChannel@CSynchronousSuperWetInk@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180284B60 (-DetachFromChannel@CSynchronousSuperWetInk@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?Dispose@CGenericInkTipPointSource@@QEAAXXZ @ 0x180288DF0 (-Dispose@CGenericInkTipPointSource@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<CSharedCircularQueue>::reset(void **a1, void *a2)
{
  void *v2; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    operator delete(v2);
}
