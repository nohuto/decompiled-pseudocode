/*
 * XREFs of ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180012380
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000EA10 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18000F768 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18000FDB0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180010540 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x1800133E0 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180020618 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_80aa732c9f0abca8142808a505c7029f__void_::_Do_call @ 0x180026BD0 (std--_Func_impl_no_alloc__lambda_80aa732c9f0abca8142808a505c7029f__void_--_Do_call.c)
 *     ?UpdateModernStandbyAudioState@CApplicationManager@@QEAAJK@Z @ 0x180029E3C (-UpdateModernStandbyAudioState@CApplicationManager@@QEAAJK@Z.c)
 *     ?RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@@Z @ 0x180039418 (-RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@.c)
 *     ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@HH@Z @ 0x18003C5B0 (-OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@HH@Z.c)
 *     ??1CAastPreStartContext@@UEAA@XZ @ 0x1800429BC (--1CAastPreStartContext@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x180042BAC (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?NotifyVolumePolicyChange@CApplication@@IEAAXXZ @ 0x180010FC0 (-NotifyVolumePolicyChange@CApplication@@IEAAXXZ.c)
 *     ??$ForEachSession@UIAudioSessionPolicyControl@@@CProcess@@IEAAJ$$QEAV?$function@$$A6AXPEAUIAudioSessionPolicyControl@@PEA_N@Z@std@@@Z @ 0x180011100 (--$ForEachSession@UIAudioSessionPolicyControl@@@CProcess@@IEAAJ$$QEAV-$function@$$A6AXPEAUIAudio.c)
 *     ?RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ @ 0x18001210C (-RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003AD8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CApplicationManager::UpdateVolumeForAllAppsInSession(__int64 a1, int a2, int a3)
{
  int v3; // r13d
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rbp
  struct _RTL_CRITICAL_SECTION *v8; // r15
  _QWORD *v9; // rsi
  int v10; // r15d
  __int64 v11; // r14
  __int64 v12; // r8
  const char *v13; // r9
  int v14; // eax
  _QWORD *v15; // rdx
  AudioStateMonitorManager *v16; // rcx
  int v18; // [rsp+20h] [rbp-B8h]
  int v19; // [rsp+28h] [rbp-B0h] BYREF
  int v20; // [rsp+30h] [rbp-A8h]
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+38h] [rbp-A0h]
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+40h] [rbp-98h]
  __int64 v23; // [rsp+48h] [rbp-90h]
  __int64 v24; // [rsp+50h] [rbp-88h]
  _QWORD v25[7]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD *v26; // [rsp+98h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v18 = a3;
  v3 = a2;
  v20 = a2;
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v21 = v5;
  v6 = *(_QWORD **)(a1 + 72);
  while ( v6 )
  {
    v7 = v6[2];
    v6 = (_QWORD *)*v6;
    if ( *(_DWORD *)(v7 + 212) == v3 )
    {
      EnterCriticalSection(v5);
      v22 = v5;
      v8 = (struct _RTL_CRITICAL_SECTION *)(v7 + 32);
      EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 32));
      v23 = v7 + 32;
      v9 = *(_QWORD **)(v7 + 72);
      if ( v9 )
      {
        v10 = v18;
        do
        {
          v11 = v9[2];
          v9 = (_QWORD *)*v9;
          if ( !*(_DWORD *)(v11 + 416) )
          {
            v19 = v10;
            EnterCriticalSection((LPCRITICAL_SECTION)(v11 + 24));
            v24 = v11 + 24;
            v25[0] = off_180052AB0;
            v25[1] = &v19;
            v26 = v25;
            v14 = CProcess::ForEachSession<IAudioSessionPolicyControl>(v11, (__int64)v25, v12, v13);
            if ( v14 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0xDA6,
                (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                (const char *)(unsigned int)v14,
                v18);
            if ( v26 )
            {
              v15 = v25;
              LOBYTE(v15) = v26 != v25;
              (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v26 + 32LL))(v26, v15);
            }
            v16 = *(AudioStateMonitorManager **)(v11 + 704);
            if ( v16 )
              AudioStateMonitorManager::RecalculateVolume(v16);
            if ( v11 != -24 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(v11 + 24));
          }
        }
        while ( v9 );
        v8 = (struct _RTL_CRITICAL_SECTION *)(v7 + 32);
        v3 = v20;
      }
      CApplication::NotifyVolumePolicyChange((CApplication *)v7);
      if ( v8 )
        LeaveCriticalSection(v8);
      if ( v5 )
        LeaveCriticalSection(v5);
    }
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return 0LL;
}
