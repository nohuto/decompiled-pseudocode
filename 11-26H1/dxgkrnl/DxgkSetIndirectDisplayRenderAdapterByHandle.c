/*
 * XREFs of DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1401B8D08
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x140250AE0 (DxgkHandleIndirectEscape.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140439834 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1401B863C (DxgkSetIndirectDisplayRenderAdapter.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1403C420C (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 */

__int64 __fastcall DxgkSetIndirectDisplayRenderAdapterByHandle(unsigned int a1, struct _LUID *a2)
{
  unsigned int v4; // ebx
  struct DXGADAPTER *v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByHandle(v6, a1);
  if ( v6[0] )
  {
    v4 = DxgkSetIndirectDisplayRenderAdapter(v6[0], a2, 0LL);
  }
  else
  {
    WdLogSingleEntry2(3LL, a1, -1073741811LL);
    WdLogGlobalForLineNumber = 12321;
    v4 = -1073741585;
  }
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v6, 0LL);
  return v4;
}
