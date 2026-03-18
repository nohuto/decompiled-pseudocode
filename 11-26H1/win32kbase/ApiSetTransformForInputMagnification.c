/*
 * XREFs of ApiSetTransformForInputMagnification @ 0x1401B5CBC
 * Callers:
 *     RIMApplyTransforms @ 0x1400F6F1C (RIMApplyTransforms.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1400F8BB8 (RIMTransformPhysicalPointToScreen.c)
 * Callees:
 *     TransformForInputMagnification @ 0x1401571D4 (TransformForInputMagnification.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetTransformForInputMagnification(__int64 a1, __int64 a2, __int64 a3))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4208LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
      return (__int64 (*)(void))TransformForInputMagnification(a1, a2, a3);
  }
  return result;
}
