/*
 * XREFs of ?PopulateDefaultLayoutItems@PWSLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1803F1034
 * Callers:
 *     ?GetPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x1803F0B80 (-GetPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAPEAUIObjectArra.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1803F09B0 (-GetDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?Populate@PWSLayoutPolicyManager@@CAJAEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@AEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@@Z @ 0x1803F0E88 (-Populate@PWSLayoutPolicyManager@@CAJAEAV-$CCoSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@W.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PWSLayoutPolicyManager::PopulateDefaultLayoutItems(__int64 a1, _QWORD *a2)
{
  PWSLayoutPolicyManager *v4; // rcx
  int DefaultLayoutXML; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  struct IXMLDOMDocument2 *v9; // rbx
  HRESULT (__stdcall *selectSingleNode)(IXMLDOMDocument2 *, BSTR, IXMLDOMNode **); // rdi
  __int128 v12; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v15; // [rsp+70h] [rbp+30h] BYREF
  struct IXMLDOMDocument2 *v16; // [rsp+78h] [rbp+38h] BYREF

  v16 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  DefaultLayoutXML = PWSLayoutPolicyManager::GetDefaultLayoutXML(v4, &v16);
  v6 = DefaultLayoutXML;
  if ( DefaultLayoutXML >= 0 )
  {
    v15 = 0LL;
    v12 = *(_OWORD *)(a1 + 80);
    v13 = *(_QWORD *)(a1 + 96);
    v7 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, __int128 *))v16->lpVtbl->setProperty)(
           v16,
           *(_QWORD *)(a1 + 104),
           &v12);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v9 = v16;
      selectSingleNode = v16->lpVtbl->selectSingleNode;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
      v7 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, __int64 *))selectSingleNode)(
             v9,
             *(_QWORD *)(a1 + 112),
             &v15);
      v6 = v7;
      if ( v7 >= 0 )
      {
        v7 = PWSLayoutPolicyManager::Populate(a2, (__int64)&v15);
        v6 = v7;
        if ( v7 >= 0 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
          v6 = 0;
          goto LABEL_11;
        }
        v8 = 204LL;
      }
      else
      {
        v8 = 202LL;
      }
    }
    else
    {
      v8 = 201LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC6,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)DefaultLayoutXML);
  }
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  return v6;
}
