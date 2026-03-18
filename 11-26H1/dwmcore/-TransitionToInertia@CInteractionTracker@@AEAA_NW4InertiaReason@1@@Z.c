/*
 * XREFs of ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x18013E0F4
 * Callers:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18013C68C (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x180205714 (-ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z @ 0x18020582C (-ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z.c)
 *     ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x1802702CC (-AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z.c)
 *     ?NotifyActiveManipulationUpdated@CInteractionTracker@@UEAAXPEAVCManipulation@@@Z @ 0x180270E50 (-NotifyActiveManipulationUpdated@CInteractionTracker@@UEAAXPEAVCManipulation@@@Z.c)
 *     ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x18027106C (-ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z.c)
 * Callees:
 *     ?CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z @ 0x180080910 (-CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z.c)
 *     ??1?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18010BE44 (--1-$vector_facade@VCExpressionValue@@V-$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion.c)
 *     ?resize@?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18010C430 (-resize@-$vector_facade@VCExpressionValue@@V-$buffer_impl@VCExpressionValue@@$00$00Vliberal_expa.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18013AF34 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18013CFC0 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18013D1F4 (-StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18013D338 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?LogBoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x18013DFC0 (-LogBoostCompositorClock@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x18013E42C (-StartInertia@CScrollAnimation@@QEAAXM_N@Z.c)
 *     ?GetEffectiveCompositionFrameId@CComposition@@QEBA_KXZ @ 0x18013E700 (-GetEffectiveCompositionFrameId@CComposition@@QEBA_KXZ.c)
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x1801C0F24 (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CInteractionTracker::TransitionToInertia(_DWORD *a1, int a2)
{
  unsigned int v2; // r14d
  int v4; // ecx
  bool v6; // r15
  char v7; // di
  unsigned __int64 v8; // rcx
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  double v12; // xmm0_8
  int v13; // xmm6_4
  CScrollAnimation **v14; // r12
  CScrollAnimation *v15; // rdi
  __int64 v16; // rbx
  __int64 EffectiveCompositionFrameId; // rax
  int v18; // eax
  CScrollAnimation *v19; // rbx
  double v20; // xmm0_8
  int v22; // [rsp+28h] [rbp-89h]
  __int64 v23; // [rsp+30h] [rbp-81h] BYREF
  _QWORD v24[3]; // [rsp+38h] [rbp-79h] BYREF
  _QWORD v25[3]; // [rsp+50h] [rbp-61h] BYREF
  __int64 v26[3]; // [rsp+68h] [rbp-49h] BYREF
  _BYTE v27[72]; // [rsp+80h] [rbp-31h] BYREF
  int v28; // [rsp+C8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v2 = 0;
  v4 = a1[22];
  v6 = 0;
  v7 = 0;
  if ( !v4 )
    goto LABEL_5;
  v8 = (unsigned int)(v4 - 1);
  if ( !(_DWORD)v8 )
  {
    v6 = a2 == 0;
    if ( a2 )
      return v6;
    goto LABEL_9;
  }
  v8 = (unsigned int)(v8 - 1);
  if ( (_DWORD)v8 )
  {
    if ( (_DWORD)v8 != 1 )
      return v6;
LABEL_5:
    if ( !(*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 592LL))(a1)
      && !CInteractionTracker::HasImpulse((CInteractionTracker *)a1)
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
    && !CInteractionTracker::HasImpulse((CInteractionTracker *)a1) )
  {
    return v6;
  }
  v6 = 1;
  v7 = 1;
LABEL_9:
  if ( (*((_BYTE *)a1 + 597) & 2) == 0 )
  {
    ++*(_DWORD *)(*((_QWORD *)a1 + 3) + 6372LL);
    *((_BYTE *)a1 + 597) |= 2u;
    CInteractionTracker::LogBoostCompositorClock((CInteractionTracker *)v8, 1u);
  }
  if ( a2 == 1 )
  {
    CInteractionTracker::StopCustomAnimations((CInteractionTracker *)a1, 0);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 440LL))(a1);
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a1 + 432LL))(a1, 0LL);
    CInteractionTracker::EnsureInteractionAnimations((struct CComposition **)a1);
    CInteractionTracker::DestroyDefaultAnimations((CInteractionTracker *)a1, 0);
  }
  if ( v7 )
  {
    v9 = v25;
    v25[0] = *((_QWORD *)a1 + 53);
    v25[1] = *((_QWORD *)a1 + 54);
    v25[2] = *((_QWORD *)a1 + 52);
    do
    {
      v10 = *v9;
      ++v2;
      ++v9;
      *(_BYTE *)(v10 + 312) |= 4u;
      *(_BYTE *)(v10 + 340) |= 1u;
    }
    while ( v2 < 3 );
  }
  else if ( !a2 )
  {
    v11 = *((_QWORD *)a1 + 52);
    v12 = (*(double (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 376LL))(a1, 2LL, 2LL);
    v13 = LODWORD(v12);
    *(float *)(v11 + 488) = (*(float (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 376LL))(a1, 1LL, 2LL);
    *(_DWORD *)(v11 + 460) = v13;
    v24[0] = *((_QWORD *)a1 + 52);
    v24[1] = *((_QWORD *)a1 + 53);
    v24[2] = *((_QWORD *)a1 + 54);
    v26[0] = (__int64)v27;
    v26[1] = (__int64)v27;
    v26[2] = (__int64)&v28;
    v28 = 0;
    detail::vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>::resize(
      (__int64)v26,
      1LL);
    v14 = (CScrollAnimation **)v24;
    do
    {
      if ( a1[22] == 1 )
      {
        if ( InteractionSourceManager::HasActiveManipulation((InteractionSourceManager *)(a1 + 74)) )
        {
          v15 = *v14;
          v23 = 0LL;
          v16 = *((_QWORD *)v15 + 21);
          EffectiveCompositionFrameId = CComposition::GetEffectiveCompositionFrameId(*((CComposition **)v15 + 3));
          v18 = CBaseExpression::CalculateValue(
                  v15,
                  (struct CExpressionValueStack *)v26,
                  EffectiveCompositionFrameId,
                  (struct CalculateValueResult *)&v23);
          *((_QWORD *)v15 + 21) = v16;
          if ( v18 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xADF,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
              (const char *)(unsigned int)v18,
              v22);
        }
      }
      v19 = *v14;
      v20 = (*(double (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a1 + 232LL))(a1, *((unsigned int *)*v14 + 71));
      CScrollAnimation::StartInertia(v19, *(float *)&v20, 0);
      *((_BYTE *)v19 + 340) |= 1u;
      ++v14;
    }
    while ( v14 != v25 );
    detail::vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>::~vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>(v26);
  }
  (*(void (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)a1 + 448LL))(a1, 2LL, 0LL);
  return v6;
}
