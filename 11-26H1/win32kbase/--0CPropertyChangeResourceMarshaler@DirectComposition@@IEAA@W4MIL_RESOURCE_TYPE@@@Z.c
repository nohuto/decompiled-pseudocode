/*
 * XREFs of ??0CPropertyChangeResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1400562C8
 * Callers:
 *     ??0CVisualCaptureMarshaler@DirectComposition@@QEAA@XZ @ 0x140054E60 (--0CVisualCaptureMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CProjectedShadowReceiverMarshaler@DirectComposition@@QEAA@XZ @ 0x140055230 (--0CProjectedShadowReceiverMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CProjectedShadowCasterMarshaler@DirectComposition@@QEAA@XZ @ 0x140055310 (--0CProjectedShadowCasterMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CCompositionShadowMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140055C2C (--0CCompositionShadowMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CComponentTransform2DMarshaler@DirectComposition@@QEAA@XZ @ 0x140056124 (--0CComponentTransform2DMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CEffectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14005621C (--0CEffectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CGeometryMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140056268 (--0CGeometryMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CPropertySetMarshaler@DirectComposition@@QEAA@XZ @ 0x14005628C (--0CPropertySetMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x140056D6C (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x14018B4DC (-GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 *     ??0CVisualMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1401C516C (--0CVisualMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CProjectedShadowSceneMarshaler@DirectComposition@@QEAA@XZ @ 0x14022A790 (--0CProjectedShadowSceneMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CAnimationControllerMarshaler@DirectComposition@@QEAA@XZ @ 0x14023B2AC (--0CAnimationControllerMarshaler@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ??0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1400562EC (--0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CPropertyChangeResourceMarshaler::CPropertyChangeResourceMarshaler(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler(a1, a2);
  result = v2;
  *v2 = &DirectComposition::CCompositionShadowMarshaler::`vftable';
  return result;
}
