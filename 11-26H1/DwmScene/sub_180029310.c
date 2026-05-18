/*
 * XREFs of sub_180029310 @ 0x180029310
 * Callers:
 *     sub_180024B24 @ 0x180024B24 (sub_180024B24.c)
 *     sub_1800262D4 @ 0x1800262D4 (sub_1800262D4.c)
 *     sub_180027D80 @ 0x180027D80 (sub_180027D80.c)
 *     sub_180027EC8 @ 0x180027EC8 (sub_180027EC8.c)
 *     sub_180032FE0 @ 0x180032FE0 (sub_180032FE0.c)
 *     sub_180046150 @ 0x180046150 (sub_180046150.c)
 *     sub_1800461F4 @ 0x1800461F4 (sub_1800461F4.c)
 *     sub_180046298 @ 0x180046298 (sub_180046298.c)
 *     sub_18004633C @ 0x18004633C (sub_18004633C.c)
 *     sub_1800463D8 @ 0x1800463D8 (sub_1800463D8.c)
 *     sub_18004647C @ 0x18004647C (sub_18004647C.c)
 *     sub_180046FD4 @ 0x180046FD4 (sub_180046FD4.c)
 *     sub_1800479B8 @ 0x1800479B8 (sub_1800479B8.c)
 *     sub_180052460 @ 0x180052460 (sub_180052460.c)
 *     sub_1800537DC @ 0x1800537DC (sub_1800537DC.c)
 *     sub_180053894 @ 0x180053894 (sub_180053894.c)
 *     sub_18006AD9C @ 0x18006AD9C (sub_18006AD9C.c)
 *     sub_18006B170 @ 0x18006B170 (sub_18006B170.c)
 *     sub_18006B3AC @ 0x18006B3AC (sub_18006B3AC.c)
 *     sub_18006B46C @ 0x18006B46C (sub_18006B46C.c)
 *     sub_180080354 @ 0x180080354 (sub_180080354.c)
 *     sub_180081920 @ 0x180081920 (sub_180081920.c)
 *     sub_180083810 @ 0x180083810 (sub_180083810.c)
 *     sub_1800CB160 @ 0x1800CB160 (sub_1800CB160.c)
 *     sub_1800CB8A8 @ 0x1800CB8A8 (sub_1800CB8A8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180029310(__int64 a1, int a2, char a3)
{
  unsigned int v3; // eax
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 40);
  if ( a3 )
    result = a2 | v3;
  else
    result = ~a2 & v3;
  *(_DWORD *)(a1 + 40) = result;
  return result;
}
