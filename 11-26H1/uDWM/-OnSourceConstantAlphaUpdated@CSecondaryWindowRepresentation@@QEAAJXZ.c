/*
 * XREFs of ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800282E4
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180028E98 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18004E650 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@00$00@@YA?AVDirtyFlags@@XZ @ 0x180016454 (--$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@00$00@@YA-AVDirtyFla.c)
 *     ?GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ @ 0x1800293B4 (-GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ.c)
 *     ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXVDirtyFlags@@@Z @ 0x180029674 (-SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXVDirtyFlags@@@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated(CSecondaryWindowRepresentation *this)
{
  struct CWindowData *RepresentationWindowData; // rax
  float v3; // xmm0_4
  double v4; // xmm2_8
  _DWORD *v5; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  RepresentationWindowData = CWindowRepresentation::GetRepresentationWindowData((CSecondaryWindowRepresentation *)((char *)this + 64));
  if ( RepresentationWindowData )
  {
    v3 = *((double *)this + 24);
    v4 = (double)*((unsigned __int8 *)RepresentationWindowData + 408) / 255.0;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v4 - v3) & _xmm) > 0.0000011920929 )
    {
      *((double *)this + 24) = v4;
      v5 = ___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__00_00__YA_AVDirtyFlags__XZ(&v7);
      CSecondaryWindowRepresentation::SetDirtyFlags(this, (unsigned int)*v5);
    }
  }
  return 0LL;
}
