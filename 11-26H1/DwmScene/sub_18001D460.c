/*
 * XREFs of sub_18001D460 @ 0x18001D460
 * Callers:
 *     sub_18001CA80 @ 0x18001CA80 (sub_18001CA80.c)
 *     sub_18001D9D0 @ 0x18001D9D0 (sub_18001D9D0.c)
 * Callees:
 *     sub_18001D3F0 @ 0x18001D3F0 (sub_18001D3F0.c)
 */

_DWORD *__fastcall sub_18001D460(_DWORD *a1, _DWORD *a2)
{
  *a1 = *a2;
  sub_18001D3F0((__int64)(a1 + 2), (__int64)(a2 + 2));
  return a1;
}
