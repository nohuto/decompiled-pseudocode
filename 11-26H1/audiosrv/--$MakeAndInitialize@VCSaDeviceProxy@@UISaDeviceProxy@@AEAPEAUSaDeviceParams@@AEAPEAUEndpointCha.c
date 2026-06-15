/*
 * XREFs of ??$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@AEAW4_AUDCLNT_SHAREMODE@@AEAKAEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAPEBU_GUID@@AEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAUEndpointCharacteristicsDescriptor@@$$QEAPEAUIDeviceGraphObjectsStore@@AEAW4_AUDCLNT_SHAREMODE@@AEAKAEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAPEBU_GUID@@8@Z @ 0x18007506C
 * Callers:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEBU_GUID@@5PEAPEAUISaDeviceProxy@@@Z @ 0x180074B80 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams.c)
 * Callees:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISaDeviceProxy@@UIInspectable@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISaDeviceProxy@@UIInspectable@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18005E0FC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISaDeviceProxy@@.c)
 *     ?Release@CSaDeviceProxy@@UEAAKXZ @ 0x1800642B0 (-Release@CSaDeviceProxy@@UEAAKXZ.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CSaDeviceProxy@@QEAA@XZ @ 0x1800F94EC (--0CSaDeviceProxy@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@W4_AUDCLNT_SHAREMODE@@KAEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEBU_GUID@@6@Z @ 0x1800FF7F4 (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAUEndpointCharacteristicsDesc.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSaDeviceProxy,ISaDeviceProxy,SaDeviceParams * &,EndpointCharacteristicsDescriptor * &,IDeviceGraphObjectsStore *,enum _AUDCLNT_SHAREMODE &,unsigned long &,SaDeviceResourceParams &,std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>> const &,_GUID const * &,_GUID const * &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9,
        _QWORD *a10)
{
  CSaDeviceProxy *v14; // rax
  CSaDeviceProxy *v16; // rbx
  int v17; // edi
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF

  *a1 = 0LL;
  v14 = (CSaDeviceProxy *)operator new[](0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v14 )
    return 2147942414LL;
  v16 = CSaDeviceProxy::CSaDeviceProxy(v14);
  v18 = 0LL;
  v17 = CSaDeviceProxy::RuntimeClassInitialize(v16, *a2, *a3, *a4, *a5, *a6, a7, a8, *a9, *a10, v16);
  if ( v17 >= 0 )
    v17 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ISaDeviceProxy,IInspectable>>(
            (__int64)v16,
            &GUID_a5096cff_6966_4f5c_875e_69b6b31705b3,
            a1);
  if ( v16 )
    CSaDeviceProxy::Release(v16);
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v18);
  return (unsigned int)v17;
}
