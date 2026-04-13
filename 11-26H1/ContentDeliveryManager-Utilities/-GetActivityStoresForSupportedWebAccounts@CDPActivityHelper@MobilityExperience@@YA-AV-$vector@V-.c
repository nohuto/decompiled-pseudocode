/*
 * XREFs of ?GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180068F70
 * Callers:
 *     ?FindActivityAndStore@ActivityToastNotificationCallback@ToastNotification@@AEAA_NAEBU_GUID@@PEAPEAVICDPActivity@@PEAPEAVICDPActivityStore@@@Z @ 0x180068D40 (-FindActivityAndStore@ActivityToastNotificationCallback@ToastNotification@@AEAA_NAEBU_GUID@@PEAP.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@U?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAU?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@@Z @ 0x180067C68 (--0-$com_ptr_t@U-$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@.c)
 *     ?TryGetSupportedCDPAccountFromWebAccount@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@VICDPAccount@@Uerr_exception_policy@wil@@@wil@@PEAUIWebAccount@Credentials@Security@Windows@@@Z @ 0x18006A720 (-TryGetSupportedCDPAccountFromWebAccount@CDPActivityHelper@MobilityExperience@@YA-AV-$com_ptr_t@.c)
 *     ?_Reserve@?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@IEAAX_K@Z @ 0x18006AE0C (-_Reserve@-$vector@V-$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V-$allocato.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
_QWORD *__fastcall MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v3; // rsi
  int v4; // eax
  int v5; // r12d
  unsigned int v6; // r15d
  int i; // eax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rbx
  int v12; // r15d
  unsigned int v13; // eax
  bool v14; // cl
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rbx
  const char *v19; // [rsp+20h] [rbp-68h]
  int v20; // [rsp+20h] [rbp-68h]
  __int64 v21; // [rsp+28h] [rbp-60h] BYREF
  __int64 v22; // [rsp+30h] [rbp-58h]
  unsigned int v23; // [rsp+38h] [rbp-50h]
  __int64 v24[2]; // [rsp+40h] [rbp-48h] BYREF
  int v25; // [rsp+50h] [rbp-38h]
  __int64 v26[6]; // [rsp+58h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v29; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a1;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v22 = a2;
  v23 = 0;
  v24[0] = 0LL;
  LODWORD(v29) = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 56LL))(a2, &v29);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1375LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v4,
      1);
  v24[1] = a2;
  v5 = v29;
  v25 = v29;
  v26[0] = 0LL;
  v6 = 3;
  v20 = 3;
  for ( i = v23; i != v5; i = ++v23 )
  {
    v8 = v22;
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v22 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v24);
    v10 = v9(v8, v23, v24);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        7305LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v10,
        v20);
    v11 = v24[0];
    v30 = v24[0];
    if ( v24[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24[0] + 8LL))(v24[0]);
    MobilityExperience::CDPActivityHelper::TryGetSupportedCDPAccountFromWebAccount(&v29, v11);
    if ( v29 )
    {
      v12 = v6 | 4;
      v21 = 0LL;
      v13 = CDPGetActivityStoreForAccount(v29, &v21);
      v14 = ((v13 + 0x80000000) & 0x80000000) == 0 && v13 != -2147221243;
      try
      {
        if ( v14 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            69LL,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
            (const char *)v13,
            v12);
        v15 = v21;
        if ( v21 )
        {
          v16 = v3[1];
          if ( (unsigned __int64)&v21 >= v16 || *v3 > (unsigned __int64)&v21 )
          {
            if ( v16 == v3[2] )
            {
              std::vector<wil::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>>::_Reserve(v3);
              v15 = v21;
            }
          }
          else
          {
            v17 = ((__int64)&v21 - *v3) >> 3;
            if ( v16 == v3[2] )
              std::vector<wil::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>>::_Reserve(v3);
            v15 = *(_QWORD *)(*v3 + 8 * v17);
          }
          wil::com_ptr_t<Windows::Foundation::Collections::IMapView<enum ContentManagement::WindowPosition,unsigned int>,wil::err_exception_policy>::com_ptr_t<Windows::Foundation::Collections::IMapView<enum ContentManagement::WindowPosition,unsigned int>,wil::err_exception_policy>(
            (_QWORD *)v3[1],
            v15);
          v3[1] += 8LL;
        }
        v6 = v12 & 0xFFFFFFFB;
        v20 = v6;
        wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v21);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtExceptionMsg(
          retaddr,
          (void *)0x1ED,
          (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
          "Failed to get activity store",
          v19);
        v3 = a1;
        v5 = v25;
        v6 = v20;
      }
    }
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v29);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v26);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v24);
  return v3;
}
