/*
 * XREFs of sub_14002510C @ 0x14002510C
 * Callers:
 *     sub_1400020E0 @ 0x1400020E0 (sub_1400020E0.c)
 *     sub_14000FB60 @ 0x14000FB60 (sub_14000FB60.c)
 *     sub_140012550 @ 0x140012550 (sub_140012550.c)
 *     sub_1400130E0 @ 0x1400130E0 (sub_1400130E0.c)
 *     sub_140021288 @ 0x140021288 (sub_140021288.c)
 *     sub_140023C40 @ 0x140023C40 (sub_140023C40.c)
 *     sub_140026230 @ 0x140026230 (sub_140026230.c)
 *     sub_140026970 @ 0x140026970 (sub_140026970.c)
 *     sub_14002BA4C @ 0x14002BA4C (sub_14002BA4C.c)
 *     sub_14002E924 @ 0x14002E924 (sub_14002E924.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14002510C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  result = StorPortExtendedFunction(29LL, a1, &v7, a4);
  if ( !(_DWORD)result )
    return StorPortExtendedFunction(30LL, a1, a2, v7);
  return result;
}
