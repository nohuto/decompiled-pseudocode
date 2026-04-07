/*
 * XREFs of ?SetCenter@CVisual@@QEAAXMM@Z @ 0x1800DE334
 * Callers:
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x180079DBC (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B01BC (-CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x1800B3900 (-StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ.c)
 *     ?UpdateParentVisual@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D42B8 (-UpdateParentVisual@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@03$00@@YA?AVDirtyFlags@@XZ @ 0x1800166EC (--$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@03$00@@YA-AVDirtyFlags@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::SetCenter(CVisual *this, float a2, float a3)
{
  __int32 v3; // xmm3_4
  _DWORD *v4; // rax
  __int64 v5; // r9
  int v6; // [rsp+38h] [rbp+10h] BYREF

  COERCE_FLOAT(v3 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 22) - a2) & v3) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 23) - a3) & v3) > 0.0000011920929 )
  {
    *((float *)this + 22) = a2;
    *((float *)this + 23) = a3;
    v4 = ___ConvertDirtyEnumToFlag__MW4VisualDirtyFlags_CVisual__03_00__YA_AVDirtyFlags__XZ(&v6);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, (unsigned int)*v4);
  }
}
