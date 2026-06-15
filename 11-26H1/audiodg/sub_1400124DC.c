/*
 * XREFs of sub_1400124DC @ 0x1400124DC
 * Callers:
 *     sub_1400124A0 @ 0x1400124A0 (sub_1400124A0.c)
 * Callees:
 *     sub_140012538 @ 0x140012538 (sub_140012538.c)
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 *     sub_140012604 @ 0x140012604 (sub_140012604.c)
 */

void __fastcall sub_1400124DC(__int64 a1)
{
  sub_1400125D4(a1 + 280);
  sub_140012604(a1 + 208);
  sub_140012538(a1 + 136);
  sub_140012538(a1 + 64);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  *(_DWORD *)(a1 + 20) = -1073741823;
}
