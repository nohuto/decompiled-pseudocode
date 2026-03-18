/*
 * XREFs of ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1400FEEE8
 * Callers:
 *     EngHTBlt @ 0x14006F20C (EngHTBlt.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1400F6C80 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1400FE4C0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1401003F4 (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 *     ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x1401017B8 (-bDisableHalftone@PDEVOBJ@@QEAAHXZ.c)
 *     GreCreateHalftonePalette @ 0x1403107CC (GreCreateHalftonePalette.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     HT_DestroyDeviceHalftoneInfo @ 0x1401018E0 (HT_DestroyDeviceHalftoneInfo.c)
 */

void *__fastcall PDEVOBJ::pDevHTInfo(PDEVOBJ *this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  struct _GRETHREAD *v6; // rbx
  _QWORD *v8; // rdi

  v2 = Gre::Base::Globals(this);
  CurrentThread = GreGetCurrentThread(v4, v3);
  v6 = CurrentThread;
  if ( !CurrentThread
    || !*((_DWORD *)CurrentThread + 87) && !*((_DWORD *)CurrentThread + 88)
    || !PDEVOBJ::bAllowShareAccess(this) )
  {
    return *(void **)(*(_QWORD *)this + 1512LL);
  }
  if ( *((_DWORD *)v6 + 90) != *((_DWORD *)v2 + 910) )
  {
    v8 = (_QWORD *)*((_QWORD *)v6 + 35);
    if ( v8 )
    {
      bDeletePalette(*v8);
      HT_DestroyDeviceHalftoneInfo(v8);
      *((_QWORD *)v6 + 35) = 0LL;
    }
  }
  return (void *)*((_QWORD *)v6 + 35);
}
