/*
 * XREFs of ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x1801005E0
 * Callers:
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800FFE4C (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x180100408 (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18000D7E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000DE08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     ?GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA?AV?$vector@IV?$allocator@I@std@@@std@@I@Z @ 0x180049720 (-GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA-AV-$vector@IV-$allocator@I@std@@@std@@I@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x180049F70 (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18004A64C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18004A690 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180065234 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?GetProxyWindow@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x1800FECF4 (-GetProxyWindow@ViewHierarchyWithWindowManager@@QEAAII@Z.c)
 *     ?MPCInputRouter_Update3DFocusWNF_@ISMTracing@@QEAAX_K0KKKK@Z @ 0x1800FFBAC (-MPCInputRouter_Update3DFocusWNF_@ISMTracing@@QEAAX_K0KKKK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCInputRouter::Update3DFocusWNF(MPCInputRouter *this)
{
  __int64 v2; // rcx
  unsigned int v3; // eax
  struct ViewHierarchyWithWindowManager *v4; // rax
  ViewHierarchyWithWindowManager *v5; // rax
  unsigned int ProxyWindow; // eax
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned __int64 WindowIdFromViewId; // rbx
  struct ViewHierarchyWithWindowManager *v9; // rax
  struct ViewHierarchyWithWindowManager *v10; // rax
  int v11; // eax
  ISMTracing *v12; // rcx
  __int64 v13[3]; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v14[2]; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 Ancestor; // [rsp+60h] [rbp-20h]
  unsigned int v16; // [rsp+68h] [rbp-18h]
  unsigned int v17; // [rsp+6Ch] [rbp-14h]
  unsigned int ViewIdFromWindowId; // [rsp+70h] [rbp-10h]
  unsigned int v19; // [rsp+74h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v2 = *((_QWORD *)this + 82);
  if ( v2 )
  {
    *(_QWORD *)v14 = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
    v17 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 82) + 72LL))(*((_QWORD *)this + 82));
    ViewIdFromWindowId = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 82) + 80LL))(*((_QWORD *)this + 82));
    *(_QWORD *)v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 82) + 56LL))(*((_QWORD *)this + 82));
    Ancestor = *(_QWORD *)v14;
    if ( *((_BYTE *)this + 752) )
      v3 = *((_DWORD *)this + 189);
    else
      v3 = v16;
    v19 = v3;
    if ( ViewIdFromWindowId
      || (v4 = ISMStatics::GetViewHierarchy(), (ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(v4, v14[0])) != 0) )
    {
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy);
      v9 = ISMStatics::GetViewHierarchy();
      ViewHierarchyWithWindowManager::GetAllAncestors((__int64)v9, v13);
      if ( v13[0] != v13[1] )
      {
        v10 = ISMStatics::GetViewHierarchy();
        WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(v10);
      }
      Ancestor = WindowIdFromViewId;
      std::vector<Windows::UI::Color>::_Tidy(v13);
    }
    else if ( IsEdition(1024LL) )
    {
      v5 = ISMStatics::GetViewHierarchy();
      ProxyWindow = ViewHierarchyWithWindowManager::GetProxyWindow(v5, v14[0]);
      if ( ProxyWindow )
        Ancestor = ProxyWindow;
    }
    if ( IsEdition(8778LL) )
      Ancestor = (unsigned __int64)GetAncestor((HWND)(int)Ancestor, 3u);
    v11 = RtlPublishWnfStateData(WNF_HOLO_INPUT_FOCUS_CHANGE, 0LL, v14, 32LL) | 0x10000000;
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x354,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v11,
        0);
    if ( ISMTracing::IsEnabled() )
    {
      ISMTracing::Instance();
      ISMTracing::MPCInputRouter_Update3DFocusWNF_(v12, *(__int64 *)v14, Ancestor, v16, v17, ViewIdFromWindowId, v19);
    }
  }
}
