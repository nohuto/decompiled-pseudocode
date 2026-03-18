/*
 * XREFs of ?SetProperty@CInteractionTracker2@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180276A20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTrackerBase@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x180137108 (-BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteracti.c)
 *     ?SetMaxPositionInternal@CInteractionTracker2@@AEAAXAEBUD2DVector3@@@Z @ 0x180276274 (-SetMaxPositionInternal@CInteractionTracker2@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetMaxScaleInternal@CInteractionTracker2@@AEAAXM@Z @ 0x1802763A4 (-SetMaxScaleInternal@CInteractionTracker2@@AEAAXM@Z.c)
 *     ?SetMinPositionInternal@CInteractionTracker2@@AEAAXAEBUD2DVector3@@@Z @ 0x180276448 (-SetMinPositionInternal@CInteractionTracker2@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetMinScaleInternal@CInteractionTracker2@@AEAAXM@Z @ 0x18027655C (-SetMinScaleInternal@CInteractionTracker2@@AEAAXM@Z.c)
 *     ?SetPositionInertiaDecayRateInternal@CInteractionTracker2@@AEAAXAEBUD2DVector3@@@Z @ 0x180276600 (-SetPositionInertiaDecayRateInternal@CInteractionTracker2@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetProperty@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802767F4 (-SetProperty@-$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@.c)
 *     ?SetScaleInertiaDecayRateInternal@CInteractionTracker2@@AEAAXM@Z @ 0x180276E2C (-SetScaleInertiaDecayRateInternal@CInteractionTracker2@@AEAAXM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTracker2::SetProperty(__int64 a1, __int64 a2, int a3, const struct D2DVector3 *a4)
{
  char v4; // r12
  char v5; // r15
  float v6; // xmm6_4
  char v7; // bp
  char v8; // si
  int v11; // ebx
  __int64 v13; // rcx
  char v14; // dl
  char v15; // r9
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v19; // [rsp+30h] [rbp-48h]

  v4 = 0;
  v5 = 0;
  v6 = *(float *)(a1 + 480);
  v7 = 0;
  v8 = 0;
  v19 = *(_QWORD *)(a1 + 424);
  v11 = a2;
  if ( a3 != 18 )
  {
    if ( a3 == 52 )
    {
      switch ( (_DWORD)a2 )
      {
        case 6:
          CInteractionTracker2::SetMinPositionInternal((CInteractionTracker2 *)a1, a4);
          break;
        case 7:
          CInteractionTracker2::SetMaxPositionInternal((CInteractionTracker2 *)a1, a4);
          break;
        case 0x42:
          (*(void (__fastcall **)(__int64, const struct D2DVector3 *, _QWORD))(*(_QWORD *)a1 + 472LL))(a1, a4, 0LL);
          goto LABEL_26;
        case 0x43:
          CInteractionTracker2::SetPositionInertiaDecayRateInternal((CInteractionTracker2 *)a1, a4);
          goto LABEL_26;
        default:
          goto LABEL_15;
      }
      goto LABEL_22;
    }
LABEL_15:
    v4 = 1;
    goto LABEL_26;
  }
  switch ( (_DWORD)a2 )
  {
    case 8:
      CInteractionTracker2::SetMinScaleInternal((CInteractionTracker2 *)a1, *(float *)a4);
      break;
    case 0xA:
      CInteractionTracker2::SetMaxScaleInternal((CInteractionTracker2 *)a1, *(float *)a4);
      break;
    case 0x45:
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 496LL))(a1, a2, 0LL);
      goto LABEL_26;
    case 0x46:
      CInteractionTracker2::SetScaleInertiaDecayRateInternal((CInteractionTracker2 *)a1, *(float *)a4);
      goto LABEL_26;
    default:
      goto LABEL_15;
  }
  if ( v6 != *(float *)(a1 + 480) )
    v5 = 1;
LABEL_22:
  if ( *(float *)&v19 != *(float *)(a1 + 424) )
    v7 = 1;
  if ( *((float *)&v19 + 1) != *(float *)(a1 + 428) )
    v8 = 1;
LABEL_26:
  v13 = *(_QWORD *)(a1 + 1048);
  if ( v13 )
  {
    v14 = (v5 != 0 ? 4 : 0) | 1;
    if ( !v7 )
      v14 = v5 != 0 ? 4 : 0;
    v15 = v14 | 2;
    if ( !v8 )
      v15 = v14;
    CInteractionTrackerBindingManager::BringBoundTrackersPositionAndScaleInSync(v13, a1, a1, v15);
  }
  if ( v4
    && (v16 = CInteractionTracker2GeneratedT<CInteractionTracker2,CInteractionTrackerBase>::SetProperty(
                a1,
                v11,
                a3,
                (__int64)a4),
        v17 = v16,
        v16 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x4DFu, 0LL);
  }
  else
  {
    return 0;
  }
  return v17;
}
