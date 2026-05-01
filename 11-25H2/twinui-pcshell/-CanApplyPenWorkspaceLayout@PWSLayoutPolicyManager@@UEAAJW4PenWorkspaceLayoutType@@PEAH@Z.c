/*
 * XREFs of ?CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z @ 0x1803E6DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1803E70C8 (-GetDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1803E71F0 (-GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1803E7A7C (-ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1803E7BA0 (-ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PWSLayoutPolicyManager::CanApplyPenWorkspaceLayout(__int64 a1, int a2, _DWORD *a3)
{
  int OEMLayoutXML; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  PWSLayoutPolicyManager *v9; // rcx
  int v10; // eax
  PWSLayoutPolicyManager *v11; // rcx
  int DefaultLayoutXML; // eax
  struct IXMLDOMDocument2Vtbl *lpVtbl; // rax
  int v14; // eax
  __int64 v15; // rsi
  struct IXMLDOMDocument2 *v16; // rbx
  HRESULT (__stdcall *selectSingleNode)(IXMLDOMDocument2 *, BSTR, IXMLDOMNode **); // rdi
  __int128 v19; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IXMLDOMDocument2 *v22; // [rsp+70h] [rbp+30h] BYREF
  __int64 v23; // [rsp+78h] [rbp+38h] BYREF

  *a3 = 0;
  v22 = 0LL;
  if ( !a2 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
    DefaultLayoutXML = PWSLayoutPolicyManager::GetDefaultLayoutXML(v11, &v22);
    OEMLayoutXML = DefaultLayoutXML;
    if ( DefaultLayoutXML < 0 )
    {
      v7 = (unsigned int)DefaultLayoutXML;
      v8 = 103LL;
      goto LABEL_4;
    }
LABEL_6:
    if ( v22 )
    {
      v10 = a2
          ? PWSLayoutPolicyManager::ValidateLayoutModificationXML(v9, v22)
          : PWSLayoutPolicyManager::ValidateDefaultLayoutXML(v9, v22);
      if ( v10 >= 0 )
      {
        lpVtbl = v22->lpVtbl;
        v19 = *(_OWORD *)(a1 + 80);
        v20 = *(_QWORD *)(a1 + 96);
        v14 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, __int128 *))lpVtbl->setProperty)(
                v22,
                *(_QWORD *)(a1 + 104),
                &v19);
        OEMLayoutXML = v14;
        if ( v14 < 0 )
        {
          v7 = (unsigned int)v14;
          v8 = 117LL;
          goto LABEL_4;
        }
        if ( a2 )
          v15 = *(_QWORD *)(a1 + 120);
        else
          v15 = *(_QWORD *)(a1 + 112);
        v23 = 0LL;
        v16 = v22;
        selectSingleNode = v22->lpVtbl->selectSingleNode;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
        if ( ((int (__fastcall *)(struct IXMLDOMDocument2 *, __int64, __int64 *))selectSingleNode)(v16, v15, &v23) >= 0
          && v23 )
        {
          *a3 = 1;
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
      }
    }
    OEMLayoutXML = 0;
    goto LABEL_23;
  }
  if ( a2 == 1 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
    OEMLayoutXML = PWSLayoutPolicyManager::GetOEMLayoutXML((PWSLayoutPolicyManager *)a1, &v22);
    if ( OEMLayoutXML < 0 )
      goto LABEL_23;
    goto LABEL_6;
  }
  OEMLayoutXML = -2147467259;
  v7 = 2147500037LL;
  v8 = 110LL;
LABEL_4:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
    (const char *)v7);
LABEL_23:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
  return (unsigned int)OEMLayoutXML;
}
