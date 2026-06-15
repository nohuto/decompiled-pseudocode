/*
 * XREFs of ?GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z @ 0x180049894
 * Callers:
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x18002B8C8 (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 *     ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x180049E90 (-SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006744 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800079B4 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ApplicationSpecificEndpointInfo::GetPersistentId(struct IMMDevice *a1, unsigned __int16 **a2)
{
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v10[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  lpVtbl = a1->lpVtbl;
  v13 = 0LL;
  v4 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))lpVtbl->OpenPropertyStore)(a1, 0LL, &v13);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *(_OWORD *)v10 = 0LL;
    v11 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, void *, int *))(*(_QWORD *)v13 + 40LL))(
           v13,
           &PKEY_AudioEndpoint_PersistentId,
           v10);
    v5 = v4;
    if ( v4 >= 0 )
    {
      if ( LOWORD(v10[0]) != 31
        || (v4 = _AllocString<CTCoAllocPolicy>(v8, v7, *(_BYTE **)&v10[2], a2), v5 = v4, v4 >= 0) )
      {
        v5 = 0;
        goto LABEL_10;
      }
      v6 = 825LL;
    }
    else
    {
      v6 = 821LL;
    }
  }
  else
  {
    v6 = 816LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
    (const char *)(unsigned int)v4);
LABEL_10:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
  return v5;
}
