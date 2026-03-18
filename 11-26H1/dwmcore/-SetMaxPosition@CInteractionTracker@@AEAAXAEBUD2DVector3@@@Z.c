/*
 * XREFs of ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x180139770
 * Callers:
 *     ?SetProperty@CInteractionTracker@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801351E0 (-SetProperty@CInteractionTracker@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18013992C (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?ProcessSetMaxPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMAXPOSITION@@@Z @ 0x18021D17C (-ProcessSetMaxPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTR.c)
 * Callees:
 *     ?BigHammerInvalidateConsumingAnimations@CInteractionTracker@@IEAAXW4Enum@InteractionTrackerProperty@@@Z @ 0x1801398A0 (-BigHammerInvalidateConsumingAnimations@CInteractionTracker@@IEAAXW4Enum@InteractionTrackerPrope.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18013992C (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x180139A40 (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 *     ?EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z @ 0x180139AF0 (-EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CInteractionTracker::SetMaxPosition(CInteractionTracker *this, const struct D2DVector3 *a2)
{
  unsigned __int64 v4; // rcx
  float v5; // xmm0_4
  bool v6; // cf
  bool v7; // zf
  float v8; // xmm0_4
  __int64 v9; // rdx
  float v10; // xmm1_4
  float v11; // xmm0_4
  _DWORD v12[4]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *((_QWORD *)this + 26) - *(_QWORD *)a2;
  if ( !v4 )
    v4 = *((unsigned int *)this + 54) - (unsigned __int64)*((unsigned int *)a2 + 2);
  if ( v4 )
  {
    LODWORD(v5) = COERCE_UNSIGNED_INT(*((float *)this + 52) - *(float *)a2) & _xmm;
    v6 = v5 > 0.0000011920929;
    v7 = 0.0000011920929 == v5;
    v8 = *((float *)this + 53) - *((float *)a2 + 1);
    v9 = (unsigned int)(v6 || v7) + 4;
    if ( COERCE_FLOAT(LODWORD(v8) & _xmm) >= 0.0000011920929 )
      v9 = (unsigned int)v9 | 2;
    v7 = (*((_BYTE *)this + 597) & 4) == 0;
    *((_QWORD *)this + 26) = *(_QWORD *)a2;
    *((_DWORD *)this + 54) = *((_DWORD *)a2 + 2);
    if ( v7 )
      CInteractionTracker::EnsurePositionIsLessThanOrEqualToMax(this, v9);
    v10 = fminf(*((float *)this + 50), *((float *)this + 53));
    v12[0] = fminf(*((float *)this + 49), *((float *)this + 52));
    v11 = fminf(*((float *)this + 51), *((float *)this + 54));
    *(float *)&v12[1] = v10;
    *(float *)&v12[2] = v11;
    CInteractionTracker::SetMinPosition(this, (const struct D2DVector3 *)v12);
    if ( !*((_DWORD *)this + 22) )
      InteractionSourceManager::ReconfigureAllManipulations((CInteractionTracker *)((char *)this + 296));
    CInteractionTracker::BigHammerInvalidateConsumingAnimations(this, 26LL);
  }
}
