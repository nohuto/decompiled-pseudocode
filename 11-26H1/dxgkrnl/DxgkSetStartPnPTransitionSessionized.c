/*
 * XREFs of DxgkSetStartPnPTransitionSessionized @ 0x1402052DC
 * Callers:
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXEAEAU_GUID@@PEAX@Z @ 0x14019896C (-EnableMsBddFallback@DXGADAPTER@@QEAAXEAEAU_GUID@@PEAX@Z.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042EA78 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SetStartPnPTransitionSessionized@DXGSESSIONMGR@@QEAAXPEAXE@Z @ 0x1402042A8 (-SetStartPnPTransitionSessionized@DXGSESSIONMGR@@QEAAXPEAXE@Z.c)
 */

void __fastcall DxgkSetStartPnPTransitionSessionized(_BYTE *a1, char a2)
{
  struct DXGGLOBAL *Global; // rax

  if ( a1 )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSESSIONMGR::SetStartPnPTransitionSessionized(*((DXGSESSIONMGR **)Global + 123), a1, a2);
  }
}
