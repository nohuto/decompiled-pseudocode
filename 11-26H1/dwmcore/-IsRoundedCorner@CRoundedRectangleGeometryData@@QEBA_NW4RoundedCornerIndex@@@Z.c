/*
 * XREFs of ?IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z @ 0x1800DE6E0
 * Callers:
 *     ?Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z @ 0x1800DDD80 (-Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     ?FromData@CCornerRects@@QEAAXAEBUCRoundedRectangleGeometryData@@AEBVCMILMatrix@@@Z @ 0x1800DE720 (-FromData@CCornerRects@@QEAAXAEBUCRoundedRectangleGeometryData@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRoundedRectangleGeometryData::IsRoundedCorner(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  if ( *(_BYTE *)(a1 + 52) )
    v2 = 16LL;
  else
    v2 = 8LL * a2 + 16;
  return *(float *)(v2 + a1) > 0.0 && *(float *)(v2 + a1 + 4) > 0.0;
}
