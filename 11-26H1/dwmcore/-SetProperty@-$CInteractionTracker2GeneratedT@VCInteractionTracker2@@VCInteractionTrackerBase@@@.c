/*
 * XREFs of ?SetProperty@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802767F4
 * Callers:
 *     ?SetProperty@CInteractionTracker2@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180276A20 (-SetProperty@CInteractionTracker2@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCenterPointX@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@QEAAJM@Z @ 0x18024A528 (-SetCenterPointX@-$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBas.c)
 *     ?SetCenterPointY@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@QEAAJM@Z @ 0x18024A578 (-SetCenterPointY@-$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBas.c)
 *     ?SetDwmRestartValues@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@QEAAJUD2D_POINT_3F@@@Z @ 0x18024AF24 (-SetDwmRestartValues@-$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTracke.c)
 *     ?SetInertiaDecayRates@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@QEAAJUD2D_POINT_3F@@@Z @ 0x18024B2EC (-SetInertiaDecayRates@-$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrack.c)
 *     ?SetMaxPosition@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@QEAAJUD2D_POINT_2F@@@Z @ 0x18024C0D0 (-SetMaxPosition@-$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase.c)
 *     ?SetMinPosition@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@QEAAJUD2D_POINT_2F@@@Z @ 0x18024C230 (-SetMinPosition@-$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase.c)
 *     ?SetRequestedScale@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@QEAAJM@Z @ 0x18024E730 (-SetRequestedScale@-$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerB.c)
 */

__int64 __fastcall CInteractionTracker2GeneratedT<CInteractionTracker2,CInteractionTrackerBase>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  __int64 v13; // rdx
  int restarted; // ebx
  int v15; // eax
  int v16; // eax
  __int64 v17; // [rsp+20h] [rbp-18h] BYREF
  int v18; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a2 - 2;
  if ( !v4 )
  {
    if ( a3 != 52 )
    {
      v13 = 4122LL;
      goto LABEL_46;
    }
    v16 = *(_DWORD *)(a4 + 8);
    v17 = *(_QWORD *)a4;
    v18 = v16;
    restarted = CInteractionTracker2GeneratedT<CInteractionTracker2,CInteractionTrackerBase>::SetDwmRestartValues(
                  a1,
                  &v17);
    if ( restarted < 0 )
    {
      v13 = 4123LL;
      goto LABEL_47;
    }
    return 0LL;
  }
  v5 = v4 - 2;
  if ( !v5 )
  {
    if ( a3 != 52 )
    {
      v13 = 4127LL;
      goto LABEL_46;
    }
    v15 = *(_DWORD *)(a4 + 8);
    v17 = *(_QWORD *)a4;
    v18 = v15;
    restarted = CInteractionTracker2GeneratedT<CInteractionTracker2,CInteractionTrackerBase>::SetInertiaDecayRates(
                  a1,
                  &v17);
    if ( restarted < 0 )
    {
      v13 = 4128LL;
      goto LABEL_47;
    }
    return 0LL;
  }
  v6 = v5 - 2;
  if ( !v6 )
  {
    if ( a3 != 35 )
    {
      v13 = 4132LL;
      goto LABEL_46;
    }
    restarted = CInteractionTracker2GeneratedT<CInteractionTracker2,CInteractionTrackerBase>::SetMinPosition(
                  a1,
                  *(_QWORD *)a4);
    if ( restarted < 0 )
    {
      v13 = 4133LL;
      goto LABEL_47;
    }
    return 0LL;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( a3 != 35 )
    {
      v13 = 4137LL;
      goto LABEL_46;
    }
    restarted = CInteractionTracker2GeneratedT<CInteractionTracker2,CInteractionTrackerBase>::SetMaxPosition(
                  a1,
                  *(_QWORD *)a4);
    if ( restarted < 0 )
    {
      v13 = 4138LL;
      goto LABEL_47;
    }
    return 0LL;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( a3 != 18 )
    {
      v13 = 4142LL;
      goto LABEL_46;
    }
    if ( *(float *)a4 != *(float *)(a1 + 236) )
    {
      *(_DWORD *)(a1 + 236) = *(_DWORD *)a4;
      *(_BYTE *)(a1 + 830) |= 8u;
    }
    return 0LL;
  }
  v9 = v8 - 2;
  if ( !v9 )
  {
    if ( a3 != 18 )
    {
      v13 = 4147LL;
      goto LABEL_46;
    }
    if ( *(float *)a4 != *(float *)(a1 + 244) )
    {
      *(_DWORD *)(a1 + 244) = *(_DWORD *)a4;
      *(_BYTE *)(a1 + 830) |= 0x10u;
    }
    return 0LL;
  }
  v10 = v9 - 2;
  if ( !v10 )
  {
    if ( a3 != 18 )
    {
      v13 = 4152LL;
      goto LABEL_46;
    }
    restarted = CInteractionTracker2GeneratedT<CInteractionTracker2,CInteractionTrackerBase>::SetRequestedScale(
                  a1,
                  *(float *)a4);
    if ( restarted < 0 )
    {
      v13 = 4153LL;
      goto LABEL_47;
    }
    return 0LL;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( a3 != 18 )
    {
      v13 = 4157LL;
      goto LABEL_46;
    }
    restarted = CInteractionTracker2GeneratedT<CInteractionTracker2,CInteractionTrackerBase>::SetCenterPointX(
                  a1,
                  *(float *)a4);
    if ( restarted < 0 )
    {
      v13 = 4158LL;
      goto LABEL_47;
    }
    return 0LL;
  }
  if ( v11 != 1 )
    return 2147942487LL;
  if ( a3 != 18 )
  {
    v13 = 4162LL;
LABEL_46:
    restarted = -2147024809;
    goto LABEL_47;
  }
  restarted = CInteractionTracker2GeneratedT<CInteractionTracker2,CInteractionTrackerBase>::SetCenterPointY(
                a1,
                *(float *)a4);
  if ( restarted >= 0 )
    return 0LL;
  v13 = 4163LL;
LABEL_47:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
    (const char *)(unsigned int)restarted);
  return (unsigned int)restarted;
}
