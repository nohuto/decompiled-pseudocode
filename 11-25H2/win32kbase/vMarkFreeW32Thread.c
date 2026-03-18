/*
 * XREFs of vMarkFreeW32Thread @ 0x140129CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vMarkFreeW32Thread(__int64 a1)
{
  *(_QWORD *)(a1 + 1360) |= 0x1000uLL;
}
