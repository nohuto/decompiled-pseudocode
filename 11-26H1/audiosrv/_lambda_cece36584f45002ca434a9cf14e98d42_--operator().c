/*
 * XREFs of _lambda_cece36584f45002ca434a9cf14e98d42_::operator() @ 0x18010F10C
 * Callers:
 *     ??0CXvmPowerReferenceManager@@QEAA@U_GUID@@0@Z @ 0x18010ECF8 (--0CXvmPowerReferenceManager@@QEAA@U_GUID@@0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetContainerProperty@@YAJU_GUID@@AEBU_tagpropertykey@@PEAU1@@Z @ 0x180052FF4 (-GetContainerProperty@@YAJU_GUID@@AEBU_tagpropertykey@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_cece36584f45002ca434a9cf14e98d42_::operator()(IID **a1)
{
  __int64 result; // rax
  HRESULT v3; // eax
  unsigned int v4; // ebx
  IID *v5; // rdx
  LPVOID v6; // rax
  __int64 v7; // rcx
  LPVOID ppv[2]; // [rsp+30h] [rbp-48h] BYREF
  IID v9; // [rsp+40h] [rbp-38h] BYREF
  IID rclsid; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  rclsid = GUID_00000000_0000_0000_0000_000000000000;
  v9 = **a1;
  result = GetContainerProperty(&v9, &PKEY_Audio_CrossVmPowerManager, &rclsid);
  if ( (int)result >= 0 )
  {
    ppv[0] = 0LL;
    v3 = CoCreateInstance(&rclsid, 0LL, 0x17u, &GUID_06dcd73e_efc3_4a91_af27_67f583086878, ppv);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v5 = *a1;
      v6 = ppv[0];
      ppv[0] = 0LL;
      v7 = *(_QWORD *)&v5[8].Data1;
      *(_QWORD *)&v5[8].Data1 = v6;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      v4 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x114,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
        (const char *)(unsigned int)v3);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)ppv);
    return v4;
  }
  return result;
}
