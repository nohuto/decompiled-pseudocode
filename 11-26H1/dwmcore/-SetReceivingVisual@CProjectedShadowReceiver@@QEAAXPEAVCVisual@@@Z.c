/*
 * XREFs of ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x18021A20C
 * Callers:
 *     ??1CProjectedShadowReceiver@@MEAA@XZ @ 0x1801D883C (--1CProjectedShadowReceiver@@MEAA@XZ.c)
 *     ?ProcessSetReceivingVisual@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWRECEIVER_SETRECEIVINGVISUAL@@@Z @ 0x18021A198 (-ProcessSetReceivingVisual@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJ.c)
 * Callees:
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x18021DFE8 (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?DiscardCachesForReceiver@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x18021F66C (-DiscardCachesForReceiver@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x180260580 (-AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x180261068 (-RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 */

void __fastcall CProjectedShadowReceiver::SetReceivingVisual(CVisual **this, struct CVisual *a2)
{
  CProjectedShadowScene **v4; // rbp
  CProjectedShadowScene **i; // rsi

  if ( a2 != this[9] )
  {
    if ( this[9] )
    {
      CProjectedShadowReceiver::InvalidateMaskContent((CProjectedShadowReceiver *)this);
      v4 = (CProjectedShadowScene **)this[11];
      for ( i = (CProjectedShadowScene **)this[10]; i != v4; ++i )
        CProjectedShadowScene::DiscardCachesForReceiver(*i, (struct CProjectedShadowReceiver *)this);
      CVisual::RemoveProjectedShadowReceiver(this[9], (struct CProjectedShadowReceiver *)this);
    }
    this[9] = a2;
    if ( a2 )
    {
      CVisual::AddProjectedShadowReceiver(a2, (struct CProjectedShadowReceiver *)this);
      CProjectedShadowReceiver::InvalidateMaskContent((CProjectedShadowReceiver *)this);
    }
  }
}
