/*
 * XREFs of ?vUnreference@SURFREF@@QEAAXXZ @ 0x14018C740
 * Callers:
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x1401B9140 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 */

void __fastcall SURFREF::vUnreference(unsigned int **this)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(this);
  HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), this[4]);
  this[4] = 0LL;
}
