/*
 * XREFs of ?SetRequestedPositionInternal@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x180276C14
 * Callers:
 *     ?ProcessSetRequestedDeltaPosition@CInteractionTracker2@@AEAAXXZ @ 0x180275164 (-ProcessSetRequestedDeltaPosition@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessSetRequestedPosition@CInteractionTracker2@@AEAAXXZ @ 0x1802751FC (-ProcessSetRequestedPosition@CInteractionTracker2@@AEAAXXZ.c)
 * Callees:
 *     ?UnRegisterNotifierNoRelease@CResource@@QEAA_NPEAV1@@Z @ 0x1800222EC (-UnRegisterNotifierNoRelease@CResource@@QEAA_NPEAV1@@Z.c)
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x18004C1C0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?SetRequestedBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@AEBUD2DVector3@@@Z @ 0x180136094 (-SetRequestedBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracke.c)
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x180139A40 (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?ClearCustomAnimation@CInteractionTracker2@@AEAAXH@Z @ 0x180272D0C (-ClearCustomAnimation@CInteractionTracker2@@AEAAXH@Z.c)
 *     ?TransitionToIdle@CInteractionTracker2@@AEAAXXZ @ 0x180277528 (-TransitionToIdle@CInteractionTracker2@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CInteractionTracker2::SetRequestedPositionInternal(__int64 *a1, __int64 *a2, int a3, int a4)
{
  char v5; // di
  int v6; // ecx
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rax
  struct CResource *TargetResource; // rax
  int v13; // eax
  double v14; // xmm0_8
  __int64 v15; // rax
  CInteractionTrackerBindingManager *v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-38h] BYREF
  int v19; // [rsp+28h] [rbp-30h]

  v5 = 0;
  v6 = *((_DWORD *)a1 + 22);
  if ( v6 )
  {
    v9 = v6 - 2;
    if ( !v9 )
      goto LABEL_12;
    if ( v9 != 1 )
      return v5;
    v10 = a1[84];
    v11 = a1[85];
    *((_BYTE *)a1 + 829) &= ~2u;
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
          CInteractionTracker2::ClearCustomAnimation((CInteractionTracker2 *)a1, 0);
        }
        *((_BYTE *)a1 + 829) |= 2u;
      }
    }
    else
    {
LABEL_12:
      CInteractionTracker2::TransitionToIdle((CInteractionTracker2 *)a1);
    }
  }
  v5 = 1;
  v13 = *((_DWORD *)a2 + 2);
  v18 = *a2;
  v19 = v13;
  if ( a3 )
  {
    if ( a3 == 1 )
      *((_BYTE *)a1 + 829) |= 8u;
  }
  else
  {
    v14 = (*(double (__fastcall **)(__int64 *, _QWORD))(*a1 + 584))(a1, 0LL);
    v15 = *a1;
    LODWORD(v18) = LODWORD(v14);
    HIDWORD(v18) = (*(float (__fastcall **)(__int64 *, __int64))(v15 + 584))(a1, 1LL);
    v19 = 0;
  }
  (*(void (__fastcall **)(__int64 *, __int64 *, _QWORD))(*a1 + 472))(a1, &v18, 0LL);
  v16 = (CInteractionTrackerBindingManager *)a1[131];
  if ( v16 )
    CInteractionTrackerBindingManager::SetRequestedBoundTrackerPosition(
      v16,
      (struct CInteractionTrackerBase *)a1,
      (const struct D2DVector3 *)&v18);
  InteractionSourceManager::ReconfigureAllManipulations((InteractionSourceManager *)(a1 + 66));
  if ( (*((_BYTE *)a1 + 829) & 2) != 0 )
    (*(void (__fastcall **)(__int64 *))(*a1 + 416))(a1);
  return v5;
}
