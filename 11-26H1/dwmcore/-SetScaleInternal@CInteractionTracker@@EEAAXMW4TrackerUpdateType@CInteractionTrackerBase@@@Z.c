/*
 * XREFs of ?SetScaleInternal@CInteractionTracker@@EEAAXMW4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x18013B4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@M_N@Z @ 0x1801364DC (-UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@M_.c)
 *     ?BigHammerInvalidateConsumingAnimations@CInteractionTracker@@IEAAXW4Enum@InteractionTrackerProperty@@@Z @ 0x1801398A0 (-BigHammerInvalidateConsumingAnimations@CInteractionTracker@@IEAAXW4Enum@InteractionTrackerPrope.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker::SetScaleInternal(__int64 a1, float a2, int a3)
{
  float v4; // xmm0_4
  float v5; // xmm2_4
  CInteractionTrackerBindingManager *v7; // r8
  char v8; // di
  float v9; // xmm6_4
  int v10; // edx
  bool v11; // cl
  char *v12; // rsi
  int v13; // edx
  float v14; // xmm2_4
  void (__fastcall *v15)(__int64, float *, _QWORD); // rax
  float v16; // xmm1_4
  float v17[4]; // [rsp+20h] [rbp-38h] BYREF

  v4 = *(float *)(a1 + 240);
  v5 = fmaxf(0.001, a2);
  if ( v5 == v4 )
    return;
  v7 = *(CInteractionTrackerBindingManager **)(a1 + 600);
  v8 = 0;
  *(float *)(a1 + 240) = v5;
  v9 = v5 / v4;
  if ( v7 )
  {
    if ( !a3 )
    {
      CInteractionTrackerBindingManager::UpdateBoundTrackerScale(v7, (struct CInteractionTrackerBase *)a1, v5, 0);
      v7 = *(CInteractionTrackerBindingManager **)(a1 + 600);
    }
  }
  else
  {
    v7 = 0LL;
  }
  v10 = *(_DWORD *)(a1 + 88);
  v11 = 0;
  if ( !v10 )
  {
LABEL_5:
    v11 = 1;
    goto LABEL_6;
  }
  v13 = v10 - 2;
  if ( v13 )
  {
    if ( v13 != 1 || *(_QWORD *)(a1 + 440) || !*(_QWORD *)(a1 + 448) || (*(_BYTE *)(a1 + 597) & 1) != 0 )
      goto LABEL_6;
    goto LABEL_5;
  }
  v11 = *(_QWORD *)(a1 + 560) != 0LL;
LABEL_6:
  v12 = (char *)(a1 + 596);
  if ( !v7 || *v12 < 0 )
    v8 = 1;
  if ( ((unsigned __int8)v8 & v11) != 0 )
  {
    v14 = *(float *)(a1 + 256);
    v15 = *(void (__fastcall **)(__int64, float *, _QWORD))(*(_QWORD *)a1 + 472LL);
    v16 = *(float *)(a1 + 188);
    v17[0] = (float)((float)(*(float *)(a1 + 184) - *(float *)(a1 + 252)) * v9) + *(float *)(a1 + 252);
    v17[2] = *(float *)(a1 + 192);
    v17[1] = (float)((float)(v16 - v14) * v9) + v14;
    v15(a1, v17, 0LL);
  }
  *v12 |= 2u;
  CInteractionTracker::BigHammerInvalidateConsumingAnimations(a1, 2LL);
  CInteractionTracker::BigHammerInvalidateConsumingAnimations(a1, 59LL);
}
