/*
 * XREFs of ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x140058830
 * Callers:
 *     DxgkCreateOverlay @ 0x1401F0DD0 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1401F13A0 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1401F1900 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1401F1E10 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1401F23C0 (DxgkUpdateOverlay.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

DXGOVERLAYMUTEX *__fastcall DXGOVERLAYMUTEX::DXGOVERLAYMUTEX(DXGOVERLAYMUTEX *this, struct ADAPTER_RENDER *a2)
{
  DXGAUTOMUTEX::DXGAUTOMUTEX(this, (struct ADAPTER_RENDER *)((char *)a2 + 856), 0);
  return this;
}
