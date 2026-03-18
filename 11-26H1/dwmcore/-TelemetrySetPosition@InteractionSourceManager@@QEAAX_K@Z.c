/*
 * XREFs of ?TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z @ 0x18013AE78
 * Callers:
 *     ?SetPositionInternal@CInteractionTracker@@EEAAXAEBUD2DVector3@@W4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x180139520 (-SetPositionInternal@CInteractionTracker@@EEAAXAEBUD2DVector3@@W4TrackerUpdateType@CInteractionT.c)
 *     ?SetPositionInternal@CInteractionTracker2@@EEAAXAEBUD2DVector3@@W4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x1802766B0 (-SetPositionInternal@CInteractionTracker2@@EEAAXAEBUD2DVector3@@W4TrackerUpdateType@CInteraction.c)
 * Callees:
 *     ?GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ @ 0x18013AF0C (-GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18013AF34 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x18013B170 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall InteractionSourceManager::TelemetrySetPosition(InteractionSourceManager *this, __int64 a2)
{
  struct CInteraction *ActiveInteraction; // rbx
  int v5; // edi
  __int64 *v6; // rbx
  __int64 v7; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-118h] BYREF
  _QWORD v9[25]; // [rsp+30h] [rbp-108h] BYREF
  int v10; // [rsp+F8h] [rbp-40h]

  ActiveInteraction = InteractionSourceManager::GetActiveInteraction(this);
  if ( InteractionSourceManager::HasActiveManipulation(this) )
  {
    if ( ActiveInteraction )
    {
      if ( a2 )
      {
        v5 = *(_DWORD *)(*(_QWORD *)this + 88LL);
        if ( v5 == 1 || v5 == 2 )
        {
          v6 = (__int64 *)*((_QWORD *)ActiveInteraction + 217);
          if ( v6 )
          {
            PerformanceCount.QuadPart = 0LL;
            QueryPerformanceCounter(&PerformanceCount);
            if ( v5 == 2 )
            {
              memset_0(v9, 0, 0xD8uLL);
              v9[0] = InteractionSourceManager::TryGetActiveManipulation(this);
              v9[20] = PerformanceCount.QuadPart;
              v7 = *v6;
              v9[19] = a2;
              v10 = 1;
              (*(void (__fastcall **)(__int64 *, _QWORD *))(v7 + 208))(v6, v9);
            }
            (*(void (__fastcall **)(__int64 *, LARGE_INTEGER, _QWORD))(*v6 + 216))(
              v6,
              PerformanceCount,
              *((_QWORD *)g_pComposition + 110));
          }
        }
      }
    }
  }
}
