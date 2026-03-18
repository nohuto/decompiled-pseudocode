/*
 * XREFs of ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x1401B3040
 * Callers:
 *     ?SetFloatProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x140195840 (-SetFloatProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@.c)
 *     ?SetFloatProperty@CVisualMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14019A010 (-SetFloatProperty@CVisualMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z.c)
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCVisualGroupMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14023C030 (-SetFloatProperty@-$CSharedResourceMarshaler@VCVisualGroupMarshaler@DirectComposition@@$01@Direc.c)
 *     ?SetFloatProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14023E6F0 (-SetFloatProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_.c)
 *     ?SetFloatProperty@CGeometryMarshaler@DirectComposition@@MEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14023ECC0 (-SetFloatProperty@CGeometryMarshaler@DirectComposition@@MEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z.c)
 *     ?SetFloatProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x1402438B0 (-SetFloatProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID.c)
 *     ?SetFloatProperty@CDropShadowMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x1402446F0 (-SetFloatProperty@CDropShadowMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N.c)
 *     ?SetFloatProperty@CVisualCaptureMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x140244B40 (-SetFloatProperty@CVisualCaptureMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPE.c)
 *     ?SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x140245170 (-SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@.c)
 *     ?SetFloatProperty@CProjectedShadowSceneMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x1402468C0 (-SetFloatProperty@CProjectedShadowSceneMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_.c)
 * Callees:
 *     ?IsIndividuallyAddressableElement@ResPropInfo@DirectComposition@@QEBA_NUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140193ABC (-IsIndividuallyAddressableElement@ResPropInfo@DirectComposition@@QEBA_NUDCOMPOSITION_PROPERTY_ID.c)
 *     ?SetElement@CMarshaledArrayBase@DirectComposition@@QEAAJPEBXI_K@Z @ 0x14023E00C (-SetElement@CMarshaledArrayBase@DirectComposition@@QEAAJPEBXI_K@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CResourceMarshaler::SetFloatProperty(
        __int64 a1,
        unsigned int a2,
        float a3,
        _BYTE *a4)
{
  _DWORD *v7; // rax
  __int64 result; // rax
  unsigned __int64 v9; // r9
  __int64 v10; // r10
  float v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  v7 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 248LL))(a1);
  if ( !v7 || v7[3] != 18 )
    return 3221225485LL;
  if ( *v7 == v7[1] )
  {
    *(float *)((unsigned int)v7[4] + a1) = a3;
    *(_DWORD *)((unsigned int)v7[5] + a1) |= v7[6];
    result = 0LL;
    *a4 = 1;
    return result;
  }
  if ( DirectComposition::ResPropInfo::IsIndividuallyAddressableElement(v7, a2) )
    return DirectComposition::CMarshaledArrayBase::SetElement(
             (DirectComposition::CMarshaledArrayBase *)(a1 + *(unsigned int *)(v10 + 16)),
             &v11,
             a2 - (unsigned int)v9 - 1,
             v9);
  else
    return 3221225485LL;
}
