/*
 * XREFs of ?GetEndpointProperties@BluetoothBroadcastProvider@@AEAAJPEBGPEAPEAUIPropertyStore@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800EB9B0
 * Callers:
 *     _lambda_2123d8e56b275a4b963be45688bccc2c_::operator() @ 0x1800EA350 (_lambda_2123d8e56b275a4b963be45688bccc2c_--operator().c)
 *     ?OnMulticastChildSessionDescriptorKeyChanged@BluetoothBroadcastProvider@@AEAAJPEBG@Z @ 0x1800EC7CC (-OnMulticastChildSessionDescriptorKeyChanged@BluetoothBroadcastProvider@@AEAAJPEBG@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BluetoothBroadcastProvider::GetEndpointProperties(
        BluetoothBroadcastProvider *this,
        const unsigned __int16 *a2,
        struct IPropertyStore **a3,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *a4)
{
  HRESULT (__stdcall *GetDevice)(IMMDeviceEnumerator *, LPCWSTR, IMMDevice **); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v13[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  BluetoothBroadcastProvider *v15; // [rsp+50h] [rbp+20h] BYREF

  v15 = this;
  v13[0] = 0LL;
  GetDevice = g_DeviceEnumerator->lpVtbl->GetDevice;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(v13);
  v8 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, const unsigned __int16 *, __int64 *))GetDevice)(
         g_DeviceEnumerator,
         a2,
         v13);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v15 = 0LL;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v15);
    v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, BluetoothBroadcastProvider **))v13[0])(
            v13[0],
            &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
            &v15);
    v9 = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(BluetoothBroadcastProvider *, enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *))(*(_QWORD *)v15 + 24LL))(
              v15,
              a4);
      v9 = v10;
      if ( v10 >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IPropertyStore **))(*(_QWORD *)v13[0] + 32LL))(
                v13[0],
                0LL,
                a3);
        v9 = v10;
        if ( v10 >= 0 )
        {
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
          v9 = 0;
          goto LABEL_11;
        }
        v11 = 539LL;
      }
      else
      {
        v11 = 537LL;
      }
    }
    else
    {
      v11 = 536LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
      (const char *)(unsigned int)v10);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x215,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
      (const char *)(unsigned int)v8);
  }
LABEL_11:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v13);
  return v9;
}
