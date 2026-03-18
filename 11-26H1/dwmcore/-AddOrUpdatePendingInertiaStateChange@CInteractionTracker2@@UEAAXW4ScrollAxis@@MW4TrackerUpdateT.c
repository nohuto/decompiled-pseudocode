/*
 * XREFs of ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker2@@UEAAXW4ScrollAxis@@MW4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x1802717D0
 * Callers:
 *     <none>
 * Callees:
 *     ?BigHammerInvalidateConsumingAnimations@CInteractionTracker2@@IEAAXW4Enum@InteractionTracker2Property@@@Z @ 0x1801396E4 (-BigHammerInvalidateConsumingAnimations@CInteractionTracker2@@IEAAXW4Enum@InteractionTracker2Pro.c)
 *     ?AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@W4ScrollAxis@@@Z @ 0x1801D9BC0 (-AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPE.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ?AddPendingStateChange@CInteractionTracker2@@AEAAXW4ScrollState@@AEBUD2DVector3@@M@Z @ 0x18027197C (-AddPendingStateChange@CInteractionTracker2@@AEAAXW4ScrollState@@AEBUD2DVector3@@M@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker2::AddOrUpdatePendingInertiaStateChange(
        __int64 *a1,
        unsigned int a2,
        float a3,
        int a4)
{
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // xmm7_4
  double v12; // xmm0_8
  float v13; // xmm6_4
  __int64 v14; // rax
  float v15; // [rsp+20h] [rbp-48h] BYREF
  float v16; // [rsp+24h] [rbp-44h]
  int v17; // [rsp+28h] [rbp-40h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  if ( *((_DWORD *)a1 + 30)
    && (v7 = a1[12], v8 = (unsigned int)(*((_DWORD *)a1 + 30) - 1), *(_DWORD *)(v7 + 24 * v8) == 2) )
  {
    if ( a2 )
    {
      if ( a2 != 1 )
      {
        if ( a2 != 2 )
          ModuleFailFastForHRESULT(-2147024809, retaddr);
        *(float *)(v7 + 24 * v8 + 16) = a3;
LABEL_8:
        v9 = 65LL;
        goto LABEL_11;
      }
      *(float *)(v7 + 24 * v8 + 8) = a3;
    }
    else
    {
      *(float *)(v7 + 24 * v8 + 4) = a3;
    }
  }
  else
  {
    v11 = *((_DWORD *)a1 + 108);
    v12 = (*(double (__fastcall **)(__int64 *, __int64))(*a1 + 232))(a1, 1LL);
    v13 = *(float *)&v12;
    *(float *)&v12 = (*(float (__fastcall **)(__int64 *, _QWORD))(*a1 + 232))(a1, 0LL);
    v14 = *a1;
    v15 = *(float *)&v12;
    v16 = v13;
    v17 = v11;
    (*(void (__fastcall **)(__int64 *, __int64))(v14 + 232))(a1, 2LL);
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v16 = a3;
      }
      else if ( a2 != 2 )
      {
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      }
    }
    else
    {
      v15 = a3;
    }
    CInteractionTracker2::AddPendingStateChange(a1, 2LL, &v15);
    if ( a2 >= 2 )
      goto LABEL_8;
  }
  v9 = 64LL;
LABEL_11:
  CInteractionTracker2::BigHammerInvalidateConsumingAnimations((__int64)a1, v9);
  v10 = a1[131];
  if ( v10 )
  {
    if ( !a4 )
      CInteractionTrackerBindingManager::AddOrUpdatePendingInertiaStateChangeForBoundTrackers(v10, a1, a2);
  }
}
