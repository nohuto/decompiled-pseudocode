/*
 * XREFs of ??1CEndpointStore@@UEAA@XZ @ 0x180104920
 * Callers:
 *     ??_ECEndpointStore@@UEAAPEAXI@Z @ 0x180104A80 (--_ECEndpointStore@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??R?$default_delete@U_RecurringTask@@@std@@QEBAXPEAU_RecurringTask@@@Z @ 0x18001C238 (--R-$default_delete@U_RecurringTask@@@std@@QEBAXPEAU_RecurringTask@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18005E4A0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCAudioSessionManager@@U?$default_delete@VCAudioSessionManager@@@std@@@std@@QEAA@XZ @ 0x1800B0E68 (--1-$unique_ptr@VCAudioSessionManager@@U-$default_delete@VCAudioSessionManager@@@std@@@std@@QEAA.c)
 */

void __fastcall CEndpointStore::~CEndpointStore(CEndpointStore *this)
{
  _QWORD *v1; // rsi
  _QWORD *v3; // rbx
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx

  v1 = (_QWORD *)*((_QWORD *)this + 31);
  *((_QWORD *)this + 31) = 0LL;
  if ( v1 )
  {
    do
    {
      v3 = (_QWORD *)*v1;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v1 + 1);
      std::_Deallocate<16>(v1, (struct std::nothrow_t *)0x10);
      v1 = v3;
    }
    while ( v3 );
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 208));
  v4 = (_QWORD *)*((_QWORD *)this + 25);
  *((_QWORD *)this + 25) = 0LL;
  if ( v4 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v4 + 1);
      std::_Deallocate<16>(v4, (struct std::nothrow_t *)0x10);
      v4 = v5;
    }
    while ( v5 );
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 4);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 19);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 13);
  std::unique_ptr<CAudioSessionManager>::~unique_ptr<CAudioSessionManager>((_QWORD *)this + 12);
  v7 = *((_QWORD *)this + 11);
  if ( v7 )
    std::default_delete<_RecurringTask>::operator()(v6, v7);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  std::wstring::~wstring((void **)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
