/*
 * XREFs of ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18003A69C
 * Callers:
 *     ?OnWindowVisibilityUpdated@CTransitionVisualController@@QEAAXPEAVCWindowData@@@Z @ 0x180018368 (-OnWindowVisibilityUpdated@CTransitionVisualController@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18002B6AC (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800164E0 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18001B974 (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x180032C38 (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_NPEAVCVisual@@22PEA_N@Z @ 0x180032EE0 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual.c)
 *     ?_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x18003AB7C (-_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18003ABE0 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x18003AC08 (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18003B008 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18003C7D4 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18004488C (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?RemoveAt@?$DynArray@UCFlickTextFeedback@@$0A@@@QEAAJI@Z @ 0x180075A0C (-RemoveAt@-$DynArray@UCFlickTextFeedback@@$0A@@@QEAAJI@Z.c)
 *     ?_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@@Z @ 0x180079FF4 (-_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@.c)
 *     ?_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z @ 0x18007B58C (-_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z.c)
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x18007C358 (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     McTemplateU0pp_EtwEventWriteTransfer @ 0x1800BFACC (McTemplateU0pp_EtwEventWriteTransfer.c)
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x1800CFE34 (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_SetupHighZOrderStaticWindows(
        CTransitionVisualController *this,
        const struct std::nothrow_t *a2)
{
  bool v3; // zf
  unsigned int v4; // ebp
  _BYTE *v5; // r13
  CImmersiveState *v6; // r15
  unsigned int v7; // edx
  unsigned __int64 v8; // rdi
  _BYTE *v9; // rax
  int v10; // r14d
  int v11; // r12d
  struct _LIST_ENTRY *v12; // rsi
  int v13; // eax
  struct _LIST_ENTRY *Blink; // rdi
  char v15; // r15
  const struct std::nothrow_t *v16; // r14
  HWND v17; // rcx
  __int64 v18; // rcx
  bool HasVisibleStyle; // al
  bool v20; // sf
  char v21; // r14
  __int64 v22; // rsi
  const struct std::nothrow_t *v23; // r15
  int Flink; // eax
  unsigned int Clone; // eax
  char v26; // r8
  __int64 v27; // r9
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rsi
  CTransitionVisualController *v32; // rcx
  int v33; // eax
  __int64 v34; // rsi
  struct CVisual *v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // r9
  bool ShouldMoveOriginalWindowOffscreenForClone; // al
  int v39; // eax
  __int64 v40; // [rsp+40h] [rbp-68h]
  unsigned __int64 v41; // [rsp+48h] [rbp-60h]
  struct _LIST_ENTRY *WindowListForDesktop; // [rsp+50h] [rbp-58h]
  char i; // [rsp+B0h] [rbp+8h]
  int v44; // [rsp+B8h] [rbp+10h]
  const struct std::nothrow_t *v45; // [rsp+C0h] [rbp+18h]
  CImmersiveState *v46; // [rsp+C8h] [rbp+20h] BYREF

  v3 = *((_QWORD *)this + 12) == -1LL;
  v4 = 0;
  v5 = 0LL;
  v46 = 0LL;
  v6 = 0LL;
  if ( !v3 )
  {
    v7 = 0;
    for ( i = 1; v7 < *((_DWORD *)this + 12); *(_BYTE *)(*((_QWORD *)this + 3) + 24 * v29 + 17) = 0 )
      v29 = v7++;
    v8 = *((int *)this + 34);
    v41 = v8;
    v9 = operator new(v8);
    v5 = v9;
    if ( v9 )
    {
      memset_0(v9, 0, v8);
      v10 = v8 - 1;
      v11 = v8 - 1;
      v44 = v8 - 1;
      WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                               *((_QWORD *)this + 12));
      v12 = WindowListForDesktop;
      if ( WindowListForDesktop )
      {
        v13 = CImmersiveState::Create(&v46, *((_QWORD *)this + 12));
        v4 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2LL,
            v13,
            0x788u,
            0LL);
          v6 = v46;
          goto LABEL_37;
        }
        v6 = v46;
        Blink = WindowListForDesktop->Blink;
        a2 = (const struct std::nothrow_t *)v10;
        v45 = (const struct std::nothrow_t *)v10;
        v40 = v10;
LABEL_7:
        if ( v11 >= 0 && Blink != v12 )
        {
          v15 = i;
          while ( 1 )
          {
            v16 = a2;
            v17 = *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v11) + 16LL);
            if ( v17 != HWND_MESSAGE|0x2LL )
            {
              if ( (GetWindowLongPtrW(v17, -16) & 0x10000000) != 0
                || CTransitionVisualController::_IsAnimationComponentVisible(
                     (CTransitionVisualController *)v18,
                     *(struct CAnimationComponent **)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v11)) )
              {
LABEL_15:
                i = v15;
                v6 = v46;
                if ( v11 < 0 )
                  break;
                v21 = 0;
                v22 = v41 - 1;
                if ( (__int64)(v41 - 1) >= 0 )
                {
                  v23 = v45;
                  do
                  {
                    if ( CTransitionVisualController::_IsAnimationComponentVisible(
                           (CTransitionVisualController *)v18,
                           *(struct CAnimationComponent **)(*((_QWORD *)this + 14) + 8 * v22)) )
                    {
                      v18 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v22);
                      if ( *(struct _LIST_ENTRY **)(v18 + 16) == Blink[2].Blink )
                      {
                        v21 = 1;
                        --v11;
                        v5[v22] = 1;
                        v23 = (const struct std::nothrow_t *)((char *)v23 - 1);
                      }
                    }
                    --v22;
                  }
                  while ( v22 >= 0 );
                  v45 = v23;
                  v6 = v46;
                  if ( v21 )
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
                Flink = (int)Blink[8].Flink;
                if ( Flink == 1
                  || Flink == 12
                  || Flink == 6
                  || !CTransitionVisualController::ShouldCloneWindow((HWND)Blink[2].Blink)
                  || CImmersiveState::IsLauncherShownAboveWindow(v6, (const struct CWindowData *)Blink)
                  || CTransitionVisualController::_IsOwnedByVisibleAC(this, (const struct CWindowData *)Blink) )
                {
                  goto LABEL_25;
                }
                Clone = CTransitionVisualController::_FindClone(this, (struct CWindowData *)Blink);
                v27 = Clone;
                if ( Clone >= *((_DWORD *)this + 12) )
                  v26 = 0;
                else
                  *(_BYTE *)(*((_QWORD *)this + 3) + 24LL * Clone + 17) = v26;
                v32 = (CTransitionVisualController *)v40;
                if ( v40 >= 0 )
                {
                  v33 = v44;
                  do
                  {
                    if ( !v5[(_QWORD)v32] )
                      break;
                    --v33;
                    v32 = (CTransitionVisualController *)((char *)v32 - 1);
                  }
                  while ( (__int64)v32 >= 0 );
                  v40 = (__int64)v32;
                  v44 = v33;
                }
                if ( v44 >= 0
                  && (_mm_lfence(),
                      v32 = *(CTransitionVisualController **)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v44),
                      (v34 = *((_QWORD *)v32 + 5)) != 0) )
                {
                  v35 = (struct CVisual *)(v34 + 8);
                }
                else
                {
                  v35 = 0LL;
                }
                if ( !v26 )
                {
                  ShouldMoveOriginalWindowOffscreenForClone = CTransitionVisualController::_ShouldMoveOriginalWindowOffscreenForClone(
                                                                v32,
                                                                (struct CWindowData *)Blink);
                  v39 = CTransitionVisualController::_StageCloneRelative(
                          this,
                          (struct tagPOINT *)Blink[27].Blink,
                          *((struct CContainerVisual **)this + 2),
                          1,
                          v35,
                          1,
                          ShouldMoveOriginalWindowOffscreenForClone,
                          0LL);
                  v4 = v39;
                  if ( v39 >= 0 )
                    goto LABEL_61;
                  MilInstrumentationCheckHR_MaybeFailFast(
                    0x14u,
                    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                    2LL,
                    v39,
                    0x806u,
                    0LL);
                  goto LABEL_37;
                }
                CContainerVisual::InsertChildAfter(
                  *((CContainerVisual **)this + 2),
                  *(struct CVisual **)(*((_QWORD *)this + 3) + 24 * v27 + 8),
                  v35);
LABEL_61:
                if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
                {
                  if ( v44 < 0 )
                  {
                    v37 = 0LL;
                  }
                  else
                  {
                    _mm_lfence();
                    v36 = *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v44);
                    v37 = *(_QWORD *)(v36 + 16);
                  }
                  McTemplateU0pp_EtwEventWriteTransfer(v36, &UdwmSystemAnimation_ZOrderClone, Blink[2].Blink, v37);
                }
LABEL_25:
                Blink = Blink->Blink;
                a2 = v45;
                v12 = WindowListForDesktop;
                goto LABEL_7;
              }
              HasVisibleStyle = CTransitionVisualController::HasVisibleStyle(*(HWND *)(*(_QWORD *)(*((_QWORD *)this + 14)
                                                                                                 + 8LL
                                                                                                 * (unsigned int)v11)
                                                                                     + 16LL));
              a2 = v45;
              v15 = HasVisibleStyle ? v15 : 0;
            }
            v18 = -1LL;
            v5[(_QWORD)v16] = 1;
            a2 = (const struct std::nothrow_t *)((char *)a2 - 1);
            v20 = --v11 < 0;
            v45 = a2;
            if ( v20 )
              goto LABEL_15;
          }
        }
        if ( i )
          goto LABEL_42;
      }
      else
      {
LABEL_42:
        v30 = (unsigned int)(*((_DWORD *)this + 12) - 1);
        if ( (int)v30 >= 0 )
        {
          v31 = 24LL * (int)v30;
          do
          {
            a2 = (const struct std::nothrow_t *)*((_QWORD *)this + 3);
            if ( *((_BYTE *)a2 + v31 + 16) && !*((_BYTE *)a2 + v31 + 17) )
            {
              CTransitionVisualController::_CleanupHighZOrderClone(
                this,
                (const struct std::nothrow_t *)((char *)a2 + 24 * v30));
              DynArray<CFlickTextFeedback,0>::RemoveAt((char *)this + 24, (unsigned int)v30);
            }
            v31 -= 24LL;
            v30 = (unsigned int)(v30 - 1);
          }
          while ( (int)v30 >= 0 );
        }
      }
LABEL_37:
      if ( v6 )
        CBaseObject::Release(v6);
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        -2147024882,
        0x77Fu,
        0LL);
    }
  }
  CDisplayBlackCurtainAnimatedVisual::operator delete(v5, a2);
  return v4;
}
