/*
 * XREFs of RIMTransformPointerDevicePointToPhysical @ 0x1400F8C30
 * Callers:
 *     RIMApplyTransforms @ 0x1400F6F1C (RIMApplyTransforms.c)
 *     rimComputeHimetricGeometry @ 0x1400F7104 (rimComputeHimetricGeometry.c)
 *     RIMSetContactBoundary @ 0x1400F90EC (RIMSetContactBoundary.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x140205ED0 (RIMTransformCoordinatesFromDigitizer.c)
 *     RIMTransformDimensionFromDigitizer @ 0x140205FC0 (RIMTransformDimensionFromDigitizer.c)
 * Callees:
 *     RIMConvertPointCoordinates @ 0x1400F8C88 (RIMConvertPointCoordinates.c)
 */

__int64 __fastcall RIMTransformPointerDevicePointToPhysical(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int128 v4; // xmm1
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  v4 = *(_OWORD *)(a1 + 192);
  v6 = *(_OWORD *)(a1 + 176);
  v7 = v4;
  result = ((__int64 (__fastcall *)(__int64, __int128 *, __int128 *, _QWORD *))RIMConvertPointCoordinates)(
             a2,
             &v7,
             &v6,
             a3);
  if ( !(_DWORD)result )
    *a3 = 0LL;
  return result;
}
