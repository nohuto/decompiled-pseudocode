/*
 * XREFs of ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x1800621EC
 * Callers:
 *     ??$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeStrip@@AEAPEBG@Z @ 0x18006202C (--$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVol.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800402CC (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180053ED0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Make@CMuteSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIMuteControlHandler@@@Z @ 0x18007AC38 (-Make@CMuteSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIMuteControlHandler@@@Z.c)
 *     ??0CMeterControlBase@@QEAA@XZ @ 0x18008102C (--0CMeterControlBase@@QEAA@XZ.c)
 *     WPP_SF_S @ 0x180082A54 (WPP_SF_S.c)
 *     ?ShouldUseBluetoothControls@BluetoothControls@@YAJPEAUIMMDevice@@PEA_N@Z @ 0x1800848D4 (-ShouldUseBluetoothControls@BluetoothControls@@YAJPEAUIMMDevice@@PEA_N@Z.c)
 *     ?GetPath@VolumeHelpers@@YAJPEAUIMMDevice@@PEAPEAUIPartsList@@@Z @ 0x18008E120 (-GetPath@VolumeHelpers@@YAJPEAUIMMDevice@@PEAPEAUIPartsList@@@Z.c)
 *     ??$MakeAndInitialize@VBluetoothMute@BluetoothControls@@VIMuteControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVIMuteControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Z @ 0x1800ADE60 (--$MakeAndInitialize@VBluetoothMute@BluetoothControls@@VIMuteControlHandler@@AEAPEAUIMMDevice@@A.c)
 *     ?Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x1800AFF10 (-Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@VIVolumeControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVIVolumeControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Z @ 0x1800DC200 (--$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@VIVolumeControlHandler@@AEAPEAUIMMDevic.c)
 *     ?Make@CMuteHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteControlHandler@@@Z @ 0x180108FBC (-Make@CMuteHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteCon.c)
 *     ?Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolumeControlHandler@@@Z @ 0x180118EDC (-Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolum.c)
 *     ?Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIVolumeControlHandler@@@Z @ 0x1801190A8 (-Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIVolumeControlHandler@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CVolumeStrip::RuntimeClassInitialize(IMMDevice *this, const unsigned __int16 *a2)
{
  IMMDevice *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  HRESULT (__stdcall *GetDevice)(IMMDeviceEnumerator *, LPCWSTR, IMMDevice **); // rbx
  int v10; // eax
  int ShouldUseBluetoothControls; // eax
  __int64 v12; // rdx
  bool *v13; // r8
  struct IPartsList **v14; // r8
  char lpVtbl; // r14
  IMMDevice *v16; // rbx
  int v17; // eax
  int v18; // esi
  int Path; // eax
  struct IPartsList *v20; // r8
  __int64 v21; // rdx
  struct IMMDeviceVtbl *v22; // rsi
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r9
  IMMDevice *v26; // rbx
  bool v27; // zf
  char v28; // al
  struct IMMDeviceVtbl *v29; // rax
  struct IMMDeviceVtbl *v30; // rbx
  char v31; // si
  int v32; // eax
  struct IMMDevice *v33; // rcx
  struct IMMDeviceVtbl *v34; // rcx
  CMeterControlBase *v35; // rax
  CMeterControlBase *v36; // rbx
  int v37; // eax
  struct IMMDevice *v39; // [rsp+20h] [rbp-20h] BYREF
  struct IMMDevice *v40; // [rsp+28h] [rbp-18h] BYREF
  IMMDevice *v41; // [rsp+30h] [rbp-10h]
  char v42; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  IMMDevice v44; // [rsp+80h] [rbp+40h] BYREF
  struct IMMDevice v45; // [rsp+90h] [rbp+50h] BYREF
  __int64 v46; // [rsp+98h] [rbp+58h] BYREF

  v4 = this + 19;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&this[19].lpVtbl,
    0LL);
  v7 = _AllocString<CTCoAllocPolicy>(v6, v5, a2, v4);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v39 = 0LL;
    GetDevice = g_DeviceEnumerator->lpVtbl->GetDevice;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v39);
    v10 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, struct IMMDeviceVtbl *, struct IMMDevice **))GetDevice)(
            g_DeviceEnumerator,
            v4->lpVtbl,
            &v39);
    v8 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x160,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
        (const char *)(unsigned int)v10);
LABEL_77:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
      return v8;
    }
    v46 = 0LL;
    ShouldUseBluetoothControls = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v39->lpVtbl->QueryInterface)(
                                   v39,
                                   &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
                                   &v46);
    v8 = ShouldUseBluetoothControls;
    if ( ShouldUseBluetoothControls < 0 )
    {
      v12 = 355LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
        (const char *)(unsigned int)ShouldUseBluetoothControls);
LABEL_8:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v46);
      goto LABEL_77;
    }
    ShouldUseBluetoothControls = (*(__int64 (__fastcall **)(__int64, IMMDevice *))(*(_QWORD *)v46 + 64LL))(
                                   v46,
                                   this + 20);
    v8 = ShouldUseBluetoothControls;
    if ( ShouldUseBluetoothControls < 0 )
    {
      v12 = 357LL;
      goto LABEL_7;
    }
    LOBYTE(v44.lpVtbl) = 0;
    ShouldUseBluetoothControls = BluetoothControls::ShouldUseBluetoothControls((BluetoothControls *)v39, &v44, v13);
    v8 = ShouldUseBluetoothControls;
    if ( ShouldUseBluetoothControls < 0 )
    {
      v12 = 360LL;
      goto LABEL_7;
    }
    lpVtbl = (char)v44.lpVtbl;
    v16 = this + 21;
    if ( LOBYTE(v44.lpVtbl) )
    {
      v44.lpVtbl = (struct IMMDeviceVtbl *)&this[1];
      v40 = v39;
      v17 = Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::BluetoothVolume,IVolumeControlHandler,IMMDevice * &,IControlChangeNotify * &>(
              &this[21],
              &v40,
              &v44);
      v18 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x16B,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
          (const char *)(unsigned int)v17);
LABEL_16:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v46);
        v8 = v18;
        goto LABEL_77;
      }
    }
    v45.lpVtbl = 0LL;
    Path = VolumeHelpers::GetPath((VolumeHelpers *)v39, &v45, v14);
    v18 = Path;
    if ( Path < 0 )
    {
      v8 = -2004287484;
      if ( Path == -2004287484 )
      {
LABEL_19:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
        goto LABEL_8;
      }
      v21 = 368LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
        (const char *)(unsigned int)v18);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
      goto LABEL_16;
    }
    if ( !v16->lpVtbl && v45.lpVtbl )
      CVolumeHardware::Make(
        v39,
        (struct IControlChangeNotify *)((unsigned __int64)&this[1] & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
        v20,
        (struct IVolumeControlHandler **)&this[21]);
    if ( v16->lpVtbl )
    {
      v22 = (struct IMMDeviceVtbl *)&this[1];
    }
    else
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_64ceff971abf396a2d7f0130c978516a_Traceguids, a2);
      }
      v22 = (struct IMMDeviceVtbl *)&this[1];
      v23 = CVolumeSoftware::Make(
              v39,
              (struct IControlChangeNotify *)((unsigned __int64)&this[1] & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
              (struct IVolumeControlHandler **)&this[21]);
      v8 = v23;
      if ( v23 < 0 )
      {
        v24 = 382LL;
        goto LABEL_32;
      }
    }
    v26 = this + 22;
    if ( lpVtbl )
    {
      v44.lpVtbl = v22;
      v40 = v39;
      v18 = Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::BluetoothMute,IMuteControlHandler,IMMDevice * &,IControlChangeNotify * &>(
              &this[22],
              &v40,
              &v44);
      if ( v18 < 0 )
      {
        v21 = 394LL;
        goto LABEL_21;
      }
      v22 = (struct IMMDeviceVtbl *)&this[1];
    }
    if ( !v26->lpVtbl )
    {
      if ( v45.lpVtbl )
      {
        CMuteHardware::Make(
          v39,
          (struct IControlChangeNotify *)((unsigned __int64)v22 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
          (struct IPartsList *)v45.lpVtbl,
          (struct IMuteControlHandler **)&this[22]);
        v22 = (struct IMMDeviceVtbl *)&this[1];
      }
      if ( !v26->lpVtbl )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_64ceff971abf396a2d7f0130c978516a_Traceguids, a2);
        }
        v23 = CMuteSoftware::Make(
                v39,
                (struct IControlChangeNotify *)((unsigned __int64)v22 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
                (struct IMuteControlHandler **)&this[22]);
        v8 = v23;
        if ( v23 < 0 )
        {
          v24 = 407LL;
          goto LABEL_32;
        }
        v26 = this + 22;
      }
    }
    if ( (*((unsigned __int8 (__fastcall **)(struct IMMDeviceVtbl *))this[21].lpVtbl->QueryInterface + 12))(this[21].lpVtbl)
      || (v27 = (*((unsigned __int8 (__fastcall **)(struct IMMDeviceVtbl *))v26->lpVtbl->QueryInterface + 7))(v26->lpVtbl) == 0,
          v28 = 0,
          !v27) )
    {
      v28 = 1;
    }
    LOBYTE(this[24].lpVtbl) = v28;
    if ( v45.lpVtbl )
    {
      v29 = (struct IMMDeviceVtbl *)operator new[](0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
      v30 = v29;
      v44.lpVtbl = v29;
      if ( !v29 )
      {
        v40 = 0LL;
        v8 = -2147024882;
        v25 = 2147942414LL;
        v24 = 423LL;
        goto LABEL_33;
      }
      CMeterControlBase::CMeterControlBase((CMeterControlBase *)v29);
      v30->QueryInterface = (HRESULT (__stdcall *)(IMMDevice *, const IID *const, void **))&CMeterHardware::`vftable';
      v30->OpenPropertyStore = 0LL;
      v30->GetId = 0LL;
      v40 = (struct IMMDevice *)v30;
      v41 = (IMMDevice *)&v40;
      v42 = 1;
      v31 = 1;
      v32 = CMeterHardware::Initialize((CMeterHardware *)v30, v39, (struct IPartsList *)v45.lpVtbl);
      v33 = v40;
      if ( v32 >= 0 )
      {
        this[23].lpVtbl = (struct IMMDeviceVtbl *)v40;
        v31 = 0;
      }
      if ( v31 )
        ((void (__fastcall *)(struct IMMDevice *))v33->lpVtbl->Release)(v33);
    }
    v34 = this[23].lpVtbl;
    if ( !v34 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_64ceff971abf396a2d7f0130c978516a_Traceguids, a2);
      }
      v35 = (CMeterControlBase *)operator new[](0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
      v36 = v35;
      v41 = (IMMDevice *)v35;
      if ( !v35 )
      {
        v44.lpVtbl = 0LL;
        v8 = -2147024882;
        v25 = 2147942414LL;
        v24 = 438LL;
        goto LABEL_33;
      }
      CMeterControlBase::CMeterControlBase(v35);
      *(_QWORD *)v36 = &CMeterSoftware::`vftable';
      *((_QWORD *)v36 + 4) = 0LL;
      InitializeCriticalSectionEx((LPCRITICAL_SECTION)v36 + 1, 0, 0);
      v44.lpVtbl = (struct IMMDeviceVtbl *)v36;
      v41 = &v44;
      v42 = 1;
      v37 = (*(__int64 (__fastcall **)(CMeterControlBase *, struct IMMDevice *))(*(_QWORD *)v36 + 48LL))(v36, v39);
      v8 = v37;
      if ( v37 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1B9,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
          (const char *)(unsigned int)v37);
        (*((void (__fastcall **)(struct IMMDeviceVtbl *))v44.lpVtbl->QueryInterface + 2))(v44.lpVtbl);
        goto LABEL_19;
      }
      v34 = v44.lpVtbl;
      this[23].lpVtbl = v44.lpVtbl;
    }
    v23 = (*((__int64 (__fastcall **)(struct IMMDeviceVtbl *))v34->QueryInterface + 12))(v34);
    v8 = v23;
    if ( v23 >= 0 )
    {
      v23 = (*((__int64 (__fastcall **)(struct IMMDeviceVtbl *))this[22].lpVtbl->QueryInterface + 9))(this[22].lpVtbl);
      v8 = v23;
      if ( v23 >= 0 )
      {
        v23 = (*((__int64 (__fastcall **)(struct IMMDeviceVtbl *))this[21].lpVtbl->QueryInterface + 27))(this[21].lpVtbl);
        v8 = v23;
        if ( v23 >= 0 )
        {
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v46);
          v8 = 0;
          goto LABEL_77;
        }
        v24 = 459LL;
      }
      else
      {
        v24 = 458LL;
      }
    }
    else
    {
      v24 = 457LL;
    }
LABEL_32:
    v25 = (unsigned int)v23;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)v25);
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x15D,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
