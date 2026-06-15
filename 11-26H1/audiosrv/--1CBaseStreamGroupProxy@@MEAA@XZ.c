/*
 * XREFs of ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x180046420
 * Callers:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180044FB0 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@.c)
 *     ??_ECBaseStreamGroupProxy@@MEAAPEAXI@Z @ 0x1800FA560 (--_ECBaseStreamGroupProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1CProcessingModeParameters@@QEAA@XZ @ 0x18002B6BC (--1CProcessingModeParameters@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x18004493C (-_Tidy@-$vector@V-$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$.c)
 *     ?_Tidy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18004665C (-_Tidy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXXZ.c)
 *     ?Free@?$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAAXXZ @ 0x180062AE8 (-Free@-$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAAXXZ.c)
 *     ??1?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180062BE8 (--1-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_pt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CBaseStreamGroupProxy::~CBaseStreamGroupProxy(CBaseStreamGroupProxy *this)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)this = &CBaseStreamGroupProxy::`vftable'{for `IStreamGroupProxy'};
  *((_QWORD *)this + 1) = &CBaseStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioGraphCallback>'};
  v2 = *((_QWORD *)this + 14);
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 12);
    if ( v3 )
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v2 + 88LL))(
        v2,
        2LL,
        0xFFFFFFFFLL,
        *(unsigned int *)(v3 + 56));
  }
  v4 = *((_QWORD *)this + 41);
  if ( v4 )
    (*(void (__fastcall **)(__int64, _QWORD, CBaseStreamGroupProxy *))(*(_QWORD *)v4 + 88LL))(
      v4,
      *((unsigned int *)this + 84),
      this);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 41);
  CProcessingModeParameters::~CProcessingModeParameters((CBaseStreamGroupProxy *)((char *)this + 288));
  std::vector<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>::_Tidy((__int64)this + 264);
  std::vector<Microsoft::WRL::WeakRef>::_Tidy((char *)this + 240);
  v5 = (void *)*((_QWORD *)this + 27);
  if ( v5 )
  {
    std::_Deallocate<16>(v5, (struct std::nothrow_t *)((*((_QWORD *)this + 29) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 27) = 0LL;
    *((_QWORD *)this + 28) = 0LL;
    *((_QWORD *)this + 29) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 3);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 14);
  v6 = *((_QWORD *)this + 13);
  if ( v6 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  ATL::CAutoPtr<CResourcePriorityTracker>::Free((char *)this + 96);
  std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((char *)this + 72);
  CoTaskMemFree(*((LPVOID *)this + 7));
  *((_QWORD *)this + 7) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 6));
  *((_QWORD *)this + 6) = 0LL;
}
