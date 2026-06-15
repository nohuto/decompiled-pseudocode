/*
 * XREFs of ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x18000FC20
 * Callers:
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18000F768 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 * Callees:
 *     ?NotifyVolumePolicyChange@CApplication@@IEAAXXZ @ 0x180010FC0 (-NotifyVolumePolicyChange@CApplication@@IEAAXXZ.c)
 *     ??$ForEachSession@UIAudioSessionPolicyControl@@@CProcess@@IEAAJ$$QEAV?$function@$$A6AXPEAUIAudioSessionPolicyControl@@PEA_N@Z@std@@@Z @ 0x180011100 (--$ForEachSession@UIAudioSessionPolicyControl@@@CProcess@@IEAAJ$$QEAV-$function@$$A6AXPEAUIAudio.c)
 *     ?RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ @ 0x18001210C (-RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003AD8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplication::RecalculateVolume(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  int v7; // eax
  _QWORD *v8; // rdx
  AudioStateMonitorManager *v9; // rcx
  int v11; // [rsp+20h] [rbp-98h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+28h] [rbp-90h]
  __int64 v13; // [rsp+30h] [rbp-88h]
  _QWORD v14[7]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD *v15; // [rsp+78h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v12 = v4;
  v5 = *(_QWORD **)(a1 + 72);
  while ( v5 )
  {
    v6 = v5[2];
    v5 = (_QWORD *)*v5;
    if ( !*(_DWORD *)(v6 + 416) )
    {
      v11 = a2;
      EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 24));
      v13 = v6 + 24;
      v14[0] = off_180052AB0;
      v14[1] = &v11;
      v15 = v14;
      v7 = CProcess::ForEachSession<IAudioSessionPolicyControl>(v6, v14);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xDA6,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
          (const char *)(unsigned int)v7,
          v11);
      if ( v15 )
      {
        v8 = v14;
        LOBYTE(v8) = v15 != v14;
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v15 + 32LL))(v15, v8);
      }
      v9 = *(AudioStateMonitorManager **)(v6 + 704);
      if ( v9 )
        AudioStateMonitorManager::RecalculateVolume(v9);
      if ( v6 != -24 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 24));
    }
  }
  CApplication::NotifyVolumePolicyChange((CApplication *)a1);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
