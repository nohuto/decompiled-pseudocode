/*
 * XREFs of ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180012830
 * Callers:
 *     ?RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@@Z @ 0x180039418 (-RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@.c)
 * Callees:
 *     ??$ForEachSession@UIAudioSessionPolicyControl@@@CProcess@@IEAAJ$$QEAV?$function@$$A6AXPEAUIAudioSessionPolicyControl@@PEA_N@Z@std@@@Z @ 0x180011100 (--$ForEachSession@UIAudioSessionPolicyControl@@@CProcess@@IEAAJ$$QEAV-$function@$$A6AXPEAUIAudio.c)
 *     ?RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ @ 0x18001210C (-RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003AD8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProcess::RecalculateVolume(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v4; // r8
  const char *v5; // r9
  int v6; // eax
  _QWORD *v7; // rdx
  AudioStateMonitorManager *v8; // rcx
  _QWORD v10[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v11; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  int v13; // [rsp+98h] [rbp+10h] BYREF

  v13 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v10[0] = off_180052AB0;
  v10[1] = &v13;
  v11 = v10;
  v6 = CProcess::ForEachSession<IAudioSessionPolicyControl>(a1, (__int64)v10, v4, v5);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xDA6,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v6,
      (int)v3);
  if ( v11 )
  {
    v7 = v10;
    LOBYTE(v7) = v11 != v10;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v11 + 32LL))(v11, v7);
  }
  v8 = *(AudioStateMonitorManager **)(a1 + 704);
  if ( v8 )
    AudioStateMonitorManager::RecalculateVolume(v8);
  if ( v3 )
    LeaveCriticalSection(v3);
  return 0LL;
}
