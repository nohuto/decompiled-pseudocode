/*
 * XREFs of DxgkReleaseGdiViewId @ 0x140205270
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 *     DpiGdoDestroyGdiObjects @ 0x1402572A4 (DpiGdoDestroyGdiObjects.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseSessionGdiViewId@DXGSESSIONDATA@@QEAAXKE@Z @ 0x140203440 (-ReleaseSessionGdiViewId@DXGSESSIONDATA@@QEAAXKE@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x140330710 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

void __fastcall DxgkReleaseGdiViewId(char a1, __int64 a2, unsigned __int32 a3, char a4)
{
  unsigned int v6; // esi
  struct DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax

  v6 = a2;
  if ( a1 )
  {
    Global = DXGGLOBAL::GetGlobal();
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       *((DXGSESSIONMGR **)Global + 123),
                                       v6);
    if ( SessionDataForSpecifiedSession )
      DXGSESSIONDATA::ReleaseSessionGdiViewId(SessionDataForSpecifiedSession, a3, a4);
  }
  else
  {
    LOBYTE(a2) = a4;
    DMgrReleaseGdiViewId(a3, a2);
  }
}
