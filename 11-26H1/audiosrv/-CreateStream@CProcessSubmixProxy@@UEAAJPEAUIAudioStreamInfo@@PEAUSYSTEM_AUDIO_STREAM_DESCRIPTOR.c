/*
 * XREFs of ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUSystemAudioStream@@@Z @ 0x1800FC4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetAudioHandle@CAudioStream@@QEAAJPEAUSystemAudioStream@@KPEAUIStreamInstanceProxy@@@Z @ 0x1800AA94C (-SetAudioHandle@CAudioStream@@QEAAJPEAUSystemAudioStream@@KPEAUIStreamInstanceProxy@@@Z.c)
 *     ??$MakeAndInitialize@VCStreamInstanceProxy@@UIStreamInstanceProxy@@AEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAPEAUIAudioGraphCallback@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@_JAEAPEAUSystemAudioStream@@@Details@WRL@Microsoft@@YAJPEAPEAUIStreamInstanceProxy@@AEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAPEAUIAudioGraphCallback@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$$QEA_JAEAPEAUSystemAudioStream@@@Z @ 0x1800F8BA0 (--$MakeAndInitialize@VCStreamInstanceProxy@@UIStreamInstanceProxy@@AEAPEAUSYSTEM_AUDIO_STREAM_DE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcessSubmixProxy::CreateStream(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        struct SystemAudioStream *a7)
{
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  int v14[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IStreamInstanceProxy *v16; // [rsp+60h] [rbp+20h] BYREF
  __int64 v17; // [rsp+70h] [rbp+30h] BYREF
  __int64 v18; // [rsp+78h] [rbp+38h] BYREF

  v18 = a4;
  v17 = a3;
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 304LL))(*(_QWORD *)(a1 + 192));
  v10 = v9;
  if ( v9 >= 0 )
  {
    v16 = 0LL;
    *(_QWORD *)v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2);
    if ( v16 )
      (*(void (__fastcall **)(struct IStreamInstanceProxy *))(*(_QWORD *)v16 + 16LL))(v16);
    v11 = Microsoft::WRL::Details::MakeAndInitialize<CStreamInstanceProxy,IStreamInstanceProxy,SYSTEM_AUDIO_STREAM_DESCRIPTOR * &,IAudioGraphCallback * &,std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>> const &,__int64,SystemAudioStream * &>(
            &v16,
            &v17,
            &v18,
            a6,
            (__int64 *)v14,
            &a7);
    v10 = v11;
    if ( v11 >= 0 )
    {
      CAudioStream::SetAudioHandle((CAudioStream *)((a2 - 8) & -(__int64)(a2 != 0)), a7, a5, v16);
      v11 = (*(__int64 (__fastcall **)(struct IStreamInstanceProxy *, __int64, __int64, __int64))(*(_QWORD *)v16 + 64LL))(
              v16,
              a2,
              a1 & -(__int64)(a1 != 8),
              1LL);
      v10 = v11;
      if ( v11 >= 0 )
      {
        v10 = 0;
        goto LABEL_11;
      }
      v12 = 3578LL;
    }
    else
    {
      v12 = 3573LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v11);
LABEL_11:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
    return v10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xDF2,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
