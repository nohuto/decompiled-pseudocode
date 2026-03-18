/*
 * XREFs of ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x180049EC0
 * Callers:
 *     ?GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x18013DF3C (-GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ @ 0x1801D5FB8 (-EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ.c)
 *     ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTrackerBase@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x180278D64 (-SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTrackerBas.c)
 *     ?GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180289DE0 (-GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 * Callees:
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x180046058 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800496C0 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?SetValue@CExpressionValue@@QEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180049AB0 (-SetValue@CExpressionValue@@QEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z @ 0x180080910 (-CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetPathValue@CExpressionValue@@QEAAXPEBVCPathData@@@Z @ 0x18011008C (-SetPathValue@CExpressionValue@@QEAAXPEBVCPathData@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyframeValue::GetValue(
        KeyframeValue *this,
        struct CExpressionValueStack *a2,
        struct CExpressionValue *a3,
        const char *a4)
{
  int v5; // r8d
  int v6; // eax
  const struct CPathData *v7; // rdi
  int v8; // eax
  int v9; // xmm6_4
  unsigned int v10; // edi
  int v12; // r8d
  _QWORD *v13; // r8
  unsigned __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rsi
  const struct CPathData **v21; // r14
  int v22; // eax
  int v23; // edx
  CExpressionValue *v24; // rcx
  const struct CPathData *v25; // rdx
  __int64 v26; // rdx
  char v27; // di
  unsigned int v28; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v30; // [rsp+50h] [rbp+8h] BYREF

  v5 = *((_DWORD *)this + 5);
  if ( v5 == 1 )
  {
    v6 = *((_DWORD *)this + 22);
    v7 = (KeyframeValue *)((char *)this + 24);
    switch ( v6 )
    {
      case 18:
        v9 = *(_DWORD *)v7;
        if ( *((_DWORD *)a3 + 16) == 11 )
          (*(void (__fastcall **)(_QWORD, struct CExpressionValueStack *))(**(_QWORD **)a3 + 16LL))(*(_QWORD *)a3, a2);
        *(_DWORD *)a3 = v9;
        *((_DWORD *)a3 + 16) = 18;
        break;
      case 35:
        if ( *((_DWORD *)a3 + 16) == 11 )
          (*(void (__fastcall **)(_QWORD, struct CExpressionValueStack *))(**(_QWORD **)a3 + 16LL))(*(_QWORD *)a3, a2);
        *((_DWORD *)a3 + 16) = 35;
        *(_QWORD *)a3 = *(_QWORD *)v7;
        break;
      case 11:
        v7 = *(const struct CPathData **)v7;
        v8 = 0;
LABEL_6:
        switch ( v8 )
        {
          case 0:
            v25 = v7;
            v24 = a3;
            goto LABEL_39;
          case 31:
            CExpressionValue::DestroyCurrent(a3);
            *((_DWORD *)a3 + 16) = 42;
            *(_DWORD *)a3 = *(_DWORD *)v7;
            return 0;
          case 41:
            if ( *((_DWORD *)a3 + 16) == 11 )
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a3 + 16LL))(*(_QWORD *)a3);
            *((_DWORD *)a3 + 16) = 52;
            *(_QWORD *)a3 = *(_QWORD *)v7;
            *((_DWORD *)a3 + 2) = *((_DWORD *)v7 + 2);
            return 0;
          case 58:
            CExpressionValue::DestroyCurrent(a3);
            *((_DWORD *)a3 + 16) = 69;
            *(_OWORD *)a3 = *(_OWORD *)v7;
            return 0;
          case 59:
            if ( *((_DWORD *)a3 + 16) == 11 )
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a3 + 16LL))(*(_QWORD *)a3);
            *((_DWORD *)a3 + 16) = 70;
            *(_OWORD *)a3 = *(_OWORD *)v7;
            return 0;
          case 60:
            CExpressionValue::DestroyCurrent(a3);
            *((_DWORD *)a3 + 16) = 71;
            *(_OWORD *)a3 = *(_OWORD *)v7;
            return 0;
          case 93:
            CExpressionValue::DestroyCurrent(a3);
            *((_DWORD *)a3 + 16) = 104;
            *(_OWORD *)a3 = *(_OWORD *)v7;
            *((_QWORD *)a3 + 2) = *((_QWORD *)v7 + 2);
            return 0;
          case 254:
            CExpressionValue::DestroyCurrent(a3);
            *((_DWORD *)a3 + 16) = 265;
            *(_OWORD *)a3 = *(_OWORD *)v7;
            *((_OWORD *)a3 + 1) = *((_OWORD *)v7 + 1);
            *((_OWORD *)a3 + 2) = *((_OWORD *)v7 + 2);
            *((_OWORD *)a3 + 3) = *((_OWORD *)v7 + 3);
            return 0;
          default:
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x2D6,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvalue.cpp",
              a4);
        }
      default:
        if ( v6 )
        {
          if ( v6 != 17 )
          {
            v8 = v6 - 11;
            goto LABEL_6;
          }
          v27 = *(_BYTE *)v7;
          if ( *((_DWORD *)a3 + 16) == 11 )
            (*(void (__fastcall **)(_QWORD, struct CExpressionValueStack *))(**(_QWORD **)a3 + 16LL))(*(_QWORD *)a3, a2);
          *((_DWORD *)a3 + 16) = 17;
          *(_BYTE *)a3 = v27;
        }
        else
        {
          if ( *((_DWORD *)a3 + 16) == 11 )
            (*(void (__fastcall **)(_QWORD, struct CExpressionValueStack *))(**(_QWORD **)a3 + 16LL))(*(_QWORD *)a3, a2);
          *((_DWORD *)a3 + 16) = 0;
        }
        break;
    }
    return 0;
  }
  v12 = v5 - 2;
  if ( v12 )
  {
    if ( v12 != 1 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    v20 = *((_QWORD *)this + 3);
    v21 = (const struct CPathData **)(v20 + 296);
    if ( *(_DWORD *)(v20 + 152) == 11 )
    {
      if ( !*v21 )
      {
LABEL_33:
        v22 = CKeyframeAnimation::SampleStartingValue(*((CKeyframeAnimation **)this + 3));
        v10 = v22;
        if ( v22 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x725,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframeanimation.cpp",
            (const char *)(unsigned int)v22,
            v28);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x50u, 0LL);
          return v10;
        }
      }
    }
    else if ( !*(_QWORD *)(v20 + 288) )
    {
      goto LABEL_33;
    }
    v23 = *(_DWORD *)(v20 + 152);
    v24 = a3;
    if ( v23 == 11 )
    {
      v25 = *v21;
LABEL_39:
      CExpressionValue::SetPathValue(v24, v25);
    }
    else
    {
      CExpressionValue::SetValue((int **)a3, v23, *(int **)(v20 + 288), a4);
    }
    return 0;
  }
  v13 = (_QWORD *)*((_QWORD *)this + 3);
  v14 = *((unsigned int *)this + 8);
  v15 = v13[39];
  if ( v14 >= (v13[40] - v15) >> 3 )
  {
    v10 = -2147467259;
    v26 = 1788LL;
    v19 = 2147500037LL;
LABEL_43:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframeanimation.cpp",
      (const char *)v19,
      v28);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x4Au, 0LL);
    return v10;
  }
  v16 = *(_QWORD *)(v15 + 8 * v14);
  v17 = v13[3];
  v30 = 0LL;
  v10 = CBaseExpression::CalculateValue(
          (CBaseExpression *)v16,
          a2,
          *(_QWORD *)(v17 + 880),
          (struct CalculateValueResult *)&v30);
  v19 = v10;
  if ( (v10 & 0x80000000) != 0 )
  {
    v26 = 1798LL;
    goto LABEL_43;
  }
  CExpressionValue::CopyFrom(a3, (const struct CExpressionValue *)(v16 + 80), v18, (const char *)v10);
  return 0;
}
