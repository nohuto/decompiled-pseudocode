/*
 * XREFs of RIMTransformPhysicalPointToScreen @ 0x1400F8BB8
 * Callers:
 *     RIMApplyTransforms @ 0x1400F6F1C (RIMApplyTransforms.c)
 *     RIMSetContactBoundary @ 0x1400F90EC (RIMSetContactBoundary.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x140205ED0 (RIMTransformCoordinatesFromDigitizer.c)
 * Callees:
 *     RIMConvertPointCoordinates @ 0x1400F8C88 (RIMConvertPointCoordinates.c)
 *     ApiSetTransformForInputMagnification @ 0x1401B5CBC (ApiSetTransformForInputMagnification.c)
 */

__int64 __fastcall RIMTransformPhysicalPointToScreen(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int128 v3; // xmm0
  __int128 v6; // xmm1
  __int64 v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_OWORD *)(a1 + 160);
  v6 = *(_OWORD *)(a1 + 176);
  v8 = *a2;
  v10 = v3;
  v11 = v6;
  if ( !(unsigned int)((__int64 (__fastcall *)(__int64, __int128 *, __int128 *, _QWORD *))RIMConvertPointCoordinates)(
                        v8,
                        &v11,
                        &v10,
                        a3) )
    *a3 = 0LL;
  ApiSetTransformForInputMagnification(a1, a2);
  return 0LL;
}
