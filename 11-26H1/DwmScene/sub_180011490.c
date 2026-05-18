/*
 * XREFs of sub_180011490 @ 0x180011490
 * Callers:
 *     sub_18000FFE0 @ 0x18000FFE0 (sub_18000FFE0.c)
 *     sub_180015BD0 @ 0x180015BD0 (sub_180015BD0.c)
 *     sub_1800195D0 @ 0x1800195D0 (sub_1800195D0.c)
 *     sub_180019640 @ 0x180019640 (sub_180019640.c)
 *     sub_1800196B0 @ 0x1800196B0 (sub_1800196B0.c)
 *     sub_180019720 @ 0x180019720 (sub_180019720.c)
 *     sub_180019790 @ 0x180019790 (sub_180019790.c)
 *     sub_180019800 @ 0x180019800 (sub_180019800.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_180011490(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
