/*
 * XREFs of ?UpdateWorldTransform@CVisual@@AEBAXPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1802611CC
 * Callers:
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800D4AA0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 * Callees:
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x1800416D0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?HasInteraction@CVisual@@QEBA_NXZ @ 0x1800A8F10 (-HasInteraction@CVisual@@QEBA_NXZ.c)
 *     ?NotifyMidManipulationPropertyChange@CVisual@@AEAAXPEBVCMILMatrix@@@Z @ 0x1800E5408 (-NotifyMidManipulationPropertyChange@CVisual@@AEAAXPEBVCMILMatrix@@@Z.c)
 *     ??9CMILMatrix@@QEBA_NAEBV0@@Z @ 0x180148AB0 (--9CMILMatrix@@QEBA_NAEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ @ 0x180226608 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ.c)
 *     ?WorldTransformChangedInCurrentFrame@CTreeData@@IEBA_NXZ @ 0x18022CEC8 (-WorldTransformChangedInCurrentFrame@CTreeData@@IEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::UpdateWorldTransform(
        CVisual *this,
        CVisual **a2,
        struct CTreeData *a3,
        char a4,
        const struct CTreeData *a5)
{
  const struct CMILMatrix *v8; // rsi
  bool v9; // bl
  char IsEnabled; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  bool HasInteraction; // al
  float v14[20]; // [rsp+30h] [rbp-61h] BYREF
  _BYTE v15[64]; // [rsp+80h] [rbp-11h] BYREF
  int v16; // [rsp+C0h] [rbp+2Fh]
  bool v17; // [rsp+108h] [rbp+77h] BYREF

  v14[16] = 0.0;
  v16 = 0;
  v17 = 0;
  v8 = (const struct CMILMatrix *)(((unsigned __int64)a5 + 280) & -(__int64)(a5 != 0LL));
  CVisual::CalcTransform(
    this,
    a2,
    v8,
    &v17,
    (struct CMILMatrix *)v14,
    (struct CMILMatrix *)((unsigned __int64)v15 & -(__int64)(*((_QWORD *)this + 30) != 0LL)));
  v9 = a4 || !v8 || v17 && CMILMatrix::operator!=((float *)v8, v14);
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Comp_Racy>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Comp_Racy>::GetImpl'::`2'::impl);
  v11 = *((_QWORD *)this + 30);
  LOBYTE(v12) = v9;
  if ( IsEnabled )
  {
    (*(void (__fastcall **)(struct CTreeData *, float *, __int64, unsigned __int64))(*(_QWORD *)a3 + 48LL))(
      a3,
      v14,
      v12,
      (unsigned __int64)v15 & -(__int64)(v11 != 0));
    if ( !CVisual::HasInteraction(this) )
      return;
    HasInteraction = CTreeData::WorldTransformChangedInCurrentFrame(a3);
  }
  else
  {
    if ( !(*(unsigned __int8 (__fastcall **)(struct CTreeData *, float *, __int64, unsigned __int64))(*(_QWORD *)a3 + 48LL))(
            a3,
            v14,
            v12,
            (unsigned __int64)v15 & -(__int64)(v11 != 0)) )
      return;
    HasInteraction = CVisual::HasInteraction(this);
  }
  if ( HasInteraction )
    CVisual::NotifyMidManipulationPropertyChange(this, (const struct CMILMatrix *)v14);
}
