/*
 * XREFs of ?AllowUseofOffloadResources@@YA_NPEAVCEndpointCharacteristics@@PEAUIAudioProcess@@K@Z @ 0x18006E640
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18002C660 (AudioServerIsFormatSupported.c)
 *     AudioServerIsOffloadCapable @ 0x18006E3E0 (AudioServerIsOffloadCapable.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall AllowUseofOffloadResources(
        struct CEndpointCharacteristics *a1,
        struct IAudioProcess *a2,
        unsigned int a3)
{
  __int64 v7; // rcx
  void (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // r9
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(struct IProcessSubmixManager *))(*(_QWORD *)g_ProcessSubmixManager + 64LL))(g_ProcessSubmixManager) )
    return 0;
  v7 = 0LL;
  v9 = 0LL;
  v8 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a1 + 7);
  if ( v8 )
  {
    (**v8)(*((_QWORD *)a1 + 7), &GUID_475d74a7_6824_4b91_89be_33d893b255ed, &v9);
    v7 = v9;
  }
  if ( v7 && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 96LL))(v7) )
  {
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v9);
    return 0;
  }
  if ( !(*(unsigned int (__fastcall **)(struct IAudioProcess *, _QWORD, _QWORD))(*(_QWORD *)a2 + 144LL))(a2, a3, 0LL) )
  {
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    return 0;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v9);
  return 1;
}
