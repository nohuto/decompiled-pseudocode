/*
 * XREFs of ?SetAudioHandle@CAudioStream@@QEAAJPEAUSystemAudioStream@@KPEAUIStreamInstanceProxy@@@Z @ 0x1800AA94C
 * Callers:
 *     ?ClearAudioHandle@CAudioStream@@QEAAJXZ @ 0x1800AA8B4 (-ClearAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?CreateStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUSystemAudioStream@@@Z @ 0x1800FC1F0 (-CreateStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DES.c)
 *     ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUSystemAudioStream@@@Z @ 0x1800FC4A0 (-CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR.c)
 *     ?CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUSystemAudioStream@@@Z @ 0x1800FC5F0 (-CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRI.c)
 * Callees:
 *     ?attach@?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUISubmixProxy@@@Z @ 0x180078910 (-attach@-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUISubmixProxy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::SetAudioHandle(
        CAudioStream *this,
        struct SystemAudioStream *a2,
        int a3,
        struct IStreamInstanceProxy *a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rbx

  *((_QWORD *)this + 6) = *((_QWORD *)a2 + 4);
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 640);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 16);
  v9 = *((_QWORD *)a2 + 5);
  *((_QWORD *)a2 + 5) = 0LL;
  wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::attach((__int64 *)this + 7, v9);
  *((_DWORD *)this + 59) = a3;
  v10 = *((_QWORD *)this + 70);
  *((_QWORD *)this + 70) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct IStreamInstanceProxy *))(*(_QWORD *)a4 + 8LL))(a4);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v8 )
    LeaveCriticalSection(v8);
  return 0LL;
}
