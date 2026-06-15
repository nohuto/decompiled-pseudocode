/*
 * XREFs of ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N1@Z @ 0x1800CBEE0
 * Callers:
 *     ?UpdateAuxiliaryInputForStreamGroup@@YAXAEBVWeakRef@WRL@Microsoft@@_N1@Z @ 0x1800CBEB4 (-UpdateAuxiliaryInputForStreamGroup@@YAXAEBVWeakRef@WRL@Microsoft@@_N1@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D260 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18002D1F8 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z @ 0x180087D30 (--_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z.c)
 *     wil::scope_exit__lambda_b04dcad4e52f0d96382020bfb06775ad___ @ 0x1800C3D60 (wil--scope_exit__lambda_b04dcad4e52f0d96382020bfb06775ad___.c)
 *     _lambda_b04dcad4e52f0d96382020bfb06775ad_::_lambda_b04dcad4e52f0d96382020bfb06775ad_ @ 0x1800C3DE8 (_lambda_b04dcad4e52f0d96382020bfb06775ad_--_lambda_b04dcad4e52f0d96382020bfb06775ad_.c)
 *     _lambda_9e71f37ce5b50dddc504894e09450e16_::_lambda_9e71f37ce5b50dddc504894e09450e16_ @ 0x1800C3EE0 (_lambda_9e71f37ce5b50dddc504894e09450e16_--_lambda_9e71f37ce5b50dddc504894e09450e16_.c)
 *     wil::details::lambda_call__lambda_3b12b2ffb4c402fe565253890e7145b5___::_lambda_call__lambda_3b12b2ffb4c402fe565253890e7145b5___ @ 0x1800C42F8 (wil--details--lambda_call__lambda_3b12b2ffb4c402fe565253890e7145b5___--_lambda_call__lambda_3b12.c)
 *     _lambda_9e71f37ce5b50dddc504894e09450e16_::operator() @ 0x1800C4BC4 (_lambda_9e71f37ce5b50dddc504894e09450e16_--operator().c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup(
        CAudioResourceManager *this,
        const struct Microsoft::WRL::WeakRef *a2,
        char a3,
        char a4)
{
  __int128 *v4; // rax
  __int64 v5; // r10
  __int64 v6; // r11
  _QWORD *v7; // rax
  int v8; // [rsp+98h] [rbp-80h] BYREF
  AuxiliaryInputDescriptor *v9; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v10; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v11; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v12; // [rsp+B8h] [rbp-60h] BYREF
  volatile signed __int32 *v13; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v14; // [rsp+C8h] [rbp-50h] BYREF
  __int64 v15; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v16; // [rsp+D8h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+E0h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+E8h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+F0h] [rbp-28h] BYREF
  __int128 v20; // [rsp+F8h] [rbp-20h] BYREF
  __int64 v21; // [rsp+108h] [rbp-10h]
  _BYTE v22[40]; // [rsp+110h] [rbp-8h] BYREF
  _QWORD v23[4]; // [rsp+138h] [rbp+20h] BYREF
  _QWORD v24[16]; // [rsp+158h] [rbp+40h] BYREF
  char v25; // [rsp+1F8h] [rbp+E0h] BYREF
  char v26; // [rsp+200h] [rbp+E8h] BYREF

  v26 = a4;
  v25 = a3;
  v8 = 0;
  v19 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  v13 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v9 = 0LL;
  v12 = 0LL;
  v4 = (__int128 *)lambda_b04dcad4e52f0d96382020bfb06775ad_::_lambda_b04dcad4e52f0d96382020bfb06775ad_(
                     v23,
                     (__int64)&v11,
                     (__int64)&v10,
                     (__int64)&v26,
                     (__int64)&v8);
  wil::scope_exit__lambda_b04dcad4e52f0d96382020bfb06775ad___((__int64)v22, v4);
  v7 = lambda_9e71f37ce5b50dddc504894e09450e16_::_lambda_9e71f37ce5b50dddc504894e09450e16_(
         v24,
         v6,
         (__int64)&v16,
         (__int64)&v15,
         (__int64)&v11,
         (__int64)&v13,
         (__int64)&v20,
         (__int64)&v19,
         v5,
         (__int64)&v14,
         (__int64)&v18,
         (__int64)&v17,
         (__int64)&v26,
         (__int64)&v9,
         (__int64)&v10,
         (__int64)&v25,
         (__int64)&v12);
  v8 = lambda_9e71f37ce5b50dddc504894e09450e16_::operator()((__int64)v7);
  wil::details::lambda_call__lambda_3b12b2ffb4c402fe565253890e7145b5___::_lambda_call__lambda_3b12b2ffb4c402fe565253890e7145b5___((__int64)v22);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v12);
  if ( v9 )
    AuxiliaryInputDescriptor::`scalar deleting destructor'((void **)v9);
  v9 = 0LL;
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v20);
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(&v13);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v15);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v16);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v17);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v19);
}
