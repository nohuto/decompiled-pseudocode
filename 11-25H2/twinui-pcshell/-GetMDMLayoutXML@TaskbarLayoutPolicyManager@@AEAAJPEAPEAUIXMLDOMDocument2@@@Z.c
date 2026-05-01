/*
 * XREFs of ?GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18016B2F8
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x18016AD40 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18031EA3C (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetMDMStartLayoutPolicy@TaskbarLayoutPolicyManager@@AEAAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x18016BD90 (-GetMDMStartLayoutPolicy@TaskbarLayoutPolicyManager@@AEAAJAEAV-$NativeString@V-$CoTaskMemPolicy@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TaskbarLayoutPolicyManager::GetMDMLayoutXML(
        TaskbarLayoutPolicyManager *this,
        struct IXMLDOMDocument2 **a2)
{
  int MDMStartLayoutPolicy; // eax
  unsigned int v4; // ebx
  LPVOID v5; // rdi
  HRESULT v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r9
  struct IXMLDOMDocument2 *v9; // rcx
  LPVOID pv[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  TaskbarLayoutPolicyManager *v13; // [rsp+70h] [rbp+20h] BYREF
  LPVOID ppv; // [rsp+78h] [rbp+28h] BYREF

  v13 = this;
  *a2 = 0LL;
  memset(pv, 0, 24);
  MDMStartLayoutPolicy = TaskbarLayoutPolicyManager::GetMDMStartLayoutPolicy(this, pv);
  v4 = MDMStartLayoutPolicy;
  if ( MDMStartLayoutPolicy >= 0 )
  {
    v5 = pv[0];
    if ( !pv[0] || !*(_WORD *)pv[0] )
    {
      v4 = -2147467259;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AC,
        (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)0x80004005LL);
      goto LABEL_20;
    }
    ppv = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
    v6 = CoCreateInstance(
           &GUID_88d96a05_f192_11d4_a65f_0040963251e5,
           0LL,
           1u,
           &GUID_2933bf95_7b36_11d2_b20e_00c04f983e60,
           &ppv);
    v4 = v6;
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv + 504LL))(ppv, 0LL);
      v4 = v6;
      if ( v6 >= 0 )
      {
        LOWORD(v13) = 0;
        v6 = (*(__int64 (__fastcall **)(LPVOID, LPVOID, TaskbarLayoutPolicyManager **))(*(_QWORD *)ppv + 520LL))(
               ppv,
               v5,
               &v13);
        v4 = v6;
        if ( v6 >= 0 )
        {
          if ( (_WORD)v13 )
          {
            v9 = (struct IXMLDOMDocument2 *)ppv;
            if ( ppv )
            {
              (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 8LL))(ppv);
              v9 = (struct IXMLDOMDocument2 *)ppv;
            }
            *a2 = v9;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
            v4 = 0;
            goto LABEL_20;
          }
          v4 = -2147467259;
          v8 = 2147500037LL;
          v7 = 439LL;
          goto LABEL_9;
        }
        v7 = 436LL;
      }
      else
      {
        v7 = 433LL;
      }
    }
    else
    {
      v7 = 432LL;
    }
    v8 = (unsigned int)v6;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)v8);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
LABEL_20:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)pv);
    return v4;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1A8,
    (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
    (const char *)(unsigned int)MDMStartLayoutPolicy);
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return v4;
}
