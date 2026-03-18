/*
 * XREFs of ?TransitionToInertia@CInteractionTracker2@@AEAA_NW4InertiaReason@1@@Z @ 0x180277668
 * Callers:
 *     ?AnimateToScale@CInteractionTracker2@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x180271A00 (-AnimateToScale@CInteractionTracker2@@AEAAJMAEBUD2DVector2@@MH@Z.c)
 *     ?ApplyPositionImpulse@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@@Z @ 0x180271BA4 (-ApplyPositionImpulse@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?ApplyScaleImpulse@CInteractionTracker2@@AEAA_NMAEBUD2DVector2@@@Z @ 0x180271D3C (-ApplyScaleImpulse@CInteractionTracker2@@AEAA_NMAEBUD2DVector2@@@Z.c)
 *     ?CheckForIdle@CInteractionTracker2@@AEAAXXZ @ 0x180272600 (-CheckForIdle@CInteractionTracker2@@AEAAXXZ.c)
 *     ?NotifyActiveManipulationUpdated@CInteractionTracker2@@UEAAXPEAVCManipulation@@@Z @ 0x180274430 (-NotifyActiveManipulationUpdated@CInteractionTracker2@@UEAAXPEAVCManipulation@@@Z.c)
 *     ?ScrollToPosition@CInteractionTracker2@@AEAAJAEBUD2DVector3@@MH@Z @ 0x180275544 (-ScrollToPosition@CInteractionTracker2@@AEAAJAEBUD2DVector3@@MH@Z.c)
 * Callees:
 *     ??0CExpressionValueStack@@QEAA@XZ @ 0x18010B9C0 (--0CExpressionValueStack@@QEAA@XZ.c)
 *     ??1?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18010BE44 (--1-$vector_facade@VCExpressionValue@@V-$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18013AF34 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x18013E42C (-StartInertia@CScrollAnimation@@QEAAXM_N@Z.c)
 *     ?HoneyBadgerCalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@@Z @ 0x18013E6AC (-HoneyBadgerCalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?EnsureInteractionAnimations@CInteractionTracker2@@AEAAJXZ @ 0x18013E7AC (-EnsureInteractionAnimations@CInteractionTracker2@@AEAAJXZ.c)
 *     ?HasImpulse@CInteractionTracker2@@QEBA_NXZ @ 0x1801D95BC (-HasImpulse@CInteractionTracker2@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BoostCompositorClock@CInteractionTracker2@@AEAAX_N@Z @ 0x180271DFC (-BoostCompositorClock@CInteractionTracker2@@AEAAX_N@Z.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker2@@AEAAX_N@Z @ 0x180272FC0 (-DestroyDefaultAnimations@CInteractionTracker2@@AEAAX_N@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker2@@AEAAX_N@Z @ 0x1802773C8 (-StopCustomAnimations@CInteractionTracker2@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CInteractionTracker2::TransitionToInertia(_DWORD *a1, int a2)
{
  unsigned int v2; // esi
  int v4; // ecx
  bool v6; // r14
  char v7; // r15
  int v8; // ecx
  int v9; // ecx
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  double v13; // xmm0_8
  int v14; // xmm6_4
  CBaseExpression **v15; // r15
  int v16; // eax
  CBaseExpression *v17; // rbx
  double v18; // xmm0_8
  _QWORD v20[3]; // [rsp+30h] [rbp-71h] BYREF
  _QWORD v21[3]; // [rsp+48h] [rbp-59h] BYREF
  __int64 v22[13]; // [rsp+60h] [rbp-41h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v2 = 0;
  v4 = a1[22];
  v6 = 0;
  v7 = 0;
  if ( !v4 )
    goto LABEL_5;
  v8 = v4 - 1;
  if ( !v8 )
  {
    v6 = a2 == 0;
    if ( a2 )
      return v6;
    goto LABEL_9;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
      return v6;
LABEL_5:
    if ( !(*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 592LL))(a1)
      && !CInteractionTracker2::HasImpulse((CInteractionTracker2 *)a1)
      && a2 != 1 )
    {
      return v6;
    }
    goto LABEL_8;
  }
  if ( a2 == 1 )
  {
LABEL_8:
    v6 = 1;
    goto LABEL_9;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 592LL))(a1)
    && !CInteractionTracker2::HasImpulse((CInteractionTracker2 *)a1) )
  {
    return v6;
  }
  v6 = 1;
  v7 = 1;
LABEL_9:
  CInteractionTracker2::BoostCompositorClock((CInteractionTracker2 *)a1, 1);
  if ( a2 == 1 )
  {
    CInteractionTracker2::StopCustomAnimations((CInteractionTracker2 *)a1, 0);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 440LL))(a1);
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a1 + 432LL))(a1, 0LL);
    CInteractionTracker2::EnsureInteractionAnimations((struct CComposition **)a1);
    CInteractionTracker2::DestroyDefaultAnimations((CInteractionTracker2 *)a1, 0);
  }
  if ( v7 )
  {
    v10 = v21;
    v21[0] = *((_QWORD *)a1 + 82);
    v21[1] = *((_QWORD *)a1 + 83);
    v21[2] = *((_QWORD *)a1 + 81);
    do
    {
      v11 = *v10;
      ++v2;
      ++v10;
      *(_BYTE *)(v11 + 312) |= 4u;
      *(_BYTE *)(v11 + 340) |= 1u;
    }
    while ( v2 < 3 );
  }
  else if ( !a2 )
  {
    v12 = *((_QWORD *)a1 + 81);
    v13 = (*(double (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 376LL))(a1, 2LL, 2LL);
    v14 = LODWORD(v13);
    *(float *)(v12 + 488) = (*(float (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 376LL))(a1, 1LL, 2LL);
    *(_DWORD *)(v12 + 460) = v14;
    v20[0] = *((_QWORD *)a1 + 81);
    v20[1] = *((_QWORD *)a1 + 82);
    v20[2] = *((_QWORD *)a1 + 83);
    CExpressionValueStack::CExpressionValueStack((CExpressionValueStack *)v22);
    v15 = (CBaseExpression **)v20;
    do
    {
      if ( a1[22] == 1 )
      {
        if ( InteractionSourceManager::HasActiveManipulation((InteractionSourceManager *)(a1 + 132)) )
        {
          v16 = CBaseExpression::HoneyBadgerCalculateValue(*v15, (struct CExpressionValueStack *)v22);
          if ( v16 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              2710LL,
              (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker2.cpp",
              (const char *)(unsigned int)v16);
        }
      }
      v17 = *v15;
      v18 = (*(double (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a1 + 232LL))(a1, *((unsigned int *)*v15 + 71));
      CScrollAnimation::StartInertia(v17, *(float *)&v18, 0);
      *((_BYTE *)v17 + 340) |= 1u;
      ++v15;
    }
    while ( v15 != v21 );
    detail::vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>::~vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>(v22);
  }
  (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 448LL))(a1, 2LL);
  return v6;
}
