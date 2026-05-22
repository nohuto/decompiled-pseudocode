/*
 * XREFs of ?Unregister@SpectrumListener@@QEAAXXZ @ 0x1800D06AC
 * Callers:
 *     ??1MPCRawInputProvider@@MEAA@XZ @ 0x1800CEC50 (--1MPCRawInputProvider@@MEAA@XZ.c)
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x1800CF5C0 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 *     ??1SpectrumListener@@UEAA@XZ @ 0x1800D0220 (--1SpectrumListener@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800546FC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x18006EE74 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     ?RemoveDevice@MPCRawInputProvider@@QEAAJK@Z @ 0x1800CF8E4 (-RemoveDevice@MPCRawInputProvider@@QEAAJK@Z.c)
 *     ??R?$default_delete@VSpeechRuntimeListener@@@std@@QEBAXPEAVSpeechRuntimeListener@@@Z @ 0x1800D0260 (--R-$default_delete@VSpeechRuntimeListener@@@std@@QEBAXPEAVSpeechRuntimeListener@@@Z.c)
 *     ?RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAX_K@Z @ 0x1800D1684 (-RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall SpectrumListener::Unregister(SpectrumListener *this)
{
  __int64 v2; // rcx
  SpeechRuntimeListener *v3; // rdx
  unsigned int v4; // edx
  MPCHeadUpdateListener *Instance; // rax
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 72) )
  {
    v2 = *((_QWORD *)this + 3);
    if ( v2 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 56LL))(v2, *((_QWORD *)this + 6));
    v3 = (SpeechRuntimeListener *)*((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = 0LL;
    if ( v3 )
      std::default_delete<SpeechRuntimeListener>::operator()(v2, v3);
    v4 = *((_DWORD *)this + 19);
    if ( v4 )
      MPCRawInputProvider::RemoveDevice(*((MPCRawInputProvider **)this + 2), v4);
    MPCRawInputProvider::RemoveDevice(*((MPCRawInputProvider **)this + 2), *((_DWORD *)this + 20));
    MPCRawInputProvider::RemoveDevice(*((MPCRawInputProvider **)this + 2), *((_DWORD *)this + 21));
    AcquireSRWLockExclusive((PSRWLOCK)this + 8);
    v6 = (RTL_SRWLOCK *)((char *)this + 64);
    *((_QWORD *)this + 2) = 0LL;
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v6);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
    if ( *((_QWORD *)this + 5) )
    {
      Instance = MPCHeadUpdateListener::GetInstance();
      MPCHeadUpdateListener::RemoveHeadEventOccurred(Instance, *((_QWORD *)this + 5));
      *((_QWORD *)this + 5) = 0LL;
    }
    *((_BYTE *)this + 72) = 0;
  }
}
