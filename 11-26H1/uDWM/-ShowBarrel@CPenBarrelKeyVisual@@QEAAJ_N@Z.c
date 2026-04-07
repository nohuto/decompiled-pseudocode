/*
 * XREFs of ?ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z @ 0x18005ED6C
 * Callers:
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x18004F2C4 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x18005EA9C (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 * Callees:
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x1800133AC (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::ShowBarrel(CPenBarrelKeyVisual *this, char a2)
{
  if ( *((_BYTE *)this + 268) != a2 )
  {
    *((_BYTE *)this + 268) = a2;
    CPenBarrelKeyVisual::UpdateBarrelAlpha((CVisual **)this);
  }
  return 0LL;
}
