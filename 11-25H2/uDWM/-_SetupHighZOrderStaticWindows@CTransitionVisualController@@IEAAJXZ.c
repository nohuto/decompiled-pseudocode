/*
 * XREFs of ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x1800270F4
 * Callers:
 *     ?OnWindowVisibilityUpdated@CTransitionVisualController@@QEAAXPEAVCWindowData@@@Z @ 0x180018A20 (-OnWindowVisibilityUpdated@CTransitionVisualController@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18002A18C (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 * Callees:
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x1800032C0 (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x1800078BC (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x180025310 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180025784 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x18002757C (-_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800275D0 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x1800275F8 (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x180044E38 (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18006BB58 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_NPEAVCVisual@@22PEA_N@Z @ 0x1800829AC (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual.c)
 *     ?RemoveAt@?$DynArray@UCFlickTextFeedback@@$0A@@@QEAAJI@Z @ 0x180085264 (-RemoveAt@-$DynArray@UCFlickTextFeedback@@$0A@@@QEAAJI@Z.c)
 *     ?_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z @ 0x18008C878 (-_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z.c)
 *     ?_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@@Z @ 0x18008D754 (-_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009B730 (memset_0.c)
 *     McTemplateU0pp_EtwEventWriteTransfer @ 0x1800C5CD4 (McTemplateU0pp_EtwEventWriteTransfer.c)
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x1800D2CDC (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_SetupHighZOrderStaticWindows(
        CTransitionVisualController *this,
        const struct std::nothrow_t *a2)
{
  unsigned int v2; // ebp
  _BYTE *v3; // r12
  const struct std::nothrow_t *v5; // rdx
  unsigned __int64 v6; // rdi
  _BYTE *v7; // rax
  __int64 v8; // r13
  int v9; // r15d
  struct _LIST_ENTRY *v10; // rsi
  int v11; // eax
  struct _LIST_ENTRY *Blink; // rdi
  char v13; // bp
  const struct std::nothrow_t *v14; // r14
  HWND v15; // rcx
  __int64 v16; // rcx
  bool HasVisibleStyle; // al
  bool v18; // sf
  char v19; // r14
  __int64 v20; // rsi
  const struct std::nothrow_t *v21; // rbp
  unsigned int Flink; // eax
  int v23; // ecx
  unsigned int Clone; // eax
  CTransitionVisualController *v25; // rcx
  char v26; // r8
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // r14
  __int64 v32; // rsi
  struct CVisual *v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // r9
  bool ShouldMoveOriginalWindowOffscreenForClone; // al
  int v37; // eax
  __int64 v38; // [rsp+40h] [rbp-68h]
  unsigned __int64 v39; // [rsp+48h] [rbp-60h]
  struct _LIST_ENTRY *WindowListForDesktop; // [rsp+50h] [rbp-58h]
  char i; // [rsp+B0h] [rbp+8h]
  unsigned int v42; // [rsp+B8h] [rbp+10h]
  const struct std::nothrow_t *v43; // [rsp+C0h] [rbp+18h]
  CImmersiveState *v44; // [rsp+C8h] [rbp+20h] BYREF

  v2 = 0;
  v3 = 0LL;
  v44 = 0LL;
  if ( *((_QWORD *)this + 12) != -1LL )
  {
    v5 = 0LL;
    for ( i = 1; (unsigned int)v5 < *((_DWORD *)this + 12); *(_BYTE *)(*((_QWORD *)this + 3) + 8 * v28 + 17) = 0 )
    {
      v28 = 3LL * (_QWORD)v5;
      v5 = (const struct std::nothrow_t *)(unsigned int)((_DWORD)v5 + 1);
    }
    v6 = *((int *)this + 34);
    v39 = v6;
    v7 = operator new[](v6, v5);
    v3 = v7;
    if ( v7 )
    {
      memset_0(v7, 0, v6);
      v8 = (unsigned int)(v6 - 1);
      v9 = v6 - 1;
      WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                               *((_QWORD *)this + 12));
      v10 = WindowListForDesktop;
      if ( WindowListForDesktop )
      {
        v11 = CImmersiveState::Create(&v44, *((const struct std::nothrow_t **)this + 12));
        v42 = v11;
        v2 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2LL,
            v11,
            0x78Eu,
            0LL);
          goto LABEL_36;
        }
        Blink = WindowListForDesktop->Blink;
        a2 = (const struct std::nothrow_t *)(int)v8;
        v43 = (const struct std::nothrow_t *)(int)v8;
        v38 = (int)v8;
LABEL_7:
        if ( v9 >= 0 && Blink != v10 )
        {
          v13 = i;
          while ( 1 )
          {
            v14 = a2;
            v15 = *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v9) + 16LL);
            if ( v15 != HWND_MESSAGE|0x2LL )
            {
              if ( CTransitionVisualController::HasVisibleStyle(v15)
                || CTransitionVisualController::_IsAnimationComponentVisible(
                     (CTransitionVisualController *)v16,
                     *(struct CAnimationComponent **)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v9)) )
              {
LABEL_15:
                i = v13;
                v2 = v42;
                if ( v9 < 0 )
                  break;
                v19 = 0;
                v20 = v39 - 1;
                if ( (__int64)(v39 - 1) >= 0 )
                {
                  v21 = v43;
                  do
                  {
                    if ( CTransitionVisualController::_IsAnimationComponentVisible(
                           (CTransitionVisualController *)v16,
                           *(struct CAnimationComponent **)(*((_QWORD *)this + 14) + 8 * v20)) )
                    {
                      v16 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v20);
                      if ( *(struct _LIST_ENTRY **)(v16 + 16) == Blink[2].Blink )
                      {
                        v19 = 1;
                        --v9;
                        v3[v20] = 1;
                        v21 = (const struct std::nothrow_t *)((char *)v21 - 1);
                      }
                    }
                    --v20;
                  }
                  while ( v20 >= 0 );
                  v43 = v21;
                  v2 = v42;
                  if ( v19 )
                    goto LABEL_25;
                }
                if ( !Blink[1].Blink )
                  goto LABEL_25;
                if ( !Blink[27].Blink )
                  goto LABEL_25;
                if ( !CWindowData::IsWindowVisibleAndUncloaked((CWindowData *)Blink) )
                  goto LABEL_25;
                if ( (HIDWORD(Blink[7].Flink) & 0x20000000) != 0 )
                  goto LABEL_25;
                Flink = (unsigned int)Blink[8].Flink;
                if ( Flink <= 0xC )
                {
                  v23 = 4162;
                  if ( _bittest(&v23, Flink) )
                    goto LABEL_25;
                }
                if ( !CTransitionVisualController::ShouldCloneWindow((HWND)Blink[2].Blink)
                  || CImmersiveState::IsLauncherShownAboveWindow(v44, (const struct CWindowData *)Blink)
                  || CTransitionVisualController::_IsOwnedByVisibleAC(this, (const struct CWindowData *)Blink) )
                {
                  goto LABEL_25;
                }
                Clone = CTransitionVisualController::_FindClone(this, (struct CWindowData *)Blink);
                if ( Clone >= *((_DWORD *)this + 12) )
                {
                  v26 = 0;
                }
                else
                {
                  v25 = (CTransitionVisualController *)*((_QWORD *)this + 3);
                  *((_BYTE *)v25 + 24 * Clone + 17) = v26;
                }
                v31 = v38;
                if ( v38 >= 0 )
                {
                  do
                  {
                    if ( !v3[v31] )
                      break;
                    v8 = (unsigned int)(v8 - 1);
                    --v31;
                  }
                  while ( v31 >= 0 );
                  v38 = v31;
                }
                if ( (int)v8 >= 0
                  && (_mm_lfence(),
                      v25 = *(CTransitionVisualController **)(*((_QWORD *)this + 14) + 8 * v8),
                      (v32 = *((_QWORD *)v25 + 5)) != 0) )
                {
                  v33 = (struct CVisual *)(v32 + 8);
                }
                else
                {
                  v33 = 0LL;
                }
                if ( !v26 )
                {
                  ShouldMoveOriginalWindowOffscreenForClone = CTransitionVisualController::_ShouldMoveOriginalWindowOffscreenForClone(
                                                                v25,
                                                                (struct CWindowData *)Blink);
                  v37 = CTransitionVisualController::_StageCloneRelative(
                          this,
                          (struct CTopLevelWindow *)Blink[27].Blink,
                          *((struct CContainerVisual **)this + 2),
                          1,
                          v33,
                          1,
                          ShouldMoveOriginalWindowOffscreenForClone,
                          0LL);
                  v42 = v37;
                  v2 = v37;
                  if ( v37 >= 0 )
                    goto LABEL_60;
                  MilInstrumentationCheckHR_MaybeFailFast(
                    0x14u,
                    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                    2LL,
                    v37,
                    0x80Cu,
                    0LL);
                  goto LABEL_36;
                }
                CContainerVisual::InsertChildAfter(
                  *((CContainerVisual **)this + 2),
                  *(struct CVisual **)(*((_QWORD *)this + 3) + 24LL * Clone + 8),
                  v33);
LABEL_60:
                if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
                {
                  if ( (int)v8 < 0 )
                  {
                    v35 = 0LL;
                  }
                  else
                  {
                    _mm_lfence();
                    v34 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v8);
                    v35 = *(_QWORD *)(v34 + 16);
                  }
                  McTemplateU0pp_EtwEventWriteTransfer(v34, &UdwmSystemAnimation_ZOrderClone, Blink[2].Blink, v35);
                }
LABEL_25:
                Blink = Blink->Blink;
                a2 = v43;
                v10 = WindowListForDesktop;
                goto LABEL_7;
              }
              HasVisibleStyle = CTransitionVisualController::HasVisibleStyle(*(HWND *)(*(_QWORD *)(*((_QWORD *)this + 14)
                                                                                                 + 8LL
                                                                                                 * (unsigned int)v9)
                                                                                     + 16LL));
              a2 = v43;
              v13 = HasVisibleStyle ? v13 : 0;
            }
            v16 = -1LL;
            v3[(_QWORD)v14] = 1;
            a2 = (const struct std::nothrow_t *)((char *)a2 - 1);
            v18 = --v9 < 0;
            v43 = a2;
            if ( v18 )
              goto LABEL_15;
          }
        }
        if ( i )
          goto LABEL_41;
      }
      else
      {
LABEL_41:
        v29 = (unsigned int)(*((_DWORD *)this + 12) - 1);
        if ( (int)v29 >= 0 )
        {
          v30 = 24LL * (int)v29;
          do
          {
            a2 = (const struct std::nothrow_t *)*((_QWORD *)this + 3);
            if ( *((_BYTE *)a2 + v30 + 16) && !*((_BYTE *)a2 + v30 + 17) )
            {
              CTransitionVisualController::_CleanupHighZOrderClone(
                this,
                (const struct std::nothrow_t *)((char *)a2 + 24 * v29));
              DynArray<CFlickTextFeedback,0>::RemoveAt((char *)this + 24, (unsigned int)v29);
            }
            v30 -= 24LL;
            v29 = (unsigned int)(v29 - 1);
          }
          while ( (int)v29 >= 0 );
        }
      }
LABEL_36:
      if ( v44 )
        CBaseObject::Release(v44);
    }
    else
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        -2147024882,
        0x785u,
        0LL);
    }
  }
  CDisplayBlackCurtainAnimatedVisual::operator delete(v3, a2);
  return v2;
}
