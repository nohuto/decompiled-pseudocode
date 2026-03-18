/*
 * XREFs of sub_1400188B0 @ 0x1400188B0
 * Callers:
 *     sub_14000DBA0 @ 0x14000DBA0 (sub_14000DBA0.c)
 *     sub_140010C10 @ 0x140010C10 (sub_140010C10.c)
 *     sub_1400181B0 @ 0x1400181B0 (sub_1400181B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400188B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v7; // r8

  v4 = *(_QWORD *)(a1 + 288);
  if ( v4 )
  {
    result = StorPortExtendedFunction(1LL, a1, v4, a4);
    *(_QWORD *)(a1 + 288) = 0LL;
  }
  v7 = *(_QWORD *)(a1 + 280);
  if ( v7 )
  {
    result = StorPortExtendedFunction(1LL, a1, v7, a4);
    *(_QWORD *)(a1 + 280) = 0LL;
  }
  *(_WORD *)(a1 + 272) = 0;
  return result;
}
