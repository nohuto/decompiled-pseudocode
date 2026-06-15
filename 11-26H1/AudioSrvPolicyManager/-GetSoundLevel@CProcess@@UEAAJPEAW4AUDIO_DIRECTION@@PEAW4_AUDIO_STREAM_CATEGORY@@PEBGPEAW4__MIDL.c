/*
 * XREFs of ?GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18002DD30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?GetSoundLevel@AudioStateMonitorManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x180025FF4 (-GetSoundLevel@AudioStateMonitorManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW.c)
 *     ??$MakeAndInitialize@VAudioStateMonitorManager@@V1@AEAPEAVCWindowsPolicyManager@@PEAVCProcess@@PEBU_tlgProvider_t@@@Details@WRL@Microsoft@@YAJPEAPEAVAudioStateMonitorManager@@AEAPEAVCWindowsPolicyManager@@$$QEAPEAVCProcess@@$$QEAPEBU_tlgProvider_t@@@Z @ 0x180036C0C (--$MakeAndInitialize@VAudioStateMonitorManager@@V1@AEAPEAVCWindowsPolicyManager@@PEAVCProcess@@P.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::GetSoundLevel(
        CProcess *this,
        enum AUDIO_DIRECTION *a2,
        enum _AUDIO_STREAM_CATEGORY *a3,
        const unsigned __int16 *a4,
        enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *a5)
{
  enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *v9; // rsi
  __int64 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // edi
  int v16[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v9 = a5;
  if ( a5 )
  {
    v10 = (__int64 *)((char *)this + 704);
    if ( !*((_QWORD *)this + 88) )
    {
      a5 = AudioSrvPolicyManagerTelemetryProvider::Provider();
      *(_QWORD *)v16 = this;
      v12 = *v10;
      *v10 = 0LL;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      v13 = Microsoft::WRL::Details::MakeAndInitialize<AudioStateMonitorManager,AudioStateMonitorManager,CWindowsPolicyManager * &,CProcess *,_tlgProvider_t const *>(
              v10,
              v11,
              v16,
              &a5);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x10D7,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
          (const char *)(unsigned int)v13);
        return v14;
      }
    }
    *(_DWORD *)v9 = AudioStateMonitorManager::GetSoundLevel(*v10, (int *)a2, a3, a4);
  }
  return 2147500035LL;
}
