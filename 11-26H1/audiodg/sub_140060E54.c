/*
 * XREFs of sub_140060E54 @ 0x140060E54
 * Callers:
 *     sub_140060EB0 @ 0x140060EB0 (sub_140060EB0.c)
 * Callees:
 *     sub_140062720 @ 0x140062720 (sub_140062720.c)
 */

void __fastcall sub_140060E54(__int64 a1)
{
  sub_140062720(a1 + 200);
  sub_140062720(a1 + 128);
  sub_140062720(a1 + 56);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
}
