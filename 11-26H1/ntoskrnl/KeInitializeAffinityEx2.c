/*
 * XREFs of KeInitializeAffinityEx2 @ 0x1404440E0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall KeInitializeAffinityEx2(__int64 a1, unsigned __int16 a2)
{
  *(_WORD *)(a1 + 2) = a2;
  *(_WORD *)a1 = 1;
  *(_DWORD *)(a1 + 4) = 0;
  return memset_0((void *)(a1 + 8), 0, 8LL * a2);
}
