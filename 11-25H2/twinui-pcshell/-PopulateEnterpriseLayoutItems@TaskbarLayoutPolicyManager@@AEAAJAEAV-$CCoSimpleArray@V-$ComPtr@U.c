/*
 * XREFs of ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18031EA3C
 * Callers:
 *     ?GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x18031DEA0 (-GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ @ 0x18016B184 (-CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ.c)
 *     ?GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18016B2F8 (-GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18016B4C0 (-GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x18016BF80 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ??$As@UIXMLDOMElement@@@?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIXMLDOMElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x18031CD6C (--$As@UIXMLDOMElement@@@-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIXML.c)
 *     ?GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18031DCB4 (-GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@AEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@W4TaskbarPinningSource@@@Z @ 0x18031E5C0 (-PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITaskbarL.c)
 *     ?SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x18031EE64 (-SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TaskbarLayoutPolicyManager::PopulateEnterpriseLayoutItems(
        TaskbarLayoutPolicyManager *this,
        _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int MDMLayoutXML; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  TaskbarLayoutPolicyManager *v10; // rcx
  TaskbarLayoutPolicyManager *v11; // rcx
  TaskbarLayoutPolicyManager *v12; // rcx
  struct IXMLDOMDocument2Vtbl *lpVtbl; // rax
  int v14; // eax
  __int64 v15; // rdx
  struct IXMLDOMDocument2 *v16; // rbx
  HRESULT (__stdcall *selectSingleNode)(IXMLDOMDocument2 *, BSTR, IXMLDOMNode **); // rdi
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  struct IXMLDOMDocument2 *v22[2]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v23; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+80h] [rbp+30h] BYREF
  __int64 v27; // [rsp+88h] [rbp+38h] BYREF

  LODWORD(v26) = 0;
  LODWORD(v27) = 0;
  v22[0] = 0LL;
  if ( (int)TaskbarLayoutPolicyManager::CanApplyGroupPolicyLayout(this, (int *)&v26, (int *)&v27) < 0 || !(_DWORD)v26 )
  {
    if ( (unsigned int)TaskbarLayoutPolicyManager::CanApplyMDMLayout(this, v4, v5, v6) )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v22);
      MDMLayoutXML = TaskbarLayoutPolicyManager::GetMDMLayoutXML(v10, v22);
      v8 = MDMLayoutXML;
      if ( MDMLayoutXML < 0 )
      {
        v9 = 472LL;
        goto LABEL_8;
      }
      MDMLayoutXML = TaskbarLayoutPolicyManager::SetMDMPolicyLayoutTimestampToCurrent(v11);
      v8 = MDMLayoutXML;
      if ( MDMLayoutXML < 0 )
      {
        v9 = 473LL;
        goto LABEL_8;
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v22);
      MDMLayoutXML = TaskbarLayoutPolicyManager::GetLayoutModificationXML(v12, v22);
      v8 = MDMLayoutXML;
      if ( MDMLayoutXML < 0 )
      {
        v9 = 477LL;
        goto LABEL_8;
      }
    }
LABEL_13:
    if ( v22[0] )
    {
      v26 = 0LL;
      lpVtbl = v22[0]->lpVtbl;
      v23 = *(_OWORD *)((char *)this + 104);
      v24 = *((_QWORD *)this + 15);
      v14 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, __int128 *))lpVtbl->setProperty)(
              v22[0],
              *((_QWORD *)this + 16),
              &v23);
      v8 = v14;
      if ( v14 < 0 )
      {
        v15 = 483LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)v14);
LABEL_17:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
        goto LABEL_27;
      }
      v16 = v22[0];
      selectSingleNode = v22[0]->lpVtbl->selectSingleNode;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
      v14 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, _QWORD))selectSingleNode)(
              v16,
              *((_QWORD *)this + 18),
              &v26);
      v8 = v14;
      if ( v14 < 0 )
      {
        v15 = 484LL;
        goto LABEL_16;
      }
      v27 = 0LL;
      v18 = Microsoft::WRL::ComPtr<IXMLDOMNode>::As<IXMLDOMElement>(&v26, &v27);
      v8 = v18;
      if ( v18 < 0 )
      {
        v20 = 487LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)v18);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
        goto LABEL_17;
      }
      v18 = TaskbarLayoutPolicyManager::PopulateAndSetPinned(v19, a2, (__int64)&v26, 3u);
      v8 = v18;
      if ( v18 < 0 )
      {
        v20 = 488LL;
        goto LABEL_22;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
    }
    v8 = 0;
    goto LABEL_27;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v22);
  MDMLayoutXML = TaskbarLayoutPolicyManager::GetPolicyLayoutXML((const WCHAR **)this, v22);
  v8 = MDMLayoutXML;
  if ( MDMLayoutXML >= 0 )
    goto LABEL_13;
  v9 = 468LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
    (const char *)(unsigned int)MDMLayoutXML);
LABEL_27:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v22);
  return v8;
}
