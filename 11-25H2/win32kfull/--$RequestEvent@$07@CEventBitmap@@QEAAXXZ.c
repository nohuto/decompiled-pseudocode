/*
 * XREFs of ??$RequestEvent@$07@CEventBitmap@@QEAAXXZ @ 0x140288374
 * Callers:
 *     xxxDesktopThreadWaiter @ 0x140020F14 (xxxDesktopThreadWaiter.c)
 * Callees:
 *     <none>
 */

void __fastcall CEventBitmap::RequestEvent<8>(__int64 a1)
{
  *(_DWORD *)(a1 + 4) |= 0x100u;
}
