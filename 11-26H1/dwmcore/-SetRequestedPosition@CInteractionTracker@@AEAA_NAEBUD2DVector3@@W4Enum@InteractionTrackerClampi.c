/*
 * XREFs of ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x180139380
 * Callers:
 *     ?ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION@@@Z @ 0x180139304 (-ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERAC.c)
 *     ?ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDDELTAPOSITION@@@Z @ 0x180205610 (-ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_IN.c)
 * Callees:
 *     ?UnRegisterNotifierNoRelease@CResource@@QEAA_NPEAV1@@Z @ 0x1800222EC (-UnRegisterNotifierNoRelease@CResource@@QEAA_NPEAV1@@Z.c)
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x18004C1C0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?SetRequestedBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@AEBUD2DVector3@@@Z @ 0x180136094 (-SetRequestedBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracke.c)
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x180139A40 (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18013C7BC (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?ClearCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x18013D2F0 (-ClearCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CInteractionTracker::SetRequestedPosition(__int64 *a1, __int64 *a2, int a3, int a4)
{
  char v5; // di
  int v6; // ecx
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  double v13; // xmm0_8
  __int64 v14; // rax
  CInteractionTrackerBindingManager *v15; // rcx
  struct CResource *TargetResource; // rax
  __int64 v18; // [rsp+20h] [rbp-38h] BYREF
  int v19; // [rsp+28h] [rbp-30h]

  v5 = 0;
  v6 = *((_DWORD *)a1 + 22);
  if ( v6 )
  {
    v9 = v6 - 2;
    if ( !v9 )
      goto LABEL_5;
    if ( v9 != 1 )
      return v5;
    v10 = a1[55];
    v11 = a1[56];
    *((_BYTE *)a1 + 597) &= ~1u;
    if ( a4 && v11 )
    {
      if ( a4 == 1 )
      {
        if ( v10 )
        {
          TargetResource = (struct CResource *)CWeakReference<CGdiSpriteBitmap>::GetTargetResource(v10);
          if ( TargetResource )
          {
            *((_BYTE *)TargetResource + 216) &= ~1u;
            CResource::UnRegisterNotifierNoRelease((CResource *)a1, TargetResource);
          }
          CInteractionTracker::ClearCustomAnimation((CInteractionTracker *)a1, 0);
        }
        *((_BYTE *)a1 + 597) |= 1u;
      }
    }
    else
    {
LABEL_5:
      CInteractionTracker::TransitionToIdle((CInteractionTracker *)a1);
    }
  }
  v5 = 1;
  v12 = *((_DWORD *)a2 + 2);
  v18 = *a2;
  v19 = v12;
  if ( a3 )
  {
    if ( a3 == 1 )
      *((_BYTE *)a1 + 597) |= 4u;
  }
  else
  {
    v13 = (*(double (__fastcall **)(__int64 *, _QWORD))(*a1 + 584))(a1, 0LL);
    v14 = *a1;
    LODWORD(v18) = LODWORD(v13);
    HIDWORD(v18) = (*(float (__fastcall **)(__int64 *, __int64))(v14 + 584))(a1, 1LL);
    v19 = 0;
  }
  (*(void (__fastcall **)(__int64 *, __int64 *, _QWORD))(*a1 + 472))(a1, &v18, 0LL);
  v15 = (CInteractionTrackerBindingManager *)a1[75];
  if ( v15 )
    CInteractionTrackerBindingManager::SetRequestedBoundTrackerPosition(
      v15,
      (struct CInteractionTrackerBase *)a1,
      (const struct D2DVector3 *)&v18);
  InteractionSourceManager::ReconfigureAllManipulations((InteractionSourceManager *)(a1 + 37));
  if ( (*((_BYTE *)a1 + 597) & 1) != 0 )
    (*(void (__fastcall **)(__int64 *))(*a1 + 416))(a1);
  return v5;
}
