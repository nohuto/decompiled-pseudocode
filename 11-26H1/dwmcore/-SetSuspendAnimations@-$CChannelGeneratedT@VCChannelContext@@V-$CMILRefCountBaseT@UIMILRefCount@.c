/*
 * XREFs of ?SetSuspendAnimations@?$CChannelGeneratedT@VCChannelContext@@V?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@@@QEAAJ_N@Z @ 0x18024EBCC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnSuspendAnimationsChanged@CChannelContext@@QEAAXXZ @ 0x18016D678 (-OnSuspendAnimationsChanged@CChannelContext@@QEAAXXZ.c)
 */

__int64 __fastcall CChannelGeneratedT<CChannelContext,CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>>::SetSuspendAnimations(
        CChannelContext *a1,
        char a2)
{
  if ( a2 != *((_BYTE *)a1 + 18) )
  {
    *((_BYTE *)a1 + 18) = a2;
    CChannelContext::OnSuspendAnimationsChanged(a1);
  }
  return 0LL;
}
