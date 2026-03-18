/*
 * XREFs of ApiSetAdjustLinearity @ 0x1401BD338
 * Callers:
 *     RIMTransformCoordinates @ 0x1400F8820 (RIMTransformCoordinates.c)
 * Callees:
 *     AdjustLinearity @ 0x14017C294 (AdjustLinearity.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetAdjustLinearity(__int64 a1, __int64 a2, __int64 a3, __int64 a4))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4224LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
      return (__int64 (*)(void))AdjustLinearity(a1, a2, a3, a4);
  }
  return result;
}
