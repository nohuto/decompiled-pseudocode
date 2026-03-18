/*
 * XREFs of sub_140018090 @ 0x140018090
 * Callers:
 *     sub_140011F70 @ 0x140011F70 (sub_140011F70.c)
 *     sub_140012550 @ 0x140012550 (sub_140012550.c)
 *     sub_1400130E0 @ 0x1400130E0 (sub_1400130E0.c)
 *     sub_140023C40 @ 0x140023C40 (sub_140023C40.c)
 *     sub_140026970 @ 0x140026970 (sub_140026970.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140018090(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r9
  __int64 v10; // [rsp+38h] [rbp-10h] BYREF

  v10 = 0LL;
  if ( !(unsigned int)StorPortExtendedFunction(29LL, a1, &v10, a4)
    && !(unsigned int)StorPortExtendedFunction(0LL, a1, 24LL, 1701672526LL) )
  {
    MEMORY[0] = a2;
    MEMORY[8] = a3;
    MEMORY[0x10] = a4;
    if ( !(unsigned int)StorPortExtendedFunction(30LL, a1, sub_14001DED0, v10) )
      return 1;
  }
  if ( v10 )
    StorPortExtendedFunction(31LL, a1, v10, v8);
  return 0;
}
