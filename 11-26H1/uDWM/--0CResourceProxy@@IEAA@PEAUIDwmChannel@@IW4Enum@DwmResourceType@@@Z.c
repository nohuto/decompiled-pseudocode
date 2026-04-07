/*
 * XREFs of ??0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x1800BF338
 * Callers:
 *     ??0CAnimationProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x180099CCC (--0CAnimationProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 *     ??0CAnimationTriggerProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x18009A348 (--0CAnimationTriggerProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 *     ??0CBaseGeometryProxy@@QEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x18009A370 (--0CBaseGeometryProxy@@QEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 *     ??0CBaseRenderTargetProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x18009A394 (--0CBaseRenderTargetProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 *     ??0CCaptureControllerProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x18009BDCC (--0CCaptureControllerProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 *     ??0CEffectGroupProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800B4C58 (--0CEffectGroupProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 *     ??0CMatrixTransform3dProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800BB9D4 (--0CMatrixTransform3dProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 *     ??0CMatrixTransformProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800BBA20 (--0CMatrixTransformProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 *     ??0CRotateTransformProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800BF384 (--0CRotateTransformProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 *     ??0CScaleTransformProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800BF3E0 (--0CScaleTransformProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 *     ??0CTransform3dGroupProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800CDFFC (--0CTransform3dGroupProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 *     ??0CTransformGroupProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800CE084 (--0CTransformGroupProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 *     ??0CTranslateTransformProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800D0788 (--0CTranslateTransformProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 *     ??0CVisualGroupProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800DE490 (--0CVisualGroupProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 *     ??0CVisualProxy@@QEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x1800DE4B8 (--0CVisualProxy@@QEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 *     ??0CVisualSurfaceProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800DE57C (--0CVisualSurfaceProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 *     ??0CVisualTargetProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800DE5A4 (--0CVisualTargetProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x180021380 (--0CBaseObject@@QEAA@XZ.c)
 */

__int64 __fastcall CResourceProxy::CResourceProxy(CBaseObject *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // rdx
  int v4; // r8d
  int v5; // r9d

  CBaseObject::CBaseObject(a1);
  result = v1;
  *(_QWORD *)(v1 + 16) = v3;
  *(_DWORD *)(v1 + 24) = v4;
  *(_DWORD *)(v1 + 28) = v5;
  return result;
}
