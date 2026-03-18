/*
 * XREFs of IopLiveDumpEnterCorralledState @ 0x1405CF050
 * Callers:
 *     IopLiveDumpCapture @ 0x1405CE5BC (IopLiveDumpCapture.c)
 *     IopLiveDumpEndMirroringCallback @ 0x1405CEFA0 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     IopLiveDumpGetMillisecondCounter @ 0x1404E48C0 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpCorralProcessors @ 0x1405CED50 (IopLiveDumpCorralProcessors.c)
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
