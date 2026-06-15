/*
 * XREFs of ?RegisterAudioStateMonitor@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x1800055B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x180005674 (-RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STRE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$MakeAndInitialize@VAudioStateMonitorManager@@V1@AEAPEAVCWindowsPolicyManager@@PEAVCProcess@@PEBU_tlgProvider_t@@@Details@WRL@Microsoft@@YAJPEAPEAVAudioStateMonitorManager@@AEAPEAVCWindowsPolicyManager@@$$QEAPEAVCProcess@@$$QEAPEBU_tlgProvider_t@@@Z @ 0x180036C0C (--$MakeAndInitialize@VAudioStateMonitorManager@@V1@AEAPEAVCWindowsPolicyManager@@PEAVCProcess@@P.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::RegisterAudioStateMonitor(
        CProcess *this,
        enum AUDIO_DIRECTION *a2,
        enum _AUDIO_STREAM_CATEGORY *a3,
        const unsigned __int16 *a4,
        unsigned __int64 *a5)
{
  AudioStateMonitorManager **v9; // rdi
  __int64 v10; // rdx
  AudioStateMonitorManager *v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  int v15; // [rsp+20h] [rbp-38h]
  CProcess *v16; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  const struct _tlgProvider_t *v18; // [rsp+60h] [rbp+8h] BYREF

  v9 = (AudioStateMonitorManager **)((char *)this + 704);
  if ( *((_QWORD *)this + 88) )
    return AudioStateMonitorManager::RegisterAudioStateMonitor(*v9, a2, a3, a4, a5);
  v18 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  v16 = this;
  v11 = *v9;
  *v9 = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(AudioStateMonitorManager *))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = Microsoft::WRL::Details::MakeAndInitialize<AudioStateMonitorManager,AudioStateMonitorManager,CWindowsPolicyManager * &,CProcess *,_tlgProvider_t const *>(
          v9,
          v10,
          &v16,
          &v18);
  v13 = v12;
  if ( v12 >= 0 )
    return AudioStateMonitorManager::RegisterAudioStateMonitor(*v9, a2, a3, a4, a5);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10B8,
    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
    (const char *)(unsigned int)v12,
    v15);
  return v13;
}
