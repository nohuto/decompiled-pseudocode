/*
 * XREFs of DpiFinishPnPTransitionCallback @ 0x140423DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXPEAXK@Z @ 0x140202DA4 (-FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXPEAXK@Z.c)
 *     DxgkCompletePnPTransition @ 0x140204E64 (DxgkCompletePnPTransition.c)
 *     ?CheckPnPTransitionForSession@DXGSESSIONMGR@@QEAAEPEAXK@Z @ 0x14042E4F0 (-CheckPnPTransitionForSession@DXGSESSIONMGR@@QEAAEPEAXK@Z.c)
 */

unsigned __int8 __fastcall DpiFinishPnPTransitionCallback(struct _PNP_TRANS_TOKEN *a1, int a2, unsigned int a3)
{
  char v3; // bl
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v7; // rax

  v3 = 1;
  if ( a2 == 1 )
  {
    if ( a1 )
    {
      Global = DXGGLOBAL::GetGlobal();
      DXGSESSIONMGR::FinishPnPTransitionOnSession(*((DXGSESSIONMGR **)Global + 123), a1, a3);
    }
  }
  else if ( a2 == 2 )
  {
    DxgkCompletePnPTransition(a1);
  }
  else if ( !a2 && a1 )
  {
    v7 = DXGGLOBAL::GetGlobal();
    return DXGSESSIONMGR::CheckPnPTransitionForSession(*((DXGSESSIONMGR **)v7 + 123), a1, a3);
  }
  return v3;
}
