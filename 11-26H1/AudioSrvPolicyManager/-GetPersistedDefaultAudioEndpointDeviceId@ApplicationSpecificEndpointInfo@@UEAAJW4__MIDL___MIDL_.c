/*
 * XREFs of ?GetPersistedDefaultAudioEndpointDeviceId@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x180022C80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006744 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003AD8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationSpecificEndpointInfo::GetPersistedDefaultAudioEndpointDeviceId(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v5; // eax
  unsigned int v6; // edi
  void *v7; // rcx
  LPVOID v8; // rax
  int v10; // eax
  int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-20h] BYREF
  LPVOID v14[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v16; // [rsp+60h] [rbp+8h] BYREF

  pv = 0LL;
  v14[0] = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, LPVOID *))(*(_QWORD *)a1 + 32LL))(a1, a2, a3, &pv);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEF,
      (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)v5);
    if ( v14[0] )
      CoTaskMemFree(v14[0]);
    if ( pv )
      CoTaskMemFree(pv);
    return v6;
  }
  else
  {
    v7 = pv;
    if ( pv )
    {
      v12 = 0LL;
      if ( (int)mmdDevGetMMDeviceFromInterfaceId(pv, &v12) >= 0 )
      {
        v16 = 0;
        if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 48LL))(v12, &v16) >= 0 && v16 == 1 )
        {
          v10 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v12 + 40LL))(v12, v14);
          if ( v10 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xFC,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
              (const char *)(unsigned int)v10,
              v11);
        }
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v12);
      v7 = pv;
    }
    v8 = v14[0];
    v14[0] = 0LL;
    *a4 = v8;
    if ( v7 )
      CoTaskMemFree(v7);
    return 0LL;
  }
}
