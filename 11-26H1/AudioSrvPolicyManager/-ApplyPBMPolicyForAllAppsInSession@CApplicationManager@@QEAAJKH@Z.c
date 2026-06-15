/*
 * XREFs of ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18000FDB0
 * Callers:
 *     _lambda_8722efacb6e295def5e1d4fc60f9938c_::operator() @ 0x180005474 (_lambda_8722efacb6e295def5e1d4fc60f9938c_--operator().c)
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000EA10 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x1800133E0 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180014A28 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?UpdateModernStandbyAudioState@CApplicationManager@@QEAAJK@Z @ 0x180029E3C (-UpdateModernStandbyAudioState@CApplicationManager@@QEAAJK@Z.c)
 *     ?UnmuteDesktopAppsInSession@CApplicationManager@@QEAAXK@Z @ 0x18003D368 (-UnmuteDesktopAppsInSession@CApplicationManager@@QEAAXK@Z.c)
 *     std::_Func_impl_no_alloc__lambda_083813e9f63eb05ca4d70f9ca4f2f4c2__void_::_Do_call @ 0x180047A30 (std--_Func_impl_no_alloc__lambda_083813e9f63eb05ca4d70f9ca4f2f4c2__void_--_Do_call.c)
 * Callees:
 *     ?UpdateVolume@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAH1@Z @ 0x180010C60 (-UpdateVolume@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAH1@Z.c)
 *     ?NotifyVolumePolicyChange@CApplication@@IEAAXXZ @ 0x180010FC0 (-NotifyVolumePolicyChange@CApplication@@IEAAXXZ.c)
 *     ??$ForEachSession@UIAudioSessionPolicyControl@@@CProcess@@IEAAJ$$QEAV?$function@$$A6AXPEAUIAudioSessionPolicyControl@@PEA_N@Z@std@@@Z @ 0x180011100 (--$ForEachSession@UIAudioSessionPolicyControl@@@CProcess@@IEAAJ$$QEAV-$function@$$A6AXPEAUIAudio.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180011340 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x180011710 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 *     ?RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ @ 0x18001210C (-RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ.c)
 *     ?SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180012250 (-SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180012380 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003AD8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CApplicationManager::ApplyPBMPolicyForAllAppsInSession(CApplicationManager *this, int a2, int a3)
{
  int v3; // r12d
  int v4; // esi
  CApplicationManager *v5; // r14
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // r15
  unsigned int v10; // r14d
  unsigned int v11; // ecx
  int v12; // edi
  BOOL v13; // esi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  struct _RTL_CRITICAL_SECTION *v17; // rbx
  int v18; // eax
  _DWORD *v19; // rsi
  int v20; // esi
  struct _RTL_CRITICAL_SECTION *v21; // rcx
  _QWORD *v22; // rbx
  __int64 v23; // rsi
  int v24; // eax
  _QWORD *v25; // rdx
  AudioStateMonitorManager *v26; // rcx
  unsigned int v27; // r13d
  _QWORD *v28; // rsi
  __int64 v29; // rcx
  unsigned int v30; // r13d
  _QWORD *v31; // rbx
  __int64 v32; // r13
  int v33; // eax
  _QWORD *v34; // rdx
  AudioStateMonitorManager *v35; // rcx
  int v36; // [rsp+20h] [rbp-E0h]
  unsigned int v37; // [rsp+30h] [rbp-D0h] BYREF
  int v38; // [rsp+34h] [rbp-CCh] BYREF
  int v39; // [rsp+38h] [rbp-C8h] BYREF
  int v40; // [rsp+3Ch] [rbp-C4h]
  int v41; // [rsp+40h] [rbp-C0h] BYREF
  int v42; // [rsp+48h] [rbp-B8h] BYREF
  int v43; // [rsp+4Ch] [rbp-B4h] BYREF
  int v44; // [rsp+50h] [rbp-B0h]
  __int64 v45; // [rsp+58h] [rbp-A8h]
  __int64 v46; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v47; // [rsp+68h] [rbp-98h]
  CApplicationManager *v48; // [rsp+70h] [rbp-90h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+78h] [rbp-88h]
  __int64 v50; // [rsp+80h] [rbp-80h]
  struct _RTL_CRITICAL_SECTION *v51; // [rsp+88h] [rbp-78h]
  struct _RTL_CRITICAL_SECTION *v52; // [rsp+90h] [rbp-70h]
  _QWORD v53[7]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v54; // [rsp+D8h] [rbp-28h]
  _QWORD v55[7]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD *v56; // [rsp+118h] [rbp+18h]
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v3 = a3;
  v40 = a3;
  v4 = a2;
  v44 = a2;
  v5 = this;
  v48 = this;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v51 = v6;
  v7 = (_QWORD *)*((_QWORD *)v5 + 9);
  if ( !v7 )
    goto LABEL_4;
  do
  {
    v8 = v7[2];
    v7 = (_QWORD *)*v7;
    v47 = v7;
    if ( *(_DWORD *)(v8 + 212) != v4 )
      continue;
    EnterCriticalSection(v6);
    v52 = v6;
    v37 = 0;
    v39 = 0;
    v38 = 0;
    CApplicationManager::GetApplicationPBMStatus(
      v5,
      (struct CApplication *)v8,
      (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v39,
      (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v37,
      (enum _PLM_EXEMPTION *)&v38);
    v10 = 209;
    v42 = 0;
    v43 = 0;
    v11 = v37;
    v12 = v38;
    do
    {
      v13 = 0;
      v14 = v10 & 7;
      if ( v14 == 3 )
      {
        v17 = (struct _RTL_CRITICAL_SECTION *)(v8 + 336);
        EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 336));
        *(_DWORD *)(v8 + 380) = v12;
        if ( v12 == 1 )
          v13 = *(_DWORD *)(v8 + 272) != 0;
        if ( v8 != -336 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 336));
        if ( v13 )
          goto LABEL_34;
        while ( 1 )
        {
          EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 336));
          if ( *(_DWORD *)(v8 + 376) )
          {
            v20 = *(_DWORD *)(v8 + 376);
            if ( v20 != GetCurrentThreadId() )
              goto LABEL_31;
          }
          if ( !*(_DWORD *)(v8 + 380) )
          {
            *(_DWORD *)(v8 + 376) = 0;
            goto LABEL_31;
          }
          *(_DWORD *)(v8 + 376) = GetCurrentThreadId();
          v27 = *(_DWORD *)(v8 + 380);
          *(_DWORD *)(v8 + 380) = 0;
          if ( v8 != -336 )
            LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 336));
          EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 32));
          v45 = v8 + 32;
          v28 = *(_QWORD **)(v8 + 72);
          while ( v28 )
          {
            v29 = v28[2];
            v28 = (_QWORD *)*v28;
            CProcess::NotifyPLM(v29, v27);
          }
          if ( v8 != -32 )
            LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 32));
        }
      }
      v15 = v14 - 1;
      if ( !v15 )
      {
        CApplication::UpdateVolume(v8, v11, &v42, &v43);
        if ( v42 )
        {
          if ( v43 )
            CApplicationManager::UpdateVolumeForAllAppsInSession(g_ApplicationManager, *(unsigned int *)(v8 + 212), 3LL);
          EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 32));
          v50 = v8 + 32;
          v31 = *(_QWORD **)(v8 + 72);
          if ( v31 )
          {
            do
            {
              v32 = v31[2];
              v31 = (_QWORD *)*v31;
              if ( !*(_DWORD *)(v32 + 416) )
              {
                v41 = 3;
                EnterCriticalSection((LPCRITICAL_SECTION)(v32 + 24));
                v45 = v32 + 24;
                v53[0] = off_180052AB0;
                v53[1] = &v41;
                v54 = v53;
                v33 = CProcess::ForEachSession<IAudioSessionPolicyControl>(v32, v53);
                if ( v33 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0xDA6,
                    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                    (const char *)(unsigned int)v33,
                    v36);
                if ( v54 )
                {
                  v34 = v53;
                  LOBYTE(v34) = v54 != v53;
                  (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v54 + 32LL))(v54, v34);
                }
                v35 = *(AudioStateMonitorManager **)(v32 + 704);
                if ( v35 )
                  AudioStateMonitorManager::RecalculateVolume(v35);
                if ( v32 != -24 )
                  LeaveCriticalSection((LPCRITICAL_SECTION)(v32 + 24));
              }
            }
            while ( v31 );
            v12 = v38;
          }
          CApplication::NotifyVolumePolicyChange((CApplication *)v8);
          if ( v8 != -32 )
            LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 32));
          EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 224));
          v45 = v8 + 224;
          *(_DWORD *)(v8 + 272) = 1;
          v46 = -4400000LL;
          v36 = 0;
          (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64 *, _QWORD))(*(_QWORD *)ThreadPool + 24LL))(
            ThreadPool,
            *(_QWORD *)(v8 + 264),
            &v46,
            0LL);
          if ( v8 != -224 )
            LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 224));
          goto LABEL_34;
        }
        if ( v3 )
        {
          EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 32));
          v45 = v8 + 32;
          v22 = *(_QWORD **)(v8 + 72);
          if ( v22 )
          {
            do
            {
              v23 = v22[2];
              v22 = (_QWORD *)*v22;
              if ( !*(_DWORD *)(v23 + 416) )
              {
                v41 = 3;
                EnterCriticalSection((LPCRITICAL_SECTION)(v23 + 24));
                v50 = v23 + 24;
                v55[0] = off_180052AB0;
                v55[1] = &v41;
                v56 = v55;
                v24 = CProcess::ForEachSession<IAudioSessionPolicyControl>(v23, v55);
                if ( v24 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0xDA6,
                    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                    (const char *)(unsigned int)v24,
                    v36);
                if ( v56 )
                {
                  v25 = v55;
                  LOBYTE(v25) = v56 != v55;
                  (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v56 + 32LL))(v56, v25);
                }
                v26 = *(AudioStateMonitorManager **)(v23 + 704);
                if ( v26 )
                  AudioStateMonitorManager::RecalculateVolume(v26);
                if ( v23 != -24 )
                  LeaveCriticalSection((LPCRITICAL_SECTION)(v23 + 24));
              }
            }
            while ( v22 );
            v12 = v38;
          }
          CApplication::NotifyVolumePolicyChange((CApplication *)v8);
          if ( v8 != -32 )
          {
            v21 = (struct _RTL_CRITICAL_SECTION *)(v8 + 32);
            goto LABEL_33;
          }
        }
LABEL_34:
        v11 = v37;
        goto LABEL_35;
      }
      v16 = v15 - 1;
      if ( !v16 )
      {
        v17 = (struct _RTL_CRITICAL_SECTION *)(v8 + 280);
        EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 280));
        v18 = v39;
        *(_DWORD *)(v8 + 324) = v39;
        if ( v18 < *(_DWORD *)(v8 + 328) )
          v13 = *(_DWORD *)(v8 + 272) != 0;
        if ( v8 != -280 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 280));
        if ( v13 )
          goto LABEL_34;
        v19 = (_DWORD *)(v8 + 684);
        while ( 1 )
        {
          EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 280));
          if ( *(_DWORD *)(v8 + 320) )
          {
            v19 = (_DWORD *)(v8 + 684);
            if ( *(_DWORD *)(v8 + 320) != GetCurrentThreadId() )
              break;
          }
          if ( *(_DWORD *)(v8 + 324) == *(_DWORD *)(v8 + 328) && !*v19 )
          {
            *(_DWORD *)(v8 + 320) = 0;
            if ( v8 != -280 )
              goto LABEL_32;
            goto LABEL_34;
          }
          *(_DWORD *)(v8 + 320) = GetCurrentThreadId();
          v30 = *(_DWORD *)(v8 + 324);
          *(_DWORD *)(v8 + 328) = v30;
          *v19 = 0;
          if ( v8 != -280 )
            LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 280));
          CApplication::SendSoundLevelNotification(v8, v30);
        }
LABEL_31:
        if ( v17 )
        {
LABEL_32:
          v21 = v17;
LABEL_33:
          LeaveCriticalSection(v21);
          goto LABEL_34;
        }
        goto LABEL_34;
      }
      if ( v16 == 2 )
      {
        Sleep(0xAu);
        goto LABEL_34;
      }
LABEL_35:
      v10 >>= 3;
      v3 = v40;
    }
    while ( v10 );
    v6 = lpCriticalSection;
    if ( !v39 && !v11 )
    {
      if ( v38 == 1 )
      {
        *(_DWORD *)(v8 + 620) = 1;
        *(_DWORD *)(v8 + 640) = 1;
        *(_DWORD *)(v8 + 644) = 1;
        goto LABEL_40;
      }
      if ( *(_DWORD *)(v8 + 620) != 6 )
      {
        *(_DWORD *)(v8 + 620) = 6;
LABEL_40:
        *(_QWORD *)(v8 + 632) = 1LL;
        *(_QWORD *)(v8 + 624) = 1LL;
      }
    }
    if ( v6 )
      LeaveCriticalSection(v6);
    v5 = v48;
    v3 = v40;
    v4 = v44;
    v7 = v47;
  }
  while ( v7 );
LABEL_4:
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
