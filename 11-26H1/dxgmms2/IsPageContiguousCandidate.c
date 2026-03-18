/*
 * XREFs of IsPageContiguousCandidate @ 0x14005351C
 * Callers:
 *     FindContiguousPageRun @ 0x1400533D8 (FindContiguousPageRun.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsPageContiguousCandidate(__int64 a1)
{
  unsigned int v1; // eax
  bool result; // al

  result = (*(_DWORD *)(a1 + 68) & 0x200000) == 0
        && *(int *)(a1 + 64) >= 0
        && (v1 = *(_DWORD *)(a1 + 64) & 7, v1 < 4)
        && v1 != 2
        && v1 != 3;
  return result;
}
