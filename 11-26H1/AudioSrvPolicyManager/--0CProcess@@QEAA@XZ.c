/*
 * XREFs of ??0CProcess@@QEAA@XZ @ 0x180006CBC
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180009150 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAudioProcess@@UIAudioProcessInternal@@@WRL@Microsoft@@QEAA@XZ @ 0x180006F3C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAudioProcess@@UIAudioProcessInternal.c)
 *     ?UpdateRehashThresholds@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@AEAAXXZ @ 0x180006F8C (-UpdateRehashThresholds@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_re.c)
 *     ??0?$unordered_map@PEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@U?$hash@PEAX@std@@U?$equal_to@PEAX@4@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@@std@@QEAA@XZ @ 0x18000700C (--0-$unordered_map@PEAXV-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@U-$hash@P.c)
 */

// Hidden C++ exception states: #wind=3
CProcess *__fastcall CProcess::CProcess(CProcess *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioProcess,IAudioProcessInternal>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioProcess,IAudioProcessInternal>();
  *(_QWORD *)this = &CProcess::`vftable'{for `IAudioProcess'};
  *((_QWORD *)this + 1) = &CProcess::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessInternal>'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 24), 0, 0);
  std::unordered_map<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>::unordered_map<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>((char *)this + 64);
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 0;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_DWORD *)this + 74) = 0;
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 78) = 4;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 8, 0, 0);
  *((_QWORD *)this + 45) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 368), 0, 0);
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_DWORD *)this + 120) = 0;
  *(_QWORD *)((char *)this + 484) = 4LL;
  *((_DWORD *)this + 123) = 1;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *(GUID *)((char *)this + 520) = GUID_00000000_0000_0000_0000_000000000000;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 536), 0, 0);
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 592), 0, 0);
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 80) = 0LL;
  *((_DWORD *)this + 162) = 17;
  *((_QWORD *)this + 83) = 0xFFFFFFFFLL;
  *((_QWORD *)this + 84) = 0LL;
  *((_DWORD *)this + 170) = 0;
  *((_DWORD *)this + 171) = 10;
  *((_QWORD *)this + 86) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *((_DWORD *)this + 163) = 1061158912;
  *((_DWORD *)this + 164) = 1048576000;
  *((_DWORD *)this + 165) = 1074790400;
  ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::UpdateRehashThresholds();
  *((_QWORD *)this + 88) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 712), 0, 0);
  *((_DWORD *)this + 188) = 0;
  *((_QWORD *)this + 95) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  *((_QWORD *)this + 97) = 0LL;
  *((_WORD *)this + 392) = 0;
  *((_BYTE *)this + 786) = 0;
  return this;
}
