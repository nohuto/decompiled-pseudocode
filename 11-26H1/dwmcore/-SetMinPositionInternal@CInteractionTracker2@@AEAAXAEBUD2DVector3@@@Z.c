/*
 * XREFs of ?SetMinPositionInternal@CInteractionTracker2@@AEAAXAEBUD2DVector3@@@Z @ 0x180276448
 * Callers:
 *     ?CleanDirties@CInteractionTracker2@@IEAAXXZ @ 0x180272760 (-CleanDirties@CInteractionTracker2@@IEAAXXZ.c)
 *     ?SetMaxPositionInternal@CInteractionTracker2@@AEAAXAEBUD2DVector3@@@Z @ 0x180276274 (-SetMaxPositionInternal@CInteractionTracker2@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetProperty@CInteractionTracker2@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180276A20 (-SetProperty@CInteractionTracker2@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYP.c)
 * Callees:
 *     ?BigHammerInvalidateConsumingAnimations@CInteractionTracker2@@IEAAXW4Enum@InteractionTracker2Property@@@Z @ 0x1801396E4 (-BigHammerInvalidateConsumingAnimations@CInteractionTracker2@@IEAAXW4Enum@InteractionTracker2Pro.c)
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x180139A40 (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 *     ?EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker2@@AEAAXW4PropertyValueMask@1@@Z @ 0x180273148 (-EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker2@@AEAAXW4PropertyValueMask@1@@Z.c)
 *     ?SetMaxPositionInternal@CInteractionTracker2@@AEAAXAEBUD2DVector3@@@Z @ 0x180276274 (-SetMaxPositionInternal@CInteractionTracker2@@AEAAXAEBUD2DVector3@@@Z.c)
 */

void __fastcall CInteractionTracker2::SetMinPositionInternal(CInteractionTracker2 *this, const struct D2DVector3 *a2)
{
  unsigned __int64 v4; // rcx
  float v5; // xmm0_4
  bool v6; // cf
  bool v7; // zf
  float v8; // xmm0_4
  char v9; // dl
  float v10; // xmm1_4
  float v11; // xmm0_4
  _DWORD v12[6]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)((char *)this + 436) - *(_QWORD *)a2;
  if ( !v4 )
    v4 = *((unsigned int *)this + 111) - (unsigned __int64)*((unsigned int *)a2 + 2);
  if ( v4 )
  {
    LODWORD(v5) = COERCE_UNSIGNED_INT(*((float *)this + 109) - *(float *)a2) & _xmm;
    v6 = v5 > 0.0000011920929;
    v7 = 0.0000011920929 == v5;
    v8 = *((float *)this + 110) - *((float *)a2 + 1);
    v9 = (v6 || v7) + 4;
    if ( COERCE_FLOAT(LODWORD(v8) & _xmm) >= 0.0000011920929 )
      v9 |= 2u;
    v7 = (*((_BYTE *)this + 829) & 8) == 0;
    *(_QWORD *)((char *)this + 436) = *(_QWORD *)a2;
    *((_DWORD *)this + 111) = *((_DWORD *)a2 + 2);
    if ( v7 )
      CInteractionTracker2::EnsurePositionIsGreaterThanOrEqualToMin((__int64 *)this, v9);
    v10 = fmaxf(*((float *)this + 110), *((float *)this + 113));
    v12[0] = fmaxf(*((float *)this + 109), *((float *)this + 112));
    v11 = fmaxf(*((float *)this + 111), *((float *)this + 114));
    *(float *)&v12[1] = v10;
    *(float *)&v12[2] = v11;
    CInteractionTracker2::SetMaxPositionInternal(this, (const struct D2DVector3 *)v12);
    if ( !*((_DWORD *)this + 22) )
      InteractionSourceManager::ReconfigureAllManipulations((CInteractionTracker2 *)((char *)this + 528));
    CInteractionTracker2::BigHammerInvalidateConsumingAnimations((__int64)this, 6LL);
  }
}
