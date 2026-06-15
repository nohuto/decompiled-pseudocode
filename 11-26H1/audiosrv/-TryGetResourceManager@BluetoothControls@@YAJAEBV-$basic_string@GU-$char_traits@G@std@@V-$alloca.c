/*
 * XREFs of ?TryGetResourceManager@BluetoothControls@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800DE6D0
 * Callers:
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800DDA0C (-RuntimeClassInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControl.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800DDE30 (-RuntimeClassInitialize@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothCon.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18006ECBC (-GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     ?TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077420 (-TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall BluetoothControls::TryGetResourceManager(unsigned __int16 *a1, __int64 *a2)
{
  int EndpointCharacteristics; // eax
  unsigned int v5; // ebx
  int CustomResourceManagerService; // eax
  __int64 v7; // rdx
  __int64 (__fastcall ***v8)(void *, GUID *, __int64 *); // rcx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  void *v12; // [rsp+30h] [rbp+10h] BYREF
  struct CEndpointCharacteristics *v13; // [rsp+40h] [rbp+20h] BYREF

  v13 = 0LL;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v13);
  if ( *((_QWORD *)a1 + 3) > 7uLL )
    a1 = *(unsigned __int16 **)a1;
  EndpointCharacteristics = GetEndpointCharacteristics(a1, 0, &v13);
  v5 = EndpointCharacteristics;
  if ( EndpointCharacteristics >= 0 )
  {
    v12 = 0LL;
    CustomResourceManagerService = CEndpointCharacteristics::TryGetCustomResourceManagerService(
                                     v13,
                                     &GUID_475d74a7_6824_4b91_89be_33d893b255ed,
                                     &v12);
    v5 = CustomResourceManagerService;
    if ( CustomResourceManagerService < 0 )
    {
      v7 = 31LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)CustomResourceManagerService);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v12);
      goto LABEL_17;
    }
    v8 = (__int64 (__fastcall ***)(void *, GUID *, __int64 *))v12;
    if ( !v12 )
    {
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v12);
      v5 = -2147023728;
      goto LABEL_17;
    }
    v9 = *a2;
    *a2 = 0LL;
    if ( v9 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      v8 = (__int64 (__fastcall ***)(void *, GUID *, __int64 *))v12;
    }
    if ( v8 )
    {
      CustomResourceManagerService = (**v8)(v8, &GUID_934ccd31_f938_4cbf_9a7a_f13a1e850098, a2);
      v5 = CustomResourceManagerService;
      if ( CustomResourceManagerService < 0 )
      {
        v7 = 35LL;
        goto LABEL_7;
      }
    }
    else
    {
      *a2 = 0LL;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v12);
    v5 = 0;
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
    (const char *)(unsigned int)EndpointCharacteristics);
LABEL_17:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v13);
  return v5;
}
