/*
 * XREFs of ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@UEAAXW4ScrollAxis@@MW4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x1801C4B20
 * Callers:
 *     <none>
 * Callees:
 *     ?BigHammerInvalidateConsumingAnimations@CInteractionTracker@@IEAAXW4Enum@InteractionTrackerProperty@@@Z @ 0x1801398A0 (-BigHammerInvalidateConsumingAnimations@CInteractionTracker@@IEAAXW4Enum@InteractionTrackerPrope.c)
 *     ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x1801C4F8C (-AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z.c)
 *     ?AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@W4ScrollAxis@@@Z @ 0x1801D9BC0 (-AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPE.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker::AddOrUpdatePendingInertiaStateChange(
        _DWORD *a1,
        unsigned int a2,
        float a3,
        int a4)
{
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // xmm9_4
  double v12; // xmm0_8
  float v13; // xmm7_4
  double v14; // xmm0_8
  float v15; // xmm8_4
  _DWORD v16[12]; // [rsp+20h] [rbp-58h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  if ( a1[30] && (v7 = *((_QWORD *)a1 + 12), v8 = (unsigned int)(a1[30] - 1), *(_DWORD *)(v7 + 24 * v8) == 2) )
  {
    if ( a2 )
    {
      if ( a2 != 1 )
      {
        if ( a2 != 2 )
          ModuleFailFastForHRESULT(-2147024809, retaddr);
        *(float *)(v7 + 24 * v8 + 16) = a3;
LABEL_8:
        v9 = 57LL;
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
    v11 = a1[48];
    v12 = (*(double (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 232LL))(a1, 1LL);
    v13 = *(float *)&v12;
    v14 = (*(double (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a1 + 232LL))(a1, 0LL);
    v15 = *(float *)&v14;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 232LL))(a1, 2LL);
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v13 = a3;
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
    *(float *)v16 = v15;
    *(float *)&v16[1] = v13;
    v16[2] = v11;
    CInteractionTracker::AddPendingStateChange(a1, 2LL, v16);
    if ( a2 >= 2 )
      goto LABEL_8;
  }
  v9 = 56LL;
LABEL_11:
  CInteractionTracker::BigHammerInvalidateConsumingAnimations((__int64)a1, v9);
  v10 = *((_QWORD *)a1 + 75);
  if ( v10 )
  {
    if ( !a4 )
      CInteractionTrackerBindingManager::AddOrUpdatePendingInertiaStateChangeForBoundTrackers(v10, a1, a2);
  }
}
