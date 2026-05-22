/*
 * XREFs of ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x1800FE7F0
 * Callers:
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800FFE4C (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x1801007EC (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18000D7E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000DE08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x180049F70 (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18004A64C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18004A690 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x1800500E8 (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFrameworkViewTypeFromViewId@ViewHelper@@SA?AW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800FE9F8 (-GetFrameworkViewTypeFromViewId@ViewHelper@@SA-AW4AppModelFrameworkKind@WindowManagement@Applica.c)
 *     ?MPCInputRouter_GetFrameworkViewTypeFromFocusTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_K@Z @ 0x1800FF810 (-MPCInputRouter_GetFrameworkViewTypeFromFocusTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCInputRouter::GetFrameworkViewTypeFromFocusTarget(__int64 a1, struct IInputTarget *a2)
{
  int v3; // eax
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // ebx
  unsigned int FrameworkViewTypeFromViewId; // esi
  ISMTracing *v8; // rcx
  int v10; // ebx
  struct ViewHierarchyWithWindowManager *v11; // rax
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  struct ViewHierarchyWithWindowManager *v13; // rax
  struct ViewHierarchyWithWindowManager *v14; // rax
  int v15; // eax
  int v16; // [rsp+20h] [rbp-18h]
  const char *v17; // [rsp+30h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  __int64 v19; // [rsp+60h] [rbp+28h] BYREF
  unsigned int v20; // [rsp+68h] [rbp+30h] BYREF
  unsigned __int64 WindowIdFromViewId; // [rsp+70h] [rbp+38h] BYREF
  struct IInputTarget *v22; // [rsp+78h] [rbp+40h] BYREF

  v19 = a1;
  v22 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
  v20 = 0;
  LODWORD(v19) = 0;
  WindowIdFromViewId = 0LL;
  v3 = (*(__int64 (__fastcall **)(struct IInputTarget *, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v20);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x200,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v3,
      v16);
  v4 = (*(__int64 (__fastcall **)(struct IInputTarget *, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v19);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x201,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v4,
      v16);
  v5 = v20;
  if ( !v20 )
  {
    v6 = v19;
    if ( (_DWORD)v19 )
    {
LABEL_19:
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      FrameworkViewTypeFromViewId = ViewHelper::GetFrameworkViewTypeFromViewId(ViewHierarchy, v6);
      v13 = ISMStatics::GetViewHierarchy();
      WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(v13);
      goto LABEL_13;
    }
    if ( (*(int (__fastcall **)(struct IInputTarget *, unsigned __int64 *))(*(_QWORD *)a2 + 64LL))(
           a2,
           &WindowIdFromViewId) >= 0
      && !IsEdition(1024LL)
      && GetPropW((HWND)(int)WindowIdFromViewId, L"Windows.Graphics.Holographic.HolographicSpace") )
    {
      FrameworkViewTypeFromViewId = v6 + 1;
      goto LABEL_13;
    }
    v5 = v20;
    if ( !v20 )
    {
      v6 = v19;
      if ( !(_DWORD)v19 )
      {
        v10 = WindowIdFromViewId;
        v11 = ISMStatics::GetViewHierarchy();
        LODWORD(v19) = ViewHelper::GetViewIdFromWindowId(v11, v10);
        wil::details::in1diag3::Log_HrIfMsg(
          retaddr,
          (void *)0x213,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)0x80004005LL,
          (_DWORD)v19 == 0,
          (__int64)"View id not found",
          v17);
        v6 = v19;
      }
      goto LABEL_19;
    }
  }
  v14 = ISMStatics::GetViewHierarchy();
  FrameworkViewTypeFromViewId = ViewHelper::GetFrameworkViewTypeFromViewId(v14, v5);
  v15 = (*(__int64 (__fastcall **)(struct IInputTarget *, unsigned __int64 *))(*(_QWORD *)a2 + 64LL))(
          a2,
          &WindowIdFromViewId);
  if ( v15 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x21E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v15,
      v16);
LABEL_13:
  if ( ISMTracing::IsEnabled() )
  {
    ISMTracing::Instance();
    ISMTracing::MPCInputRouter_GetFrameworkViewTypeFromFocusTarget_(
      v8,
      a2,
      v19,
      FrameworkViewTypeFromViewId,
      WindowIdFromViewId);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
  return FrameworkViewTypeFromViewId;
}
