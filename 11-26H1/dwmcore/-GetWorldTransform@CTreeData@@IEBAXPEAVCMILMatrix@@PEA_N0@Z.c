/*
 * XREFs of ?GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z @ 0x1801E5A1C
 * Callers:
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z @ 0x180260DD4 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ @ 0x180226608 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ.c)
 */

void __fastcall CTreeData::GetWorldTransform(CTreeData *this, struct CMILMatrix *a2, bool *a3, struct CMILMatrix *a4)
{
  bool v8; // zf
  const char *v9; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v8 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Comp_Racy>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Comp_Racy>::GetImpl'::`2'::impl) == 0;
  v10 = *((_QWORD *)this + 28);
  if ( v8 )
  {
    if ( !v10 )
      ModuleFailFastForHRESULT(-2003292412, retaddr);
    *(_OWORD *)a2 = *(_OWORD *)((char *)this + 280);
    *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 296);
    *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)this + 312);
    *((_OWORD *)a2 + 3) = *(_OWORD *)((char *)this + 328);
    *((_DWORD *)a2 + 16) = *((_DWORD *)this + 86);
    *a3 = *((_BYTE *)this + 11);
    if ( a4 )
    {
      v11 = *((_QWORD *)this + 32);
      goto LABEL_5;
    }
  }
  else
  {
    if ( !v10 )
      wil::details::in1diag3::_FailFast_Unexpected(
        (wil::details::in1diag3 *)retaddr,
        (void *)0xF0,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\treedata.cpp",
        v9);
    *(_OWORD *)a2 = *(_OWORD *)((char *)this + 280);
    *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 296);
    *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)this + 312);
    *((_OWORD *)a2 + 3) = *(_OWORD *)((char *)this + 328);
    *((_DWORD *)a2 + 16) = *((_DWORD *)this + 86);
    *a3 = *((_BYTE *)this + 11);
    if ( a4 )
    {
      v11 = *((_QWORD *)this + 33);
LABEL_5:
      if ( v11 )
      {
        *(_OWORD *)a4 = *(_OWORD *)v11;
        *((_OWORD *)a4 + 1) = *(_OWORD *)(v11 + 16);
        *((_OWORD *)a4 + 2) = *(_OWORD *)(v11 + 32);
        *((_OWORD *)a4 + 3) = *(_OWORD *)(v11 + 48);
        v12 = *(_DWORD *)(v11 + 64);
      }
      else
      {
        *(_OWORD *)a4 = *(_OWORD *)((char *)this + 280);
        *((_OWORD *)a4 + 1) = *(_OWORD *)((char *)this + 296);
        *((_OWORD *)a4 + 2) = *(_OWORD *)((char *)this + 312);
        *((_OWORD *)a4 + 3) = *(_OWORD *)((char *)this + 328);
        v12 = *((_DWORD *)this + 86);
      }
      *((_DWORD *)a4 + 16) = v12;
    }
  }
}
