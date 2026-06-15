/*
 * XREFs of ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180010540
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180014A28 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180015CB0 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAVCApplication@@@Z @ 0x18002AB18 (-OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAVCApplication@@@Z.c)
 *     ?CommitGoodFaithPLMExemption@CApplication@@QEAAJXZ @ 0x1800382D4 (-CommitGoodFaithPLMExemption@CApplication@@QEAAJXZ.c)
 *     ?GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ @ 0x1800388B0 (-GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x1800389C0 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 *     ?OnProcessCategoryDowngraded@CApplicationManager@@QEAAXPEAVCProcess@@@Z @ 0x180047CC4 (-OnProcessCategoryDowngraded@CApplicationManager@@QEAAXPEAVCProcess@@@Z.c)
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

// Hidden C++ exception states: #wind=9
__int64 __fastcall CApplicationManager::ApplyPBMPolicy(
        CApplicationManager *this,
        struct CApplication *a2,
        unsigned int a3,
        int a4)
{
  int v4; // r15d
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  int v9; // r13d
  unsigned int v10; // ecx
  BOOL v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  struct _RTL_CRITICAL_SECTION *v15; // rbx
  int v16; // eax
  _DWORD *v17; // rdi
  int v18; // edi
  struct _RTL_CRITICAL_SECTION *v19; // rcx
  _QWORD *v21; // rbx
  __int64 v22; // rdi
  int v23; // eax
  _QWORD *v24; // rdx
  AudioStateMonitorManager *v25; // rcx
  unsigned int v26; // r12d
  _QWORD *v27; // rdi
  __int64 v28; // rcx
  unsigned int v29; // r12d
  _QWORD *v30; // rbx
  __int64 v31; // r15
  int v32; // eax
  _QWORD *v33; // rdx
  AudioStateMonitorManager *v34; // rcx
  int v35; // [rsp+20h] [rbp-E0h]
  unsigned int v36; // [rsp+30h] [rbp-D0h] BYREF
  int v37; // [rsp+34h] [rbp-CCh] BYREF
  int v38; // [rsp+38h] [rbp-C8h] BYREF
  int v39; // [rsp+40h] [rbp-C0h] BYREF
  int v40; // [rsp+48h] [rbp-B8h] BYREF
  int v41; // [rsp+4Ch] [rbp-B4h] BYREF
  int v42; // [rsp+50h] [rbp-B0h]
  char *v43; // [rsp+58h] [rbp-A8h]
  __int64 v44; // [rsp+60h] [rbp-A0h] BYREF
  struct _RTL_CRITICAL_SECTION *v45; // [rsp+68h] [rbp-98h]
  char *v46; // [rsp+70h] [rbp-90h]
  struct _RTL_CRITICAL_SECTION *v47; // [rsp+78h] [rbp-88h]
  _QWORD v48[7]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD *v49; // [rsp+B8h] [rbp-48h]
  _QWORD v50[7]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v51; // [rsp+F8h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v4 = a4;
  v42 = a4;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v45 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v47 = v8;
  v36 = 0;
  v38 = 0;
  v37 = 0;
  CApplicationManager::GetApplicationPBMStatus(
    this,
    a2,
    (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v38,
    (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v36,
    (enum _PLM_EXEMPTION *)&v37);
  v9 = v37;
  v40 = 0;
  v41 = 0;
  v10 = v36;
  if ( a3 )
  {
    while ( 1 )
    {
      v11 = 0;
      v12 = a3 & 7;
      if ( v12 == 3 )
        break;
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 != 2 )
            goto LABEL_29;
          Sleep(0xAu);
          goto LABEL_28;
        }
        v15 = (struct _RTL_CRITICAL_SECTION *)((char *)a2 + 280);
        EnterCriticalSection((LPCRITICAL_SECTION)a2 + 7);
        v16 = v38;
        *((_DWORD *)a2 + 81) = v38;
        if ( v16 < *((_DWORD *)a2 + 82) )
          v11 = *((_DWORD *)a2 + 68) != 0;
        if ( a2 != (struct CApplication *)-280LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)a2 + 7);
        if ( v11 )
          goto LABEL_28;
        v17 = (_DWORD *)((char *)a2 + 684);
        while ( 1 )
        {
          EnterCriticalSection((LPCRITICAL_SECTION)a2 + 7);
          if ( *((_DWORD *)a2 + 80) )
          {
            v17 = (_DWORD *)((char *)a2 + 684);
            if ( *((_DWORD *)a2 + 80) != GetCurrentThreadId() )
              goto LABEL_25;
          }
          if ( *((_DWORD *)a2 + 81) == *((_DWORD *)a2 + 82) && !*v17 )
          {
            *((_DWORD *)a2 + 80) = 0;
            if ( a2 == (struct CApplication *)-280LL )
              goto LABEL_28;
            goto LABEL_26;
          }
          *((_DWORD *)a2 + 80) = GetCurrentThreadId();
          v29 = *((_DWORD *)a2 + 81);
          *((_DWORD *)a2 + 82) = v29;
          *v17 = 0;
          if ( a2 != (struct CApplication *)-280LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)a2 + 7);
          CApplication::SendSoundLevelNotification(a2, v29);
        }
      }
      CApplication::UpdateVolume(a2, v10, &v40, &v41);
      if ( v40 )
      {
        if ( v41 )
          CApplicationManager::UpdateVolumeForAllAppsInSession(g_ApplicationManager, *((unsigned int *)a2 + 53), 3LL);
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
        v46 = (char *)a2 + 32;
        v30 = (_QWORD *)*((_QWORD *)a2 + 9);
        if ( v30 )
        {
          do
          {
            v31 = v30[2];
            v30 = (_QWORD *)*v30;
            if ( !*(_DWORD *)(v31 + 416) )
            {
              v39 = 3;
              EnterCriticalSection((LPCRITICAL_SECTION)(v31 + 24));
              v43 = (char *)(v31 + 24);
              v48[0] = off_180052AB0;
              v48[1] = &v39;
              v49 = v48;
              v32 = CProcess::ForEachSession<IAudioSessionPolicyControl>(v31, v48);
              if ( v32 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0xDA6,
                  (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                  (const char *)(unsigned int)v32,
                  v35);
              if ( v49 )
              {
                v33 = v48;
                LOBYTE(v33) = v49 != v48;
                (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v49 + 32LL))(v49, v33);
              }
              v34 = *(AudioStateMonitorManager **)(v31 + 704);
              if ( v34 )
                AudioStateMonitorManager::RecalculateVolume(v34);
              if ( v31 != -24 )
                LeaveCriticalSection((LPCRITICAL_SECTION)(v31 + 24));
            }
          }
          while ( v30 );
          v9 = v37;
        }
        CApplication::NotifyVolumePolicyChange(a2);
        if ( a2 != (struct CApplication *)-32LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 224));
        v43 = (char *)a2 + 224;
        *((_DWORD *)a2 + 68) = 1;
        v44 = -4400000LL;
        v35 = 0;
        (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64 *, _QWORD))(*(_QWORD *)ThreadPool + 24LL))(
          ThreadPool,
          *((_QWORD *)a2 + 33),
          &v44,
          0LL);
        if ( a2 != (struct CApplication *)-224LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 224));
        goto LABEL_28;
      }
      if ( v4 )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
        v43 = (char *)a2 + 32;
        v21 = (_QWORD *)*((_QWORD *)a2 + 9);
        if ( v21 )
        {
          do
          {
            v22 = v21[2];
            v21 = (_QWORD *)*v21;
            if ( !*(_DWORD *)(v22 + 416) )
            {
              v39 = 3;
              EnterCriticalSection((LPCRITICAL_SECTION)(v22 + 24));
              v46 = (char *)(v22 + 24);
              v50[0] = off_180052AB0;
              v50[1] = &v39;
              v51 = v50;
              v23 = CProcess::ForEachSession<IAudioSessionPolicyControl>(v22, v50);
              if ( v23 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0xDA6,
                  (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                  (const char *)(unsigned int)v23,
                  v35);
              if ( v51 )
              {
                v24 = v50;
                LOBYTE(v24) = v51 != v50;
                (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v51 + 32LL))(v51, v24);
              }
              v25 = *(AudioStateMonitorManager **)(v22 + 704);
              if ( v25 )
                AudioStateMonitorManager::RecalculateVolume(v25);
              if ( v22 != -24 )
                LeaveCriticalSection((LPCRITICAL_SECTION)(v22 + 24));
            }
          }
          while ( v21 );
          v9 = v37;
        }
        CApplication::NotifyVolumePolicyChange(a2);
        if ( a2 != (struct CApplication *)-32LL )
        {
          v19 = (struct _RTL_CRITICAL_SECTION *)((char *)a2 + 32);
          goto LABEL_27;
        }
      }
LABEL_28:
      v10 = v36;
LABEL_29:
      a3 >>= 3;
      v4 = v42;
      if ( !a3 )
      {
        v8 = v45;
        goto LABEL_31;
      }
    }
    v15 = (struct _RTL_CRITICAL_SECTION *)((char *)a2 + 336);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 336));
    *((_DWORD *)a2 + 95) = v9;
    if ( v9 == 1 )
      v11 = *((_DWORD *)a2 + 68) != 0;
    if ( a2 != (struct CApplication *)-336LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 336));
    if ( v11 )
      goto LABEL_28;
    while ( 1 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 336));
      if ( *((_DWORD *)a2 + 94) )
      {
        v18 = *((_DWORD *)a2 + 94);
        if ( v18 != GetCurrentThreadId() )
          break;
      }
      if ( !*((_DWORD *)a2 + 95) )
      {
        *((_DWORD *)a2 + 94) = 0;
        break;
      }
      *((_DWORD *)a2 + 94) = GetCurrentThreadId();
      v26 = *((_DWORD *)a2 + 95);
      *((_DWORD *)a2 + 95) = 0;
      if ( a2 != (struct CApplication *)-336LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 336));
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
      v43 = (char *)a2 + 32;
      v27 = (_QWORD *)*((_QWORD *)a2 + 9);
      while ( v27 )
      {
        v28 = v27[2];
        v27 = (_QWORD *)*v27;
        CProcess::NotifyPLM(v28, v26);
      }
      if ( a2 != (struct CApplication *)-32LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
    }
LABEL_25:
    if ( v15 )
    {
LABEL_26:
      v19 = v15;
LABEL_27:
      LeaveCriticalSection(v19);
      goto LABEL_28;
    }
    goto LABEL_28;
  }
LABEL_31:
  if ( !v38 && !v10 )
  {
    if ( v9 == 1 )
    {
      *((_DWORD *)a2 + 155) = 1;
      *((_DWORD *)a2 + 160) = 1;
      *((_DWORD *)a2 + 161) = 1;
LABEL_35:
      *((_QWORD *)a2 + 79) = 1LL;
      *((_QWORD *)a2 + 78) = 1LL;
      goto LABEL_36;
    }
    if ( *((_DWORD *)a2 + 155) != 6 )
    {
      *((_DWORD *)a2 + 155) = 6;
      goto LABEL_35;
    }
  }
LABEL_36:
  if ( v8 )
    LeaveCriticalSection(v8);
  return 0LL;
}
