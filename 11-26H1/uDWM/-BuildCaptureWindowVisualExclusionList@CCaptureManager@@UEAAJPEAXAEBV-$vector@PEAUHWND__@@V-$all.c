/*
 * XREFs of ?BuildCaptureWindowVisualExclusionList@CCaptureManager@@UEAAJPEAXAEBV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x18009E9D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Update@CVisualGroupProxy@@QEAAJPEAPEAVCVisualProxy@@I@Z @ 0x180061B78 (-Update@CVisualGroupProxy@@QEAAJPEAPEAVCVisualProxy@@I@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180062A98 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18008D824 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVCWindowData@@@?$vector@PEAVCWindowData@@V?$allocator@PEAVCWindowData@@@std@@@std@@AEAAPEAPEAVCWindowData@@QEAPEAV2@AEBQEAV2@@Z @ 0x18009D124 (--$_Emplace_reallocate@AEBQEAVCWindowData@@@-$vector@PEAVCWindowData@@V-$allocator@PEAVCWindowDa.c)
 *     ?_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z @ 0x1800A545C (-_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z.c)
 *     ?CreateVisualGroupProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualGroupProxy@@@Z @ 0x1800A802C (-CreateVisualGroupProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualGroupProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CCaptureManager::BuildCaptureWindowVisualExclusionList(__int64 a1, void *a2, HWND **a3)
{
  CCompositor *v5; // rbx
  int v6; // eax
  CCaptureManager *v7; // rcx
  unsigned int v8; // ebx
  HWND *v9; // rdi
  HWND *i; // rbx
  struct CVisualProxy **v11; // rcx
  unsigned __int64 v12; // r8
  int v13; // eax
  void *v15; // [rsp+20h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+28h] [rbp-28h] BYREF
  struct CVisualProxy **v17[2]; // [rsp+30h] [rbp-20h] BYREF
  struct CVisualProxy **v18; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  CVisualGroupProxy *v20; // [rsp+78h] [rbp+28h] BYREF
  struct CVisualProxy *v21; // [rsp+88h] [rbp+38h] BYREF

  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v15 = a2;
  v20 = 0LL;
  v5 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v20);
  v6 = CCompositor::CreateVisualGroupProxyFromSharedHandle(v5, a2, &v20);
  v8 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x568,
      (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)v6);
LABEL_21:
    Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v20);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v15);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
    return v8;
  }
  *(_OWORD *)v17 = 0LL;
  v18 = 0LL;
  v9 = a3[1];
  for ( i = *a3; i != v9; ++i )
  {
    v21 = 0LL;
    if ( CCaptureManager::_GetWindowRootVisual(v7, *i, 1, &v21) >= 0 )
    {
      if ( v17[1] == v18 )
        std::vector<CWindowData *>::_Emplace_reallocate<CWindowData * const &>(
          (__int64)v17,
          (__int64)v17[1],
          (__int64 *)&v21);
      else
        *v17[1]++ = v21;
    }
  }
  v11 = v17[0];
  v12 = v17[1] - v17[0];
  if ( v12 > 0xFFFFFFFF )
  {
    v8 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x575,
           (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
           (const char *)0xC0000095LL);
LABEL_19:
    if ( v17[0] )
    {
      std::_Deallocate<16>(v17[0], ((char *)v18 - (char *)v17[0]) & 0xFFFFFFFFFFFFFFF8uLL);
      *(_OWORD *)v17 = 0LL;
      v18 = 0LL;
    }
    goto LABEL_21;
  }
  if ( (_DWORD)v12 )
  {
    v13 = CVisualGroupProxy::Update(v20, v17[0], v12);
    v8 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x57A,
        (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
        (const char *)(unsigned int)v13);
      goto LABEL_19;
    }
    v11 = v17[0];
  }
  if ( v11 )
  {
    std::_Deallocate<16>(v11, ((char *)v18 - (char *)v11) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_OWORD *)v17 = 0LL;
    v18 = 0LL;
  }
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v20);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v15);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return 0LL;
}
