/*
 * XREFs of NtUserSetWindowCompositionAttribute @ 0x14024E5B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x14001D970 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?SetWindowCompositionDisallowPeek@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1400245A8 (-SetWindowCompositionDisallowPeek@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionHasIconicBitmap@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140024670 (-SetWindowCompositionHasIconicBitmap@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@.c)
 *     ?SetWindowCompositionFreezeSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140024734 (-SetWindowCompositionFreezeSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionDarkModeColors@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140024814 (-SetWindowCompositionDarkModeColors@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionExcludeFromLivePreview@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1400248DC (-SetWindowCompositionExcludeFromLivePreview@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_U.c)
 *     ?SetWindowCompositionAccentPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1400249A0 (-SetWindowCompositionAccentPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionNCRenderingExiled@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140024A68 (-SetWindowCompositionNCRenderingExiled@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@.c)
 *     ?_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140024BA0 (-_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOS.c)
 *     ?SetWindowCompositionPartColor@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1400251E8 (-SetWindowCompositionPartColor@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionCornerStyle@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1400252D0 (-SetWindowCompositionCornerStyle@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x140034FB4 (IsTopLevelOrLayeredChildWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     ?_GetWindowCloakState@@YA?AW4CloakState@@PEBUtagWND@@@Z @ 0x140060190 (-_GetWindowCloakState@@YA-AW4CloakState@@PEBUtagWND@@@Z.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ValidateHwndIAMComponetUIAware @ 0x14015C728 (ValidateHwndIAMComponetUIAware.c)
 *     IAMThreadAccessGranted @ 0x14015C7E0 (IAMThreadAccessGranted.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x14015CE44 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?SetWindowCompositionForceActiveWindowAppearance@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E6AF4 (-SetWindowCompositionForceActiveWindowAppearance@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBD.c)
 *     ?SetWindowCompositionSystemBackdropType@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401EC684 (-SetWindowCompositionSystemBackdropType@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdq @ 0x1401EF8C0 (WPP_RECORDER_AND_TRACE_SF_sdq.c)
 *     ?SetWindowDisableMoveSizeFeedback@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401FA63C (-SetWindowDisableMoveSizeFeedback@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionTransitions@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401FE494 (-SetWindowCompositionTransitions@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionForceIconicSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140208248 (-SetWindowCompositionForceIconicSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionNCRenderPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x14020D974 (-SetWindowCompositionNCRenderPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionAlpha@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x14021759C (-SetWindowCompositionAlpha@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionRemoteAppPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402282E0 (-SetWindowCompositionRemoteAppPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@.c)
 *     ?SetWindowCompositionExcludedFromDDA@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140229E78 (-SetWindowCompositionExcludedFromDDA@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@.c)
 *     ?_DwmAsyncSetTaggedWindowRect@@YAJPEBUtagWND@@PEBUtagRECT@@@Z @ 0x14022FC6C (-_DwmAsyncSetTaggedWindowRect@@YAJPEBUtagWND@@PEBUtagRECT@@@Z.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ?DwmSetBorderMargins@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402AFA24 (-DwmSetBorderMargins@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionAllowNCPaint@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402AFCE8 (-SetWindowCompositionAllowNCPaint@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionNonClientRTLLayout@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402AFDAC (-SetWindowCompositionNonClientRTLLayout@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION.c)
 *     ?SetWindowCompositionPassiveUpdateMode@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402AFE74 (-SetWindowCompositionPassiveUpdateMode@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@.c)
 *     ?SetWindowCompositionVisualOwner@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402B0004 (-SetWindowCompositionVisualOwner@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?_DwmAsyncClearTaggedWindowRect@@YAJPEBUtagWND@@@Z @ 0x1402B00B8 (-_DwmAsyncClearTaggedWindowRect@@YAJPEBUtagWND@@@Z.c)
 *     ?zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z @ 0x1402D3C1C (-zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtUserSetWindowCompositionAttribute(__int64 a1, void *a2)
{
  NTSTATUS v3; // ebx
  size_t v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcessWow64Process; // rax
  volatile void *v8; // xmm0_8
  int v9; // r14d
  size_t v10; // r8
  __int64 v11; // rsi
  char v12; // r12
  __int64 v13; // rax
  unsigned __int64 left; // rcx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // r15d
  struct tagTHREADINFO *v19; // r14
  int v20; // eax
  __int64 v21; // rdx
  struct tagWND *Host; // rax
  __int64 v23; // rcx
  NTSTATUS updated; // eax
  __int64 v25; // rdx
  struct tagTHREADINFO *v26; // rax
  int v27; // eax
  bool v28; // bl
  __int64 UserSessionState; // rax
  int v30; // r8d
  int v31; // edx
  bool v32; // sf
  ULONG v33; // eax
  struct tagRECT v35; // [rsp+60h] [rbp-98h] BYREF
  __int64 v36; // [rsp+70h] [rbp-88h]
  int v37; // [rsp+78h] [rbp-80h]
  __m128i v38; // [rsp+88h] [rbp-70h] BYREF
  SIZE_T Length; // [rsp+98h] [rbp-60h]
  __m128i v40; // [rsp+A8h] [rbp-50h]
  SIZE_T v41; // [rsp+B8h] [rbp-40h]

  v3 = -1073741811;
  v37 = -1073741811;
  v40 = 0LL;
  v41 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v38 = 0LL;
  Length = 0LL;
  RtlCopyFromUser(&v38, a2, 0x18uLL);
  v40 = v38;
  v41 = Length;
  v4 = (unsigned int)Length;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6, v5);
  v8 = (volatile void *)_mm_srli_si128(v38, 8).m128i_u64[0];
  ProbeForRead(v8, (unsigned int)v4, CurrentProcessWow64Process != 0 ? 1 : 4);
  v9 = v38.m128i_i32[0];
  if ( (unsigned int)(v38.m128i_i32[0] - 1) <= 0x24 )
  {
    v10 = *(_QWORD *)&word_140353CA8[8 * v38.m128i_i32[0]];
    if ( v4 >= v10 )
    {
      memmove(&v35, (const void *)v8, v10);
      v11 = 0LL;
      v3 = 0;
      v37 = 0;
      goto LABEL_6;
    }
    v3 = -1073741789;
    v37 = -1073741789;
  }
  v11 = 0LL;
LABEL_6:
  if ( v3 < 0 )
  {
LABEL_112:
    v33 = RtlNtStatusToDosError(v3);
    UserSetLastError(v33);
    v32 = v3 < 0;
    goto LABEL_113;
  }
  v12 = 1;
  EnterCrit(1LL, 0LL);
  v13 = ValidateHwndIAMComponetUIAware(a1);
  v15 = v13;
  if ( !v13 )
    goto LABEL_110;
  if ( v9 != 17
    || !(unsigned int)IsTopLevelOrLayeredChildWindow(v13)
    || (v17 = *(_QWORD *)(v15 + 40), *(_DWORD *)(v17 + 236) == 15) )
  {
    if ( v9 == 36 && (unsigned int)IsTopLevelOrLayeredChildWindow(v15) )
    {
      updated = SetWindowCompositionAlpha(
                  (struct tagWND *)v15,
                  (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
LABEL_109:
      v3 = updated;
      goto LABEL_111;
    }
    if ( IsTopLevelWindow(v15) || v9 == 20 && (unsigned int)IsTopLevelOrLayeredChildWindow(v15) )
    {
      if ( v9 > 19 )
      {
        if ( v9 > 29 )
        {
          switch ( v9 )
          {
            case 30:
              updated = SetWindowCompositionSystemBackdropType(
                          (struct tagWND *)v15,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
              goto LABEL_109;
            case 31:
              updated = _DwmAsyncSetTaggedWindowRect((const struct tagWND *)v15, &v35);
              goto LABEL_109;
            case 32:
              updated = _DwmAsyncClearTaggedWindowRect((const struct tagWND *)v15);
              goto LABEL_109;
            case 33:
              updated = SetWindowCompositionRemoteAppPolicy(
                          (struct tagWND *)v15,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
              goto LABEL_109;
          }
          if ( v9 != 34 )
          {
            if ( v9 == 35 )
            {
              v3 = 0;
              left = (unsigned int)v35.left;
              if ( v35.left )
              {
                if ( (v35.left & 0xFF000000) != 0xFF000000 )
                {
LABEL_25:
                  v3 = -1073741811;
                  goto LABEL_111;
                }
                left = v35.left & 0xFFFFFF;
                *(_DWORD *)(v15 + 180) = left;
              }
              else
              {
                *(_DWORD *)(v15 + 180) = -1;
              }
              goto LABEL_111;
            }
            if ( v9 == 37 )
            {
              updated = DwmSetBorderMargins(
                          (struct tagWND *)v15,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
              goto LABEL_109;
            }
          }
          goto LABEL_98;
        }
        if ( v9 == 29 )
        {
          updated = SetWindowDisableMoveSizeFeedback(
                      (struct tagWND *)v15,
                      (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
          goto LABEL_109;
        }
        if ( v9 != 20 )
        {
          switch ( v9 )
          {
            case 22:
              updated = SetWindowCompositionVisualOwner(
                          (struct tagWND *)v15,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
              goto LABEL_109;
            case 23:
              v26 = PtiCurrent(0LL, v25);
              LOBYTE(v27) = IAMThreadAccessGranted(v26);
              if ( v27 )
              {
                LOBYTE(left) = *(_BYTE *)(*(_QWORD *)(v15 + 40) + 233LL) >> 7;
                if ( (v35.left != 0) != (_BYTE)left )
                  SetOrClrWF(v35.left != 0, (struct tagWND *)v15, 0xD980u, 1);
                v3 = 0;
              }
              else
              {
                v3 = -1073741790;
              }
              goto LABEL_111;
            case 24:
              updated = SetWindowCompositionExcludedFromDDA(
                          (struct tagWND *)v15,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
              goto LABEL_109;
            case 25:
              updated = SetWindowCompositionPassiveUpdateMode(
                          (struct tagWND *)v15,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
              goto LABEL_109;
            case 26:
              updated = SetWindowCompositionDarkModeColors(
                          (struct tagWND *)v15,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
              goto LABEL_109;
            case 27:
              updated = SetWindowCompositionCornerStyle(
                          (struct tagWND *)v15,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
              goto LABEL_109;
            case 28:
              updated = SetWindowCompositionPartColor(
                          (struct tagWND *)v15,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
              goto LABEL_109;
          }
          goto LABEL_98;
        }
        SetWindowCompositionFreezeSWR((struct tagWND *)v15, (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
      }
      else
      {
        if ( v9 == 19 )
        {
          updated = SetWindowCompositionAccentPolicy(
                      (struct tagWND *)v15,
                      (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
          goto LABEL_109;
        }
        if ( v9 > 9 )
        {
          v25 = 10LL;
          if ( v9 == 10 )
          {
            updated = _DwmAsyncSetCompositionAttribute(v15);
            goto LABEL_109;
          }
          if ( v9 == 11 )
          {
            updated = SetWindowCompositionNCRenderingExiled(
                        (struct tagWND *)v15,
                        (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
            goto LABEL_109;
          }
          if ( v9 != 12 )
          {
            if ( v9 == 13 )
            {
              updated = SetWindowCompositionExcludeFromLivePreview(
                          (struct tagWND *)v15,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
              goto LABEL_109;
            }
            if ( v9 != 14 )
            {
              if ( v9 == 15 )
              {
                updated = SetWindowCompositionForceActiveWindowAppearance(
                            (struct tagWND *)v15,
                            (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
                goto LABEL_109;
              }
              if ( v9 == 16 )
              {
                updated = SetWindowCompositionDisallowPeek(
                            (struct tagWND *)v15,
                            (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
                goto LABEL_109;
              }
            }
          }
          goto LABEL_98;
        }
        if ( v9 != 9 )
        {
          if ( v9 != 1 )
          {
            switch ( v9 )
            {
              case 2:
                updated = SetWindowCompositionNCRenderPolicy(
                            (struct tagWND *)v15,
                            (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
                goto LABEL_109;
              case 3:
                updated = SetWindowCompositionTransitions(
                            (struct tagWND *)v15,
                            (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
                goto LABEL_109;
              case 4:
                updated = SetWindowCompositionAllowNCPaint(
                            (struct tagWND *)v15,
                            (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
                goto LABEL_109;
            }
            if ( v9 != 5 )
            {
              if ( v9 == 6 )
              {
                updated = SetWindowCompositionNonClientRTLLayout(
                            (struct tagWND *)v15,
                            (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
                goto LABEL_109;
              }
              if ( v9 == 7 )
              {
                updated = SetWindowCompositionForceIconicSWR(
                            (struct tagWND *)v15,
                            (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
                goto LABEL_109;
              }
            }
          }
LABEL_98:
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
            || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
          {
            v12 = 0;
          }
          left = (unsigned __int64)&WPP_RECORDER_INITIALIZED;
          v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v25);
            LOBYTE(v30) = v28;
            LOBYTE(v31) = v12;
            WPP_RECORDER_AND_TRACE_SF_sdq(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v31,
              v30,
              *(_QWORD *)(UserSessionState + 69160));
          }
          goto LABEL_25;
        }
      }
      updated = SetWindowCompositionHasIconicBitmap(
                  (struct tagWND *)v15,
                  (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v35);
      goto LABEL_109;
    }
LABEL_110:
    v3 = -1073741816;
    goto LABEL_111;
  }
  v18 = 0;
  v19 = PtiCurrent(v17, v16);
  LOBYTE(v20) = IAMThreadAccessGranted(v19);
  if ( v20 )
  {
    v18 = 2;
  }
  else
  {
    left = *((_QWORD *)v19 + 58);
    if ( *(_QWORD *)(*(_QWORD *)(v15 + 16) + 464LL) == left
      && ((*(_BYTE *)(left + 808) & 0x30) != 0x10 || !IsTopLevelWindow(v15))
      || (unsigned int)CoreWindowProp::IsComponent((const struct tagWND *)v15, v21)
      && (Host = CoreWindowProp::GetHost((const struct tagWND *)v15)) != 0LL
      && (left = *((_QWORD *)Host + 2), *(_QWORD *)(left + 464) == *((_QWORD *)v19 + 58)) )
    {
      v18 = 1;
    }
    else
    {
      v3 = -1073741790;
    }
  }
  if ( v3 >= 0 )
  {
    if ( !v35.left )
    {
      v23 = *(_QWORD *)(v15 + 120);
      if ( v23 )
      {
        if ( ((unsigned int)_GetWindowCloakState(v23) & v18) != 0 )
          goto LABEL_25;
      }
    }
    updated = zzzUpdateWindowCompositionCloak(v15, v35.left == 0, v18);
    goto LABEL_109;
  }
LABEL_111:
  UserSessionSwitchLeaveCrit(left);
  v32 = v3 < 0;
  if ( v3 < 0 )
    goto LABEL_112;
LABEL_113:
  LOBYTE(v11) = !v32;
  return v11;
}
