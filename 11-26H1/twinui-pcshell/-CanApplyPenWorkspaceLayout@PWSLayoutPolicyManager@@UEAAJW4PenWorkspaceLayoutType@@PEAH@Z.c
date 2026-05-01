/*
 * XREFs of ?CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z @ 0x1803F06A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1803F09B0 (-GetDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1803F0AE4 (-GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1803F13AC (-ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1803F14D8 (-ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  int v13; // eax
  __int64 v14; // rsi
  struct IXMLDOMDocument2 *v15; // rbx
  HRESULT (__stdcall *selectSingleNode)(IXMLDOMDocument2 *, BSTR, IXMLDOMNode **); // rdi
  __int128 v18; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IXMLDOMDocument2 *v21; // [rsp+70h] [rbp+30h] BYREF
  __int64 v22; // [rsp+78h] [rbp+38h] BYREF

  *a3 = 0;
  v21 = 0LL;
  if ( !a2 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
    DefaultLayoutXML = PWSLayoutPolicyManager::GetDefaultLayoutXML(v11, &v21);
    OEMLayoutXML = DefaultLayoutXML;
    if ( DefaultLayoutXML < 0 )
    {
      v7 = (unsigned int)DefaultLayoutXML;
      v8 = 103LL;
      goto LABEL_4;
    }
LABEL_6:
    if ( v21 )
    {
      v10 = a2
          ? PWSLayoutPolicyManager::ValidateLayoutModificationXML(v9, v21)
          : PWSLayoutPolicyManager::ValidateDefaultLayoutXML(v9, v21);
      if ( v10 >= 0 )
      {
        v18 = *(_OWORD *)(a1 + 80);
        v19 = *(_QWORD *)(a1 + 96);
        v13 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, __int128 *))v21->lpVtbl->setProperty)(
                v21,
                *(_QWORD *)(a1 + 104),
                &v18);
        OEMLayoutXML = v13;
        if ( v13 < 0 )
        {
          v7 = (unsigned int)v13;
          v8 = 117LL;
          goto LABEL_4;
        }
        v14 = *(_QWORD *)((a2 != 0 ? 8 : 0) + a1 + 112);
        v22 = 0LL;
        v15 = v21;
        selectSingleNode = v21->lpVtbl->selectSingleNode;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
        if ( ((int (__fastcall *)(struct IXMLDOMDocument2 *, __int64, __int64 *))selectSingleNode)(v15, v14, &v22) >= 0
          && v22 )
        {
          *a3 = 1;
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
      }
    }
    OEMLayoutXML = 0;
    goto LABEL_20;
  }
  if ( a2 == 1 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
    OEMLayoutXML = PWSLayoutPolicyManager::GetOEMLayoutXML((PWSLayoutPolicyManager *)a1, &v21);
    if ( OEMLayoutXML < 0 )
      goto LABEL_20;
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
LABEL_20:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
  return (unsigned int)OEMLayoutXML;
}
