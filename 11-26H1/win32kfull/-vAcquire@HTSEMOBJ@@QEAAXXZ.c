/*
 * XREFs of ?vAcquire@HTSEMOBJ@@QEAAXXZ @ 0x140182A8C
 * Callers:
 *     EngHTBlt @ 0x14018174C (EngHTBlt.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x14018890C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140182AB8 (--$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
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
