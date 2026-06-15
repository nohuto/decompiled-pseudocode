/*
 * XREFs of ??1SystemAudioStream@@QEAA@XZ @ 0x180044F00
 * Callers:
 *     ??1CSharedStreamGroupProxy@@MEAA@XZ @ 0x180044D40 (--1CSharedStreamGroupProxy@@MEAA@XZ.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18008DA90 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ?ClearAudioHandle@CAudioStream@@QEAAJXZ @ 0x1800AA8B4 (-ClearAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     _lambda_7c0a3712486623e6fb291edc7c031103_::operator() @ 0x1800F9DBC (_lambda_7c0a3712486623e6fb291edc7c031103_--operator().c)
 *     ?ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUSystemAudioStream@@@Z @ 0x1800FACF0 (-ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS.c)
 *     __lambda_7c0a3712486623e6fb291edc7c031103_::operator()_::_1_::dtor$10 @ 0x180169E0E (__lambda_7c0a3712486623e6fb291edc7c031103_--operator()_--_1_--dtor$10.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SystemAudioStream::~SystemAudioStream(SystemAudioStream *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // rcx

  v2 = *((_QWORD *)this + 121);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 82);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 44);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 5);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = (void *)*((_QWORD *)this + 3);
  if ( v7 )
  {
    if ( v7 != (void *)-1LL )
      CloseHandle(v7);
  }
}
