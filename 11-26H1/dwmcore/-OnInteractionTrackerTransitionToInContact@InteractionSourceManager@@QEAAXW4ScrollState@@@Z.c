/*
 * XREFs of ?OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x18028E1E0
 * Callers:
 *     ?SetState@CInteractionTracker@@EEAAXW4ScrollState@@W4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x1801C4CE0 (-SetState@CInteractionTracker@@EEAAXW4ScrollState@@W4TrackerUpdateType@CInteractionTrackerBase@@.c)
 *     ?SetState@CInteractionTracker2@@EEAAXW4ScrollState@@W4TrackerUpdateType@CInteractionTrackerBase@@@Z @ 0x180277000 (-SetState@CInteractionTracker2@@EEAAXW4ScrollState@@W4TrackerUpdateType@CInteractionTrackerBase@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ @ 0x18013AF0C (-GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x18013B170 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct CInteraction *__fastcall InteractionSourceManager::OnInteractionTrackerTransitionToInContact(
        InteractionSourceManager *a1,
        int a2)
{
  struct CInteraction *result; // rax
  struct CInteraction *v5; // rdi
  __int64 *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r9
  __int128 v10; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+30h] [rbp-38h]
  __int128 v12; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+50h] [rbp-18h]

  result = InteractionSourceManager::GetActiveInteraction(a1);
  v5 = result;
  if ( !a2 && result )
  {
    v6 = (__int64 *)((char *)result + 1736);
    v7 = *((_QWORD *)result + 217);
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 40LL))(v7, 0LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v6);
    }
    result = (struct CInteraction *)*((_QWORD *)v5 + 7);
    if ( result )
    {
      v8 = *((_QWORD *)result + 9);
      if ( v8 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v6);
        result = (struct CInteraction *)DCompositionCreateInteractionStats(v8, v6);
      }
    }
    if ( *v6 )
    {
      v13 = 0LL;
      v10 = 0LL;
      v11 = 0LL;
      v12 = 0LL;
      *(_QWORD *)&v10 = InteractionSourceManager::TryGetActiveManipulation(a1);
      HIDWORD(v10) = 2;
      LODWORD(v11) = 2;
      return (struct CInteraction *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v9 + 200LL))(
                                      v9,
                                      *((_QWORD *)g_pComposition + 110),
                                      &v10);
    }
  }
  return result;
}
