/*
 * XREFs of ?HandleWindowReplaced@CClassicWindowManager@@UEAAXPEAUHWND__@@0@Z @ 0x18012A3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180094AB0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_baf5fa06f24787c535c6de70fdf76b60___ @ 0x18012A4A8 (CIAMGlobals--QueueViewManagementTask__lambda_baf5fa06f24787c535c6de70fdf76b60___.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x18018C714 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CClassicWindowManager::HandleWindowReplaced(CClassicWindowManager *this, HWND a2, HWND a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  int v7; // r14d
  __int64 v8; // rcx
  IUnknown **v9; // rax
  unsigned int v10; // ebx
  HWND v11; // [rsp+20h] [rbp-10h] BYREF
  HWND v12; // [rsp+28h] [rbp-8h]
  void *ppvOut; // [rsp+60h] [rbp+30h] BYREF
  __int64 v14; // [rsp+68h] [rbp+38h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 48) & -(__int64)(this != (CClassicWindowManager *)88));
  v11 = (HWND)v6;
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  LODWORD(v12) = v7;
  if ( (unsigned int)IsShellFrameWindow(a2) )
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    v9 = (IUnknown **)CWRLObjectWithGITSite::SiteUnk((char *)this - 56, &v14);
    v10 = (unsigned int)IUnknown_QueryService(
                          *v9,
                          &IID_IImmersiveApplicationManager,
                          &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
                          &ppvOut) >> 31;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
    if ( (unsigned __int8)v10 != 1 )
      (*(void (__fastcall **)(void *, HWND))(*(_QWORD *)ppvOut + 160LL))(ppvOut, a2);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  }
  v11 = a2;
  v12 = a3;
  CIAMGlobals::QueueViewManagementTask__lambda_baf5fa06f24787c535c6de70fdf76b60___(v8, &v11);
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
}
