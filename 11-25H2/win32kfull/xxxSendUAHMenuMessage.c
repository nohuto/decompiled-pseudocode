/*
 * XREFs of xxxSendUAHMenuMessage @ 0x14003FB0C
 * Callers:
 *     xxxPaintMenuBar @ 0x14003F7B0 (xxxPaintMenuBar.c)
 *     xxxMenuDraw @ 0x140043508 (xxxMenuDraw.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     xxxMNDrawFullNC @ 0x1402EAC74 (xxxMNDrawFullNC.c)
 * Callees:
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSendUAHMenuMessage(struct tagWND *a1, unsigned int a2)
{
  return xxxSendMessage(a1, a2);
}
