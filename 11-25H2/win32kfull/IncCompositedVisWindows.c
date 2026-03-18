/*
 * XREFs of IncCompositedVisWindows @ 0x14005A968
 * Callers:
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14005A4E4 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?IncComposited@@YAXPEAUtagWND@@@Z @ 0x1402CA090 (-IncComposited@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     IncrementCompositedCount @ 0x14005A98C (IncrementCompositedCount.c)
 */

__int64 __fastcall IncCompositedVisWindows(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(result + 27) & 2) != 0 )
    return IncrementCompositedCount();
  return result;
}
