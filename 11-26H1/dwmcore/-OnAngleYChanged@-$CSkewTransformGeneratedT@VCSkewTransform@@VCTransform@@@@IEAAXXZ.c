/*
 * XREFs of ?OnAngleYChanged@?$CSkewTransformGeneratedT@VCSkewTransform@@VCTransform@@@@IEAAXXZ @ 0x180218FCC
 * Callers:
 *     ?SetAngleY@?$CSkewTransformGeneratedT@VCSkewTransform@@VCTransform@@@@QEAAJM@Z @ 0x180218FA0 (-SetAngleY@-$CSkewTransformGeneratedT@VCSkewTransform@@VCTransform@@@@QEAAJM@Z.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 */

__int64 __fastcall CSkewTransformGeneratedT<CSkewTransform,CTransform>::OnAngleYChanged(_QWORD *a1)
{
  if ( a1[6] )
    CResource::InvalidateConsumingAnimationsInternal((__int64)a1);
  return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 80LL))(a1, 0LL, 0LL);
}
