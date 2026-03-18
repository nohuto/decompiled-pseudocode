/*
 * XREFs of ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1401829CC
 * Callers:
 *     ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x14017EB08 (-bDisableHalftone@PDEVOBJ@@QEAAHXZ.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x140180DF0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     EngHTBlt @ 0x14018174C (EngHTBlt.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x14018890C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1401DB6A8 (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 *     GreCreateHalftonePalette @ 0x1403317EC (GreCreateHalftonePalette.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     HT_DestroyDeviceHalftoneInfo @ 0x14017EC60 (HT_DestroyDeviceHalftoneInfo.c)
 */

void *__fastcall PDEVOBJ::pDevHTInfo(PDEVOBJ *this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rsi
  __int64 v3; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  struct _GRETHREAD *v5; // rbx
  _DWORD *v7; // rdi

  v2 = Gre::Base::Globals(this);
  CurrentThread = GreGetCurrentThread(v3);
  v5 = CurrentThread;
  if ( !CurrentThread
    || !*((_DWORD *)CurrentThread + 85) && !*((_DWORD *)CurrentThread + 86)
    || !PDEVOBJ::bAllowShareAccess(this) )
  {
    return *(void **)(*(_QWORD *)this + 1512LL);
  }
  if ( *((_DWORD *)v5 + 88) != *((_DWORD *)v2 + 930) )
  {
    v7 = (_DWORD *)*((_QWORD *)v5 + 35);
    if ( v7 )
    {
      bDeletePalette(*(_QWORD *)v7);
      HT_DestroyDeviceHalftoneInfo(v7);
      *((_QWORD *)v5 + 35) = 0LL;
    }
  }
  return (void *)*((_QWORD *)v5 + 35);
}
