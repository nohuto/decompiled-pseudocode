/*
 * XREFs of ?vAcquire@HTSEMOBJ@@QEAAXXZ @ 0x1401ACA38
 * Callers:
 *     EngHTBlt @ 0x14006F20C (EngHTBlt.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1400F6C80 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401ACA64 (--$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall HTSEMOBJ::vAcquire(HTSEMOBJ *this)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rax

  if ( *(_DWORD *)this )
  {
    v1 = Gre::Base::Globals(this);
    GreAcquireSemaphore<10,>(v1);
  }
}
