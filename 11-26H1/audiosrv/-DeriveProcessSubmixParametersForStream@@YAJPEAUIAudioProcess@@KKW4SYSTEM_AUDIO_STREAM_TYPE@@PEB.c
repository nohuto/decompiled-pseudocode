/*
 * XREFs of ?DeriveProcessSubmixParametersForStream@@YAJPEAUIAudioProcess@@KKW4SYSTEM_AUDIO_STREAM_TYPE@@PEBUStreamGroupParams@@AEAV?$unique_ptr@UProcessSubmixParams@@U?$default_delete@UProcessSubmixParams@@@std@@@std@@@Z @ 0x18006784C
 * Callers:
 *     ?BuildDeviceGraphForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@PEAUIDeviceGraphObjectsStore@@KKW4_AUDCLNT_SHAREMODE@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUMODE_PARAMS@@PEAUStreamGroupParams@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@KPEAUIProcessSubmixProxy@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUSystemAudioStream@@@Z @ 0x1800C55FC (-BuildDeviceGraphForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUIAudioStreamInfo@@PEAU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R?$default_delete@VCAppSubmixClient@@@std@@QEBAXPEAVCAppSubmixClient@@@Z @ 0x18007B64C (--R-$default_delete@VCAppSubmixClient@@@std@@QEBAXPEAVCAppSubmixClient@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DeriveProcessSubmixParametersForStream(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 *a6)
{
  __int64 v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rdi
  char *v14; // rax
  char v15; // cl
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v10 = *a6;
  *a6 = 0LL;
  if ( v10 )
    std::default_delete<CAppSubmixClient>::operator()();
  if ( a4 || *(_BYTE *)(a5 + 48) )
    return 0LL;
  v11 = operator new[](0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( v11 )
  {
    v11[1] = 0LL;
    v11[2] = 0LL;
    *v11 = 0LL;
    v13 = *v11;
    *v11 = a1;
    if ( a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( a3 == 3 || a3 == 8 || (a2 & 0x1000000) != 0 )
    {
      v14 = (char *)(v12 + 1);
      if ( !g_UnrestrictedPerProcessLoopback )
      {
        v15 = 0;
LABEL_15:
        *v14 = v15;
        v12[2] = a5;
        v16 = *a6;
        *a6 = (__int64)v12;
        if ( v16 )
          std::default_delete<CAppSubmixClient>::operator()();
        return 0LL;
      }
    }
    else
    {
      v14 = (char *)(v12 + 1);
    }
    v15 = 1;
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3F8,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
