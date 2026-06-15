/*
 * XREFs of ??$MakeAndInitialize@VAudioStateMonitorManager@@V1@AEAPEAVCWindowsPolicyManager@@PEAVCProcess@@PEBU_tlgProvider_t@@@Details@WRL@Microsoft@@YAJPEAPEAVAudioStateMonitorManager@@AEAPEAVCWindowsPolicyManager@@$$QEAPEAVCProcess@@$$QEAPEBU_tlgProvider_t@@@Z @ 0x180036C0C
 * Callers:
 *     ?RegisterAudioStateMonitor@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x1800055B0 (-RegisterAudioStateMonitor@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEB.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x180024E1C (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 *     ?GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18002DD30 (-GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL.c)
 * Callees:
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180004A60 (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002FD90 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0AudioStateMonitorManager@@QEAA@XZ @ 0x180037658 (--0AudioStateMonitorManager@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AudioStateMonitorManager,AudioStateMonitorManager,CWindowsPolicyManager * &,CProcess *,_tlgProvider_t const *>(
        AudioStateMonitorManager **a1,
        void *a2,
        __int64 *a3,
        _QWORD *a4)
{
  unsigned int v7; // edi
  void *v8; // rax
  AudioStateMonitorManager *v9; // rbx
  __int64 v10; // rcx
  CWindowsPolicyManager *v11; // rdx
  void *v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a2;
  v7 = 0;
  *a1 = 0LL;
  v8 = operator new[](0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v8;
  if ( v8 )
  {
    v9 = AudioStateMonitorManager::AudioStateMonitorManager((AudioStateMonitorManager *)v8);
    v13 = 0LL;
    v10 = *a3;
    v11 = g_PolicyManager;
    *((_QWORD *)v9 + 2) = *a4;
    *((_QWORD *)v9 + 17) = v10;
    *((_QWORD *)v9 + 16) = v11;
    (*(void (__fastcall **)(AudioStateMonitorManager *))(*(_QWORD *)v9 + 8LL))(v9);
    *a1 = v9;
    (*(void (__fastcall **)(AudioStateMonitorManager *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  else
  {
    v7 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v13);
  return v7;
}
