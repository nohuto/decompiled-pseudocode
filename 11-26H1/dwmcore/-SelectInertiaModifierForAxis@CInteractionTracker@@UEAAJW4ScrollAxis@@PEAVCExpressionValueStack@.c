/*
 * XREFs of ?SelectInertiaModifierForAxis@CInteractionTracker@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@PEAPEAUIScalarForce@@@Z @ 0x1801FE5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x18013C94C (-IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z.c)
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x1801A1C4C (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 *     ?Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z @ 0x1801D8B60 (-Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z.c)
 *     ?GetInitialValue@CScrollAnimation@@QEBAMXZ @ 0x1801DF9C0 (-GetInitialValue@CScrollAnimation@@QEBAMXZ.c)
 *     ?GetAnimationForAxis@CInteractionTracker@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z @ 0x1801E1C94 (-GetAnimationForAxis@CInteractionTracker@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z.c)
 *     ??0CScalarForce@@QEAA@PEAUIAccelerator@@@Z @ 0x18020E3E0 (--0CScalarForce@@QEAA@PEAUIAccelerator@@@Z.c)
 *     ?IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@PEA_N@Z @ 0x18021387C (-IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@PEA_N@Z.c)
 *     ??$?4VCScalarForce@@@?$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCScalarForce@@@12@@Z @ 0x1802181C8 (--$-4VCScalarForce@@@-$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComPtr@VCScalarFo.c)
 *     ?GetSampledConditionAnimation@CConditionalExpression@@QEBAXPEAPEAVCBaseExpression@@@Z @ 0x18026BF00 (-GetSampledConditionAnimation@CConditionalExpression@@QEBAXPEAPEAVCBaseExpression@@@Z.c)
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@PEAM@Z @ 0x18026BF9C (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@PEAM@Z.c)
 *     ??$?4VCExpressionForce@@@?$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@PEAVCExpressionForce@@@Z @ 0x18027022C (--$-4VCExpressionForce@@@-$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@PEAVCExpressionForc.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1410633019@@@details@wil@@QEAA_NXZ @ 0x18027130C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1410633019@@@details@wil@@QEAA_NX.c)
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x18027B4B0 (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 *     ??0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x18028E7B8 (--0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTracker::SelectInertiaModifierForAxis(
        __int64 a1,
        int a2,
        struct CExpressionValueStack *a3,
        __int64 *a4)
{
  __int64 v4; // r13
  __int64 v5; // rsi
  struct CExpressionValueStack *v7; // r14
  int v8; // r12d
  CConditionalExpression *v9; // rax
  CConditionalExpression *v10; // rdi
  int IsAnyConditionSatisfied; // eax
  unsigned int v12; // r14d
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  char IsEnabled; // al
  struct CBaseExpression *v17; // rbx
  CScrollAnimation *v18; // rdi
  int ForceForAxis; // eax
  int v20; // eax
  CScrollAnimation *v21; // rdi
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  LPVOID v26; // rax
  CScrollAnimation *v27; // rbx
  LPVOID v28; // r14
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rax
  struct IAccelerator *v32; // rax
  struct IAccelerator *v33; // r14
  __int64 v34; // rax
  void (__fastcall *v35)(struct IAccelerator *); // rax
  CScalarForce *v36; // rax
  struct CBaseExpression *v37; // rax
  __int64 v38; // rdi
  CScrollAnimation *v39; // rbx
  float Velocity; // xmm6_4
  float InitialValue; // xmm0_4
  unsigned int v42; // [rsp+20h] [rbp-40h]
  __int64 v43; // [rsp+30h] [rbp-30h] BYREF
  CScrollAnimation *v44; // [rsp+38h] [rbp-28h] BYREF
  struct CBaseExpression *v45; // [rsp+A0h] [rbp+40h] BYREF
  struct CExpressionValueStack *v46; // [rsp+B0h] [rbp+50h]
  __int64 *v47; // [rsp+B8h] [rbp+58h]

  v47 = a4;
  v46 = a3;
  v4 = a2;
  v5 = 0LL;
  v43 = 0LL;
  v7 = a3;
  v44 = 0LL;
  if ( !InteractionSourceManager::IsInertiaEnabledForAxis((InteractionSourceManager *)(a1 + 296)) )
    goto LABEL_41;
  v8 = 0;
  v9 = (CConditionalExpression *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 520LL))(
                                   a1,
                                   (unsigned int)v4);
  v10 = v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 87) = *((_DWORD *)v9 + 71);
    LOBYTE(v45) = 0;
    IsAnyConditionSatisfied = CConditionalExpression::IsAnyConditionSatisfied(v9, v7, (bool *)&v45);
    v12 = IsAnyConditionSatisfied;
    if ( IsAnyConditionSatisfied < 0 )
    {
      v42 = 3630;
      goto LABEL_60;
    }
    v7 = v46;
    v8 = (_BYTE)v45 != 0;
  }
  if ( (unsigned int)v4 > 1 )
  {
    if ( !v8 )
      goto LABEL_41;
  }
  else if ( !v8 )
  {
    v13 = 3;
    if ( (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 512LL))(a1, 3LL) )
    {
      v10 = (CConditionalExpression *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 512LL))(a1, 3LL);
      LOBYTE(v45) = 0;
      *((_DWORD *)v10 + 87) = *((_DWORD *)v10 + 71);
      IsAnyConditionSatisfied = CConditionalExpression::IsAnyConditionSatisfied(v10, v7, (bool *)&v45);
      v12 = IsAnyConditionSatisfied;
      if ( IsAnyConditionSatisfied < 0 )
      {
        v42 = 3652;
        goto LABEL_60;
      }
      if ( (_BYTE)v45 )
      {
        v8 = 2;
        goto LABEL_15;
      }
    }
LABEL_41:
    v24 = v43;
    v12 = 0;
    v43 = 0LL;
    v5 = v24;
    goto LABEL_42;
  }
  v13 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v4 + 504) + 4LL * *((int *)v10 + 87));
LABEL_15:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v44);
  CInteractionTracker::GetAnimationForAxis(a1, v4, &v44);
  v14 = v13 - 1;
  if ( !v14 )
  {
    LODWORD(v45) = 0;
    IsAnyConditionSatisfied = CConditionalExpression::GetValue(v10, v46, (float *)&v45);
    v12 = IsAnyConditionSatisfied;
    if ( IsAnyConditionSatisfied >= 0 )
    {
      v32 = (struct IAccelerator *)operator new(0x28uLL);
      v33 = v32;
      if ( !v32 )
      {
        v12 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xE6Au, 0LL);
        goto LABEL_42;
      }
      *((_DWORD *)v32 + 2) = 0;
      *(_QWORD *)v32 = &CSpringAccelerator::`vftable';
      ((void (__fastcall *)(struct IAccelerator *))CSpringAccelerator::`vftable')(v32);
      v34 = *(_QWORD *)v33;
      *((_DWORD *)v33 + 4) = 1117126656;
      *((_DWORD *)v33 + 5) = 1123680256;
      v35 = *(void (__fastcall **)(struct IAccelerator *))(v34 + 32);
      *((_DWORD *)v33 + 6) = 1102053376;
      v35(v33);
      v36 = (CScalarForce *)operator new(0x70uLL);
      if ( v36 )
      {
        v37 = CScalarForce::CScalarForce(v36, v33);
        v45 = v37;
        v38 = (__int64)v37;
        if ( v37 )
          (**(void (__fastcall ***)(struct CBaseExpression *))v37)(v37);
      }
      else
      {
        v38 = 0LL;
        v45 = 0LL;
      }
      v39 = v44;
      Velocity = CScrollAnimation::GetVelocity(v44);
      InitialValue = CScrollAnimation::GetInitialValue(v39);
      CScalarForce::Initialize(v38, v4 == 2, InitialValue, Velocity, 0);
      *(_DWORD *)((*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)v39 + 264LL))(v39) + 32) = 1114636288;
      Microsoft::WRL::ComPtr<IScalarForce>::operator=<CScalarForce>(&v43, &v45);
      if ( v38 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 8LL))(v38);
      (*(void (__fastcall **)(struct IAccelerator *))(*(_QWORD *)v33 + 8LL))(v33);
      goto LABEL_41;
    }
    v42 = 3684;
LABEL_60:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, IsAnyConditionSatisfied, v42, 0LL);
    goto LABEL_42;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v26 = operator new(0x88uLL);
    v27 = v44;
    v28 = v26;
    if ( v26 )
    {
      CScrollAnimation::GetVelocity(v44);
      CScrollAnimation::GetInitialValue(v27);
      v31 = CExpressionForce::CExpressionForce(v28, v29, v30, v10, v4);
    }
    else
    {
      v31 = 0LL;
    }
    Microsoft::WRL::ComPtr<IScalarForce>::operator=<CExpressionForce>(&v43, v31);
    *(_DWORD *)((*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)v27 + 264LL))(v27) + 32) = 1101004800;
    if ( !v43 )
    {
      v12 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xE8Du, 0LL);
      goto LABEL_42;
    }
    goto LABEL_41;
  }
  if ( v15 == 1 )
  {
    v45 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v45);
    CConditionalExpression::GetSampledConditionAnimation(v10, &v45);
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1410633019>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1410633019>::GetImpl'::`2'::impl);
    v17 = v45;
    if ( IsEnabled )
    {
      if ( !v45
        || !(*(unsigned __int8 (__fastcall **)(struct CBaseExpression *, __int64))(*(_QWORD *)v45 + 64LL))(v45, 87LL) )
      {
        goto LABEL_40;
      }
      (*(void (__fastcall **)(struct CBaseExpression *))(*(_QWORD *)v17 + 8LL))(v17);
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v43);
      v18 = v44;
      CScrollAnimation::GetVelocity(v44);
      CScrollAnimation::GetInitialValue(v18);
      if ( v8 == 1 )
      {
        ForceForAxis = CNaturalAnimation::GetForceForAxis(v17, 0LL);
        v12 = ForceForAxis;
        if ( ForceForAxis < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ForceForAxis, 0xEA6u, 0LL);
LABEL_25:
          (*(void (__fastcall **)(struct CBaseExpression *))(*(_QWORD *)v17 + 16LL))(v17);
LABEL_26:
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v45);
          goto LABEL_42;
        }
      }
      else
      {
        v20 = CNaturalAnimation::GetForceForAxis(v17, (unsigned int)v4);
        v12 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0xEAFu, 0LL);
          goto LABEL_25;
        }
      }
      *(_DWORD *)((*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)v18 + 264LL))(v18) + 32) = 1114636288;
      goto LABEL_39;
    }
    if ( v45 )
      (*(void (__fastcall **)(struct CBaseExpression *))(*(_QWORD *)v45 + 8LL))(v45);
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v43);
    v21 = v44;
    CScrollAnimation::GetVelocity(v44);
    CScrollAnimation::GetInitialValue(v21);
    if ( v8 == 1 )
    {
      v22 = CNaturalAnimation::GetForceForAxis(v17, 0LL);
      v12 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0xEC1u, 0LL);
        goto LABEL_35;
      }
    }
    else
    {
      v23 = CNaturalAnimation::GetForceForAxis(v17, (unsigned int)v4);
      v12 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0xECAu, 0LL);
LABEL_35:
        if ( !v17 )
          goto LABEL_26;
        goto LABEL_25;
      }
    }
    *(_DWORD *)((*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)v21 + 264LL))(v21) + 32) = 1114636288;
    if ( !v17 )
    {
LABEL_40:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v45);
      goto LABEL_41;
    }
LABEL_39:
    (*(void (__fastcall **)(struct CBaseExpression *))(*(_QWORD *)v17 + 16LL))(v17);
    goto LABEL_40;
  }
  v12 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0xED6u, 0LL);
LABEL_42:
  *v47 = v5;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v44);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v43);
  return v12;
}
