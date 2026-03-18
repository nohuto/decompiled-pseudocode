/*
 * XREFs of ApiSetTransformForInputMagnification @ 0x140079250
 * Callers:
 *     RIMApplyTransforms @ 0x1400786DC (RIMApplyTransforms.c)
 *     RIMTransformPhysicalPointToScreen @ 0x140079180 (RIMTransformPhysicalPointToScreen.c)
 * Callees:
 *     TransformForInputMagnification @ 0x14011A184 (TransformForInputMagnification.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetTransformForInputMagnification(__int64 a1, __int64 a2, __int64 a3))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 4656LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
      return (__int64 (*)(void))TransformForInputMagnification(a1, a2, a3);
  }
  return result;
}
