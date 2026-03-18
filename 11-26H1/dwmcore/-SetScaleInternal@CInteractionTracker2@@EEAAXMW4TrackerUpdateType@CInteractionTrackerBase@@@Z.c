/*
 * XREFs of ?SetScaleInternal@CInteractionTracker2@@EEAAXMW4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x180276E70
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@M_N@Z @ 0x1801364DC (-UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@M_.c)
 *     ?BigHammerInvalidateConsumingAnimations@CInteractionTracker2@@IEAAXW4Enum@InteractionTracker2Property@@@Z @ 0x1801396E4 (-BigHammerInvalidateConsumingAnimations@CInteractionTracker2@@IEAAXW4Enum@InteractionTracker2Pro.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker2::SetScaleInternal(__int64 a1, float a2, int a3)
{
  float v4; // xmm0_4
  float v5; // xmm2_4
  CInteractionTrackerBindingManager *v7; // r8
  char v8; // di
  float v9; // xmm6_4
  int v10; // edx
  bool v11; // cl
  int v12; // edx
  float v13; // xmm2_4
  void (__fastcall *v14)(__int64, float *, _QWORD); // rax
  float v15; // xmm1_4
  float v16[4]; // [rsp+20h] [rbp-38h] BYREF

  v4 = *(float *)(a1 + 480);
  v5 = fmaxf(0.001, a2);
  if ( v5 == v4 )
    return;
  v7 = *(CInteractionTrackerBindingManager **)(a1 + 1048);
  v8 = 0;
  *(float *)(a1 + 480) = v5;
  v9 = v5 / v4;
  if ( v7 )
  {
    if ( !a3 )
    {
      CInteractionTrackerBindingManager::UpdateBoundTrackerScale(v7, (struct CInteractionTrackerBase *)a1, v5, 0);
      v7 = *(CInteractionTrackerBindingManager **)(a1 + 1048);
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
LABEL_12:
    v11 = 1;
    goto LABEL_13;
  }
  v12 = v10 - 2;
  if ( v12 )
  {
    if ( v12 != 1 || *(_QWORD *)(a1 + 672) || !*(_QWORD *)(a1 + 680) || (*(_BYTE *)(a1 + 829) & 2) != 0 )
      goto LABEL_13;
    goto LABEL_12;
  }
  v11 = *(_QWORD *)(a1 + 792) != 0LL;
LABEL_13:
  if ( !v7 || (*(_BYTE *)(a1 + 829) & 1) != 0 )
    v8 = 1;
  if ( ((unsigned __int8)v8 & v11) != 0 )
  {
    v13 = *(float *)(a1 + 496);
    v14 = *(void (__fastcall **)(__int64, float *, _QWORD))(*(_QWORD *)a1 + 472LL);
    v15 = *(float *)(a1 + 428);
    v16[0] = (float)((float)(*(float *)(a1 + 424) - *(float *)(a1 + 492)) * v9) + *(float *)(a1 + 492);
    v16[2] = *(float *)(a1 + 432);
    v16[1] = (float)((float)(v15 - v13) * v9) + v13;
    v14(a1, v16, 0LL);
  }
  *(_BYTE *)(a1 + 828) |= 4u;
  CInteractionTracker2::BigHammerInvalidateConsumingAnimations(a1, 69LL);
  CInteractionTracker2::BigHammerInvalidateConsumingAnimations(a1, 71LL);
}
