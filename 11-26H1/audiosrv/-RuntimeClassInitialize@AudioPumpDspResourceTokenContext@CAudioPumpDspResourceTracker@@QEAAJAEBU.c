/*
 * XREFs of ?RuntimeClassInitialize@AudioPumpDspResourceTokenContext@CAudioPumpDspResourceTracker@@QEAAJAEBUAudioPumpDspTokenAcquisitionContext@2@PEAV2@@Z @ 0x1800C21D0
 * Callers:
 *     ??$MakeAndInitialize@VAudioPumpDspResourceTokenContext@CAudioPumpDspResourceTracker@@V12@AEBUAudioPumpDspTokenAcquisitionContext@2@AEAPEAV2@@Details@WRL@Microsoft@@YAJPEAPEAVAudioPumpDspResourceTokenContext@CAudioPumpDspResourceTracker@@AEBUAudioPumpDspTokenAcquisitionContext@4@AEAPEAV4@@Z @ 0x1800C0DD8 (--$MakeAndInitialize@VAudioPumpDspResourceTokenContext@CAudioPumpDspResourceTracker@@V12@AEBUAud.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18001DE40 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E2F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18002A460 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180053E8C (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIAudioPumpDspResourceTrackerToken@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800AE644 (--1-$com_ptr_t@UIAudioPumpDspResourceTrackerToken@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     wcscmp_0 @ 0x1801626D4 (wcscmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext::RuntimeClassInitialize(
        CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext *this,
        const struct CAudioPumpDspResourceTracker::AudioPumpDspTokenAcquisitionContext *a2,
        struct CAudioPumpDspResourceTracker *a3)
{
  const char *v6; // r9
  HRESULT v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  void *v12; // rbx
  __int64 (__fastcall *v13)(void *, _QWORD, _QWORD, char *); // rsi
  volatile int *v15; // rdx
  volatile signed __int32 *v16; // r8
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  void *v18; // [rsp+68h] [rbp+38h] BYREF
  LPVOID ppv; // [rsp+78h] [rbp+48h] BYREF

  if ( wcscmp_0(L"AudioDg-CPU", *(const wchar_t **)a2) )
  {
    ppv = 0LL;
    v7 = CoCreateInstance(
           &GUID_0587a0e7_d86c_44cf_bc18_128d3a497bd9,
           0LL,
           0x17u,
           &GUID_c1779bb8_5eba_40f5_b0db_0041872ac39e,
           &ppv);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3F,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiopumpdspmanager.cpp",
        (const char *)(unsigned int)v7);
LABEL_9:
      wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>((__int64 *)&ppv);
      return v8;
    }
    v18 = 0LL;
    v9 = *(_QWORD *)ppv;
    v18 = 0LL;
    v10 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, void **))(v9 + 24))(ppv, *(_QWORD *)a2, &v18);
    v8 = v10;
    if ( v10 < 0 )
    {
      v11 = 66LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiopumpdspmanager.cpp",
        (const char *)(unsigned int)v10);
      wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>((__int64 *)&v18);
      goto LABEL_9;
    }
    v12 = v18;
    v13 = *(__int64 (__fastcall **)(void *, _QWORD, _QWORD, char *))(*(_QWORD *)v18 + 32LL);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)this + 4);
    v10 = v13(v12, *((_QWORD *)a2 + 1), 0LL, (char *)this + 32);
    v8 = v10;
    if ( v10 < 0 )
    {
      v11 = 68LL;
      goto LABEL_8;
    }
    wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>((__int64 *)&v18);
    wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>((__int64 *)&ppv);
  }
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &v18,
    *((char **)a2 + 1),
    0xFFFFFFFFFFFFFFFFuLL,
    v6);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
    (_QWORD *)this + 2,
    &v18);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v18);
  if ( !*((_QWORD *)this + 2) )
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiopumpdspmanager.cpp",
      (const char *)0x8007000ELL);
    return v8;
  }
  v16 = (volatile signed __int32 *)*((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = a3;
  if ( a3 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference(
      (struct CAudioPumpDspResourceTracker *)((char *)a3 + 12),
      v15);
  if ( v16 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v16);
  return 0LL;
}
