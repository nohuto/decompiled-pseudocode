/*
 * XREFs of ?SetEndpointLevels@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@_K@Z @ 0x180055C7C
 * Callers:
 *     ?SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18008EEC0 (-SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0.c)
 * Callees:
 *     ??4?$CComQIPtr@UIMMEndpointInternal@@$1?_GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21@@3U__s_GUID@@B@ATL@@QEAAPEAUIMMEndpointInternal@@PEAUIUnknown@@@Z @ 0x180055D28 (--4-$CComQIPtr@UIMMEndpointInternal@@$1-_GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21@@3U__s_GUID@@.c)
 *     ?SetEndpointLevel@@YAJPEAUIMMEndpointInternal@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@_K@Z @ 0x18012C230 (-SetEndpointLevel@@YAJPEAUIMMEndpointInternal@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SetEndpointLevels(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  ATL::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21>::operator=(&v8, a1);
  v5 = v8;
  if ( v8 )
  {
    v6 = SetEndpointLevel(v8, a2, a3);
    if ( v6 >= 0 )
    {
      if ( a2 != 1 || (v6 = SetEndpointLevel(v8, 0LL, a3), v6 >= 0) )
      {
        if ( !a2 )
          v6 = SetEndpointLevel(v8, 1LL, a3);
      }
    }
    v5 = v8;
  }
  else
  {
    v6 = -2147024809;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v6;
}
