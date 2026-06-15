/*
 * XREFs of ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x18001C818
 * Callers:
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x18001C520 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18008DA90 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800259E8 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioStream::CloseAudioHandle(CAudioStream *this)
{
  int v2; // eax
  void *v3; // rdx
  unsigned int v4; // edi
  wil::details *v5; // rcx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 31) == 2 )
  {
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((char *)this + 168);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((char *)this + 176);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((char *)this + 184);
  }
  v2 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, unsigned __int64))(*(_QWORD *)g_AudioResourceManager
                                                                                   + 32LL))(
         g_AudioResourceManager,
         ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
  v4 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x123,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v2,
      v7);
  v5 = (wil::details *)*((_QWORD *)this + 47);
  if ( v5 )
    wil::details::SetEvent(v5, v3);
  return v4;
}
