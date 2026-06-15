/*
 * XREFs of ?RuntimeClassInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800DDA0C
 * Callers:
 *     ??$MakeAndInitialize@VBluetoothMute@BluetoothControls@@VIMuteControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVIMuteControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Z @ 0x1800ADE60 (--$MakeAndInitialize@VBluetoothMute@BluetoothControls@@VIMuteControlHandler@@AEAPEAUIMMDevice@@A.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x18005A368 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ??4?$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVIMuteControlHandler@@@Z @ 0x1800AE6D4 (--4-$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVIMuteContro.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800DBBD0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VBluetoothMute@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVBluetoothMute@BluetoothControls@@AEAPEAG$$QEAPEAV34@AEAPEAUIControlChangeNotify@@@Z @ 0x1800DC000 (--$MakeAndInitialize@VBluetoothMute@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChangeNo.c)
 *     ?CommonInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAXPEAUIMMDevice@@@Z @ 0x1800DC87C (-CommonInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@Bl.c)
 *     ?MakeRealControl@BluetoothMute@BluetoothControls@@SAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800DD24C (-MakeRealControl@BluetoothMute@BluetoothControls@@SAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEAU.c)
 *     ?TryGetResourceManager@BluetoothControls@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800DE6D0 (-TryGetResourceManager@BluetoothControls@@YAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification@@@details@wil@@QEAA_NXZ @ 0x1800DEFD0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotif.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::RuntimeClassInitialize(
        struct IControlChangeNotify *a1,
        struct IMMDevice *a2,
        __int64 a3)
{
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v7; // eax
  int v8; // eax
  struct IPartsList **v9; // r8
  char IsEnabled; // al
  struct IControlChangeNotify *v11; // rdx
  __int64 (__fastcall *v12)(__int64, void ***, struct IControlChangeNotifyVtbl **); // r9
  __int64 v13; // r10
  int v14; // eax
  __int64 (__fastcall *v15)(__int64, void ***, struct IControlChangeNotifyVtbl **); // r9
  __int64 v16; // r10
  int v17; // eax
  int v18; // eax
  struct IMuteControlHandler *RealControl; // rax
  const char *v20; // r9
  __int64 result; // rax
  int v22; // [rsp+20h] [rbp-98h]
  __int128 v23; // [rsp+28h] [rbp-90h] BYREF
  struct IControlChangeNotify *v24; // [rsp+38h] [rbp-80h]
  char v25; // [rsp+40h] [rbp-78h]
  PROPVARIANT pvar[2]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v27; // [rsp+58h] [rbp-60h]
  void **v28; // [rsp+60h] [rbp-58h] BYREF
  struct IControlChangeNotify *v29; // [rsp+68h] [rbp-50h]
  __int128 v30; // [rsp+70h] [rbp-48h]
  void ***v31; // [rsp+98h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  struct IControlChangeNotifyVtbl *v33; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v34; // [rsp+D0h] [rbp+18h]
  __int64 v35; // [rsp+D8h] [rbp+20h] BYREF

  v34 = a3;
  LOBYTE(a1[14].lpVtbl) = 1;
  try
  {
    BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::CommonInitialize(
      (__int64)a1,
      (__int64 *)a2);
    *(_OWORD *)pvar = 0LL;
    v27 = 0LL;
    lpVtbl = a2->lpVtbl;
    v35 = 0LL;
    v7 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))lpVtbl->OpenPropertyStore)(a2, 0LL, &v35);
    if ( v7 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        163LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)v7,
        v22);
    v8 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v35 + 40LL))(
           v35,
           &PKEY_Endpoint_LinkedBluetoothEndpoint,
           pvar);
    if ( v8 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        164LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)v8,
        v22);
    if ( (int)BluetoothControls::TryGetResourceManager((unsigned __int16 *)&a1[6]) >= 0 )
    {
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification>::GetImpl'::`2'::impl);
      v11 = a1 + 19;
      LODWORD(v33) = 0;
      v22 = (int)a1;
      if ( IsEnabled )
      {
        std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v23, v11);
        v28 = &std::_Func_impl_no_alloc<_lambda_0e0ad7cefe12d27d8cbf1129b6f60fff_,void,>::`vftable';
        v29 = a1;
        v30 = v23;
        v23 = 0LL;
        v31 = &v28;
        v14 = v12(v13, &v28, &v33);
        if ( v14 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            177LL,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
            (const char *)(unsigned int)v14,
            (int)a1);
      }
      else
      {
        std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v23, v11);
        v28 = &std::_Func_impl_no_alloc<_lambda_c14496d348cd0a3ba83c159c343acbdd_,void,bool>::`vftable';
        v29 = a1;
        v30 = v23;
        v23 = 0LL;
        v31 = &v28;
        v17 = v15(v16, &v28, &v33);
        if ( v17 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            189LL,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
            (const char *)(unsigned int)v17,
            (int)a1);
      }
      BYTE4(v33) = 1;
      a1[18].lpVtbl = v33;
    }
    v24 = a1;
    v25 = 1;
    if ( LOWORD(pvar[0]) == 31 )
    {
      v33 = (struct IControlChangeNotifyVtbl *)a1;
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&a1[13]);
      v18 = Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::BluetoothMute,BluetoothControls::BluetoothMute,unsigned short * &,BluetoothControls::BluetoothMute *,IControlChangeNotify * &>((struct IControlChangeNotify **)&a1[13]);
      if ( v18 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          212LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
          (const char *)(unsigned int)v18,
          v22);
    }
    LOBYTE(v23) = 1;
    RealControl = BluetoothControls::BluetoothMute::MakeRealControl(a2, a1, v9);
    wil::com_ptr_t<IMuteControlHandler,wil::err_exception_policy>::operator=((__int64 *)&a1[15], (__int64)RealControl);
    wil::com_ptr_t<IMuteControlHandler,wil::err_exception_policy>::operator=((__int64 *)&a1[16], a3);
    PropVariantClear(pvar);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v35);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v33) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xE8,
                     (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
                     v20);
    return (unsigned int)v33;
  }
  return result;
}
