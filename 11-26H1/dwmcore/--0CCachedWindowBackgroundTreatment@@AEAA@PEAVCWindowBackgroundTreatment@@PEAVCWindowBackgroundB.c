/*
 * XREFs of ??0CCachedWindowBackgroundTreatment@@AEAA@PEAVCWindowBackgroundTreatment@@PEAVCWindowBackgroundBitmapProducer@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18016E01C
 * Callers:
 *     ?Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@AEBVCMILMatrix@@AEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x18016DF04 (-Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@AEBVCMILMatrix@@AEB.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

__int64 __fastcall CCachedWindowBackgroundTreatment::CCachedWindowBackgroundTreatment(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CCachedWindowBackgroundTreatment::`vftable';
  *(_QWORD *)(a1 + 16) = a2;
  if ( a2 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a2 + 8));
  *(_QWORD *)(a1 + 24) = a3;
  if ( a3 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a3 + 8));
  *(_OWORD *)(a1 + 32) = *(_OWORD *)a4;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a4 + 48);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a4 + 64);
  *(_OWORD *)(a1 + 100) = *(_OWORD *)a5;
  *(_QWORD *)(a1 + 116) = *(_QWORD *)(a5 + 16);
  result = a1;
  *(_OWORD *)(a1 + 124) = *a6;
  return result;
}
