/*
 * XREFs of ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18013D8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Invalidate@CExpressionManager@@QEAAXXZ @ 0x18010E50C (-Invalidate@CExpressionManager@@QEAAXXZ.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18013C68C (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x18013D238 (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 *     ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x18013D9E8 (-OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipu.c)
 *     ?GetIndexOfCustomAnimation@CInteractionTracker@@AEBAHPEBUIUnknown@@@Z @ 0x18013DB2C (-GetIndexOfCustomAnimation@CInteractionTracker@@AEBAHPEBUIUnknown@@@Z.c)
 *     ?CheckAndUnRegisterDefaultAnimations@CInteractionTracker@@AEAA_NPEAUIUnknown@@@Z @ 0x180217398 (-CheckAndUnRegisterDefaultAnimations@CInteractionTracker@@AEAA_NPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTracker::OnChanged(__int64 a1, unsigned int a2, struct IUnknown *a3)
{
  __int64 v6; // r9
  struct IUnknownVtbl *lpVtbl; // rax
  signed int IndexOfCustomAnimation; // eax
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v6 = a2 - 7;
  if ( a2 == 7 )
  {
LABEL_7:
    lpVtbl = a3->lpVtbl;
    v10 = 0LL;
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *, __int64))lpVtbl->QueryInterface)(
      a3,
      &GUID_c3c5a1de_4dff_4600_9562_70179f475db1,
      &v10,
      v6);
    InteractionSourceManager::OnManipulationChanged(a1 + 296, a2, (v10 - 80) & -(__int64)(v10 != 0));
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    return 1LL;
  }
  if ( a2 != 8 && a2 != 9 )
  {
    v6 = a2 - 10;
    if ( a2 != 10 )
    {
      v6 = a2 - 12;
      if ( (unsigned int)v6 >= 2 )
        return 1LL;
    }
    goto LABEL_7;
  }
  if ( a3 )
  {
    IndexOfCustomAnimation = CInteractionTracker::GetIndexOfCustomAnimation((CInteractionTracker *)a1, a3);
    if ( IndexOfCustomAnimation > -1 )
    {
      CInteractionTracker::StopCustomAnimation((CInteractionTracker *)a1, IndexOfCustomAnimation, 0);
      if ( *(_DWORD *)(a1 + 88) == 3 )
        CInteractionTracker::CheckForIdle((CInteractionTracker *)a1);
    }
    else if ( CInteractionTracker::CheckAndUnRegisterDefaultAnimations((CInteractionTracker *)a1, a3) )
    {
      CExpressionManager::Invalidate(*(CExpressionManager **)(*(_QWORD *)(a1 + 24) + 816LL));
    }
  }
  return 1LL;
}
