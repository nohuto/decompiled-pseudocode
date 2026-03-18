/*
 * XREFs of xxxSendUAHInitMenuMessage @ 0x14003FA78
 * Callers:
 *     xxxPaintMenuBar @ 0x14003F7B0 (xxxPaintMenuBar.c)
 *     xxxMNCompute @ 0x140041D3C (xxxMNCompute.c)
 *     xxxMenuDraw @ 0x140043508 (xxxMenuDraw.c)
 * Callees:
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSendUAHInitMenuMessage(struct tagWND *a1, __int64 a2)
{
  unsigned int v3; // r8d

  v3 = xxxSendMessage(a1, 0x93u);
  if ( v3 )
    *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) |= 0x800u;
  else
    *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) &= ~0x800u;
  return v3;
}
