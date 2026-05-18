/*
 * XREFs of sub_18001C72C @ 0x18001C72C
 * Callers:
 *     sub_18001B41C @ 0x18001B41C (sub_18001B41C.c)
 *     sub_1800345EC @ 0x1800345EC (sub_1800345EC.c)
 *     sub_180051130 @ 0x180051130 (sub_180051130.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 *     sub_180089CE8 @ 0x180089CE8 (sub_180089CE8.c)
 *     sub_1800BD020 @ 0x1800BD020 (sub_1800BD020.c)
 *     sub_1800D3520 @ 0x1800D3520 (sub_1800D3520.c)
 *     sub_1800D35F0 @ 0x1800D35F0 (sub_1800D35F0.c)
 *     sub_1800D3680 @ 0x1800D3680 (sub_1800D3680.c)
 *     sub_1800D48B0 @ 0x1800D48B0 (sub_1800D48B0.c)
 *     sub_1800D60D8 @ 0x1800D60D8 (sub_1800D60D8.c)
 * Callees:
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18001C72C(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rdx

  a1[1] = sub_1800148EC(a2);
  *a1 = &Spectre::Utils::SpectreException::`vftable';
  sub_1800181BC(a1 + 2, v6);
  a1[6] = 0LL;
  v7 = sub_1800148EC(a2);
  v8 = 4LL;
  if ( !a3 )
    v8 = 3LL;
  sub_18001DCFC(&unk_1801BD000, v8, "Throwing SpectreException with message '%s'", v7);
  return a1;
}
