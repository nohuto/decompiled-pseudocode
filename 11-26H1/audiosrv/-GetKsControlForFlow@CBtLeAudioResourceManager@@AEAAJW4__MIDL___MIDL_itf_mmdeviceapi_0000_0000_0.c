/*
 * XREFs of ?GetKsControlForFlow@CBtLeAudioResourceManager@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAUIKsControl@@@Z @ 0x1800EEF40
 * Callers:
 *     _lambda_ee4c356f074d9413c3c2d64860f4f125_::operator() @ 0x1800EEDF4 (_lambda_ee4c356f074d9413c3c2d64860f4f125_--operator().c)
 *     ?SendBtAudioStreamContext@CBtLeAudioResourceManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4BTAudio_StreamContext@@@Z @ 0x1800EF1D0 (-SendBtAudioStreamContext@CBtLeAudioResourceManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??$query_to@UIInspectable@@@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIInspectable@@@Z @ 0x1800E01C4 (--$query_to@UIInspectable@@@-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEBAJ.c)
 *     ?GetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18013A130 (-GetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CBtLeAudioResourceManager::GetKsControlForFlow(
        CBtLeAudioResourceManager *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        struct IKsControl **a3)
{
  _QWORD *v3; // rcx
  int PropertyStoreProperty; // eax
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  HRESULT (__stdcall *GetDevice)(IMMDeviceEnumerator *, LPCWSTR, IMMDevice **); // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v12; // [rsp+30h] [rbp-50h] BYREF
  CEndpointCharacteristics *v13; // [rsp+38h] [rbp-48h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+40h] [rbp-40h] BYREF
  struct _tagpropertykey v15; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v3 = (_QWORD *)((char *)this + (a2 != eRender ? 88LL : 80LL));
  v13 = 0LL;
  if ( !*v3
    || (v13 = 0LL, (int)wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::query_to<IInspectable>(v3, &v13) < 0) )
  {
    v5 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
      (const char *)0x8000FFFFLL);
    goto LABEL_16;
  }
  v15.fmtid.Data1 = 590439624;
  *(_DWORD *)&v15.fmtid.Data2 = 1283267372;
  *(_DWORD *)v15.fmtid.Data4 = 1907779772;
  *(_DWORD *)&v15.fmtid.Data4[4] = 1730509416;
  v15.pid = 1;
  memset(&pvar, 0, sizeof(pvar));
  PropertyStoreProperty = CEndpointCharacteristics::GetPropertyStoreProperty(v13, &v15, &pvar);
  v5 = PropertyStoreProperty;
  if ( PropertyStoreProperty < 0 )
  {
    v6 = (unsigned int)PropertyStoreProperty;
    v7 = 70LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
      (const char *)v6);
    goto LABEL_6;
  }
  if ( pvar.vt != 31 )
  {
    v5 = -2147418113;
    v6 = 2147549183LL;
    v7 = 71LL;
    goto LABEL_5;
  }
  v12 = 0LL;
  GetDevice = g_DeviceEnumerator->lpVtbl->GetDevice;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v12);
  v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GetDevice)(
         g_DeviceEnumerator,
         (LARGE_INTEGER)pvar.hVal.QuadPart,
         &v12);
  v5 = v9;
  if ( v9 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v12 + 24LL))(
           v12,
           &GUID_28f54685_06fd_11d2_b27a_00a0c9223196,
           23LL);
    v5 = v9;
    if ( v9 >= 0 )
    {
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v12);
      PropVariantClear((PROPVARIANT *)&pvar);
      v5 = 0;
      goto LABEL_16;
    }
    v10 = 78LL;
  }
  else
  {
    v10 = 75LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
    (const char *)(unsigned int)v9);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v12);
LABEL_6:
  PropVariantClear((PROPVARIANT *)&pvar);
LABEL_16:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v13);
  return v5;
}
