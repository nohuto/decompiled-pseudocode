/*
 * XREFs of ?SetProperty@CInteractionTracker@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801351E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTrackerBase@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x180137108 (-BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteracti.c)
 *     ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x180138ECC (-SetMaxScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetMinScale@CInteractionTracker@@AEAAXM@Z @ 0x180138FA4 (-SetMinScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetScaleInertiaDecayRate@CInteractionTracker@@AEAAXM@Z @ 0x1801390FC (-SetScaleInertiaDecayRate@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetPositionInertiaDecayRate@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x180139140 (-SetPositionInertiaDecayRate@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x180139770 (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18013992C (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTracker::SetProperty(__int64 a1, int a2, int a3, const struct D2DVector3 *a4)
{
  char v4; // bp
  float v5; // xmm6_4
  char v6; // si
  char v7; // di
  int v9; // edx
  int v10; // edx
  int v11; // edx
  BOOL v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // r9
  unsigned int v17; // ebx
  __int64 v19; // rdx
  int v20; // edx
  int v21; // edx
  float v22[4]; // [rsp+30h] [rbp-38h]

  v4 = 0;
  v5 = *(float *)(a1 + 240);
  v6 = 0;
  v7 = 0;
  *(_QWORD *)v22 = *(_QWORD *)(a1 + 184);
  if ( a3 == 52 )
  {
    v9 = a2 - 1;
    if ( !v9 )
    {
      (*(void (__fastcall **)(__int64, const struct D2DVector3 *, _QWORD))(*(_QWORD *)a1 + 472LL))(a1, a4, 0LL);
      goto LABEL_7;
    }
    v10 = v9 - 22;
    if ( v10 )
    {
      v11 = v10 - 3;
      if ( v11 )
      {
        if ( v11 == 35 )
        {
          CInteractionTracker::SetPositionInertiaDecayRate((CInteractionTracker *)a1, a4);
          goto LABEL_7;
        }
        goto LABEL_6;
      }
      CInteractionTracker::SetMaxPosition((CInteractionTracker *)a1, a4);
    }
    else
    {
      CInteractionTracker::SetMinPosition((CInteractionTracker *)a1, a4);
    }
    if ( v22[0] != *(float *)(a1 + 184) )
      v6 = 1;
    if ( v22[1] != *(float *)(a1 + 188) )
      v7 = 1;
    goto LABEL_7;
  }
  if ( a3 != 18 )
  {
LABEL_6:
    v4 = 1;
LABEL_7:
    v12 = 0;
    goto LABEL_8;
  }
  v19 = (unsigned int)(a2 - 2);
  if ( !(_DWORD)v19 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 496LL))(a1, v19, 0LL);
    goto LABEL_7;
  }
  v20 = v19 - 27;
  if ( v20 )
  {
    v21 = v20 - 1;
    if ( v21 )
    {
      if ( v21 == 34 )
      {
        CInteractionTracker::SetScaleInertiaDecayRate((CInteractionTracker *)a1, *(float *)a4);
        goto LABEL_7;
      }
      goto LABEL_6;
    }
    CInteractionTracker::SetMaxScale((CInteractionTracker *)a1, *(float *)a4);
  }
  else
  {
    CInteractionTracker::SetMinScale((CInteractionTracker *)a1, *(float *)a4);
  }
  v12 = v5 != *(float *)(a1 + 240);
  if ( v22[0] != *(float *)(a1 + 184) )
    v6 = 1;
  if ( v22[1] != *(float *)(a1 + 188) )
    v7 = 1;
LABEL_8:
  v13 = *(_QWORD *)(a1 + 600);
  if ( v13 )
  {
    v14 = 4 * v12;
    v15 = v14 | 1;
    if ( !v6 )
      v15 = v14;
    v16 = v15 | 2;
    if ( !v7 )
      v16 = v15;
    CInteractionTrackerBindingManager::BringBoundTrackersPositionAndScaleInSync(v13, a1, a1, v16);
  }
  if ( v4 )
  {
    v17 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x528u, 0LL);
  }
  else
  {
    return 0;
  }
  return v17;
}
