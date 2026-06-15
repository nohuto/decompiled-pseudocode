/*
 * XREFs of ?RuntimeClassInitialize@DynamicAudioEndpointManager@@QEAAJXZ @ 0x18012B7DC
 * Callers:
 *     ??$MakeAndInitialize@VDynamicAudioEndpointManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVDynamicAudioEndpointManager@@@Z @ 0x1800D3024 (--$MakeAndInitialize@VDynamicAudioEndpointManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVDynam.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AddHead@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAUIPolicyRule@@@Z @ 0x18012975C (-AddHead@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DynamicAudioEndpointManager::RuntimeClassInitialize(DynamicAudioEndpointManager *this)
{
  _DWORD *v2; // rax
  __int64 v3; // r8
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _DWORD *v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = operator new[](0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  v4 = 0;
  if ( v2 )
  {
    v2[4] = 1;
    *(_QWORD *)v2 = &PersistedEndpointPolicyRule::`vftable'{for `IPolicyRule'};
    *((_QWORD *)v2 + 1) = &PersistedEndpointPolicyRule::`vftable'{for `CUnknown'};
  }
  else
  {
    v2 = 0LL;
  }
  v7 = v2;
  if ( v2 )
  {
    ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::AddHead(
      (__int64 *)this + 75,
      (__int64)v2,
      v3);
  }
  else
  {
    v4 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x388,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)0x8007000ELL);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v7);
  return v4;
}
