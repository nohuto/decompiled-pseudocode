/*
 * XREFs of sub_14000CF50 @ 0x14000CF50
 * Callers:
 *     sub_1400070B0 @ 0x1400070B0 (sub_1400070B0.c)
 *     sub_140007A70 @ 0x140007A70 (sub_140007A70.c)
 *     sub_140008150 @ 0x140008150 (sub_140008150.c)
 *     sub_14000A8A0 @ 0x14000A8A0 (sub_14000A8A0.c)
 *     sub_14000CC70 @ 0x14000CC70 (sub_14000CC70.c)
 *     sub_14000D0D0 @ 0x14000D0D0 (sub_14000D0D0.c)
 *     sub_14000D250 @ 0x14000D250 (sub_14000D250.c)
 *     sub_14000D7A0 @ 0x14000D7A0 (sub_14000D7A0.c)
 *     sub_14000FB60 @ 0x14000FB60 (sub_14000FB60.c)
 *     sub_140014030 @ 0x140014030 (sub_140014030.c)
 *     sub_140018A60 @ 0x140018A60 (sub_140018A60.c)
 *     sub_14001BE44 @ 0x14001BE44 (sub_14001BE44.c)
 *     sub_14001CE10 @ 0x14001CE10 (sub_14001CE10.c)
 *     sub_14001F138 @ 0x14001F138 (sub_14001F138.c)
 *     sub_14002208C @ 0x14002208C (sub_14002208C.c)
 *     sub_1400237A8 @ 0x1400237A8 (sub_1400237A8.c)
 *     sub_140023944 @ 0x140023944 (sub_140023944.c)
 *     sub_1400239EC @ 0x1400239EC (sub_1400239EC.c)
 *     sub_140024570 @ 0x140024570 (sub_140024570.c)
 *     sub_140024620 @ 0x140024620 (sub_140024620.c)
 *     sub_1400246D0 @ 0x1400246D0 (sub_1400246D0.c)
 *     sub_140024A30 @ 0x140024A30 (sub_140024A30.c)
 *     sub_140024E80 @ 0x140024E80 (sub_140024E80.c)
 *     sub_1400250A0 @ 0x1400250A0 (sub_1400250A0.c)
 *     sub_140025944 @ 0x140025944 (sub_140025944.c)
 *     sub_140025B40 @ 0x140025B40 (sub_140025B40.c)
 *     sub_140026E20 @ 0x140026E20 (sub_140026E20.c)
 *     sub_140027660 @ 0x140027660 (sub_140027660.c)
 *     sub_140027E40 @ 0x140027E40 (sub_140027E40.c)
 *     sub_140028EEC @ 0x140028EEC (sub_140028EEC.c)
 *     sub_14002910C @ 0x14002910C (sub_14002910C.c)
 *     sub_140029394 @ 0x140029394 (sub_140029394.c)
 *     sub_140029690 @ 0x140029690 (sub_140029690.c)
 *     sub_140029830 @ 0x140029830 (sub_140029830.c)
 *     sub_140029900 @ 0x140029900 (sub_140029900.c)
 *     sub_140029BE8 @ 0x140029BE8 (sub_140029BE8.c)
 *     sub_14002AED8 @ 0x14002AED8 (sub_14002AED8.c)
 *     sub_14002BC40 @ 0x14002BC40 (sub_14002BC40.c)
 *     sub_14002C7E8 @ 0x14002C7E8 (sub_14002C7E8.c)
 *     sub_14002CA30 @ 0x14002CA30 (sub_14002CA30.c)
 *     sub_14002D24C @ 0x14002D24C (sub_14002D24C.c)
 *     sub_14002DDDC @ 0x14002DDDC (sub_14002DDDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14000CF50(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 result; // rax

  if ( !a3 )
    return 3238002689LL;
  v5 = *a3;
  if ( !v5 || !a4 )
    return 3238002689LL;
  result = StorPortExtendedFunction(83LL, a1, v5, a2);
  if ( !(_DWORD)result )
    *a3 = 0LL;
  return result;
}
