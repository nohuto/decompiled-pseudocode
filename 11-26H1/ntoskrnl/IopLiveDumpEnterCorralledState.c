/*
 * XREFs of IopLiveDumpEnterCorralledState @ 0x1405D1860
 * Callers:
 *     IopLiveDumpCapture @ 0x1405D0DCC (IopLiveDumpCapture.c)
 *     IopLiveDumpEndMirroringCallback @ 0x1405D17B0 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     IopLiveDumpGetMillisecondCounter @ 0x1404DDE60 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpCorralProcessors @ 0x1405D1560 (IopLiveDumpCorralProcessors.c)
 */

__int64 __fastcall IopLiveDumpEnterCorralledState(_QWORD *a1)
{
  __int64 result; // rax

  a1[24] = 0LL;
  a1[25] = 0LL;
  IopLiveDumpCorralProcessors(a1 + 39);
  result = IopLiveDumpGetMillisecondCounter(0);
  a1[67] = result;
  return result;
}
