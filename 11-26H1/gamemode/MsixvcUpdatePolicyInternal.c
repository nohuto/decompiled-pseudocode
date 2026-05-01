/*
 * XREFs of MsixvcUpdatePolicyInternal @ 0x1800071EC
 * Callers:
 *     MsixvcUpdatePolicyString @ 0x180007FC0 (MsixvcUpdatePolicyString.c)
 *     MsixvcUpdatePolicyUInt64 @ 0x180008010 (MsixvcUpdatePolicyUInt64.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800055E4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEB_W@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEB_WUDummy@Details@23@@Z @ 0x180006670 (--$-0PEB_W@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEB_WUDummy@Details@23@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800067AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800067C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcmp_0 @ 0x18000FE36 (memcmp_0.c)
 *     __security_check_cookie @ 0x18000FE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180011010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MsixvcUpdatePolicyInternal(
        const WCHAR *a1,
        const WCHAR *a2,
        unsigned int a3,
        const WCHAR *a4,
        __int64 a5)
{
  HRESULT v7; // eax
  int ActivationFactory; // eax
  unsigned int v9; // ebx
  IUnknown *v10; // rcx
  HRESULT v12; // eax
  unsigned int v13; // r8d
  IUnknown *v14; // rbx
  ULONG (__stdcall *AddRef)(IUnknown *); // rdi
  HSTRING_HEADER *v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  IUnknown *v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  IUnknown *v22; // rcx
  __int64 v23; // rcx
  IUnknown *v24; // rcx
  HRESULT v25; // eax
  HSTRING v26; // rbx
  int v27; // eax
  unsigned int v28; // r8d
  __int64 v29; // rcx
  __int64 v30; // rcx
  IUnknown *v31; // rcx
  __int64 v32; // rbx
  __int64 (__fastcall *v33)(__int64, __int64, PVOID, _QWORD, int *); // rdi
  HSTRING_HEADER *v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  IUnknown *v39; // rcx
  int v40; // eax
  unsigned int v41; // r8d
  const WCHAR *v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  IUnknown *v45; // rcx
  const WCHAR *v46; // rbx
  __int64 (__fastcall *v47)(const WCHAR *, PVOID); // rdi
  HSTRING_HEADER *v48; // rax
  int v49; // eax
  const WCHAR *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  IUnknown *v53; // rcx
  int v54; // eax
  const WCHAR *v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  IUnknown *v58; // rcx
  int v59; // eax
  const WCHAR *v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  IUnknown *v63; // rcx
  HRESULT v64; // eax
  HSTRING v65; // rbx
  __int64 v66; // rcx
  int v67; // eax
  const WCHAR *v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  IUnknown *v72; // rcx
  int v73; // eax
  unsigned int v74; // r8d
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rcx
  IUnknown *v78; // rcx
  __int64 v79; // rbx
  __int64 (__fastcall *v80)(__int64, PVOID); // rdi
  HSTRING_HEADER *v81; // rax
  int v82; // eax
  __int64 v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rcx
  IUnknown *v86; // rcx
  int v87; // eax
  __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rcx
  IUnknown *v91; // rcx
  int v92; // eax
  unsigned int v93; // r8d
  __int64 v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // rcx
  IUnknown *v97; // rcx
  __int64 v98; // rbx
  __int64 (__fastcall *v99)(__int64, PVOID); // rdi
  HSTRING_HEADER *v100; // rax
  int v101; // eax
  __int64 v102; // rcx
  __int64 v103; // rcx
  __int64 v104; // rcx
  IUnknown *v105; // rcx
  int v106; // eax
  __int64 v107; // rcx
  __int64 v108; // rcx
  __int64 v109; // rcx
  IUnknown *v110; // rcx
  int v111; // eax
  __int64 v112; // rcx
  __int64 v113; // rcx
  __int64 v114; // rcx
  IUnknown *v115; // rcx
  const WCHAR *v116; // rcx
  __int64 v117; // rcx
  __int64 v118; // rcx
  IUnknown *v119; // rcx
  int v120[2]; // [rsp+40h] [rbp-51h] BYREF
  __int64 v121; // [rsp+48h] [rbp-49h] BYREF
  IUnknown *pProxy; // [rsp+50h] [rbp-41h] BYREF
  __int64 v123; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v124[8]; // [rsp+60h] [rbp-31h] BYREF
  const WCHAR *v125; // [rsp+68h] [rbp-29h] BYREF
  int v126; // [rsp+70h] [rbp-21h] BYREF
  const WCHAR *v127; // [rsp+78h] [rbp-19h] BYREF
  const WCHAR *v128; // [rsp+80h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-9h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+57h]

  v125 = a1;
  v127 = a2;
  v128 = a4;
  pProxy = 0LL;
  v121 = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Package", 0x28u, &hstringHeader, &string);
  if ( v7 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_0450ce77_af0d_40ac_93fd_1e5d48c89419, &pProxy);
  v9 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
      (const char *)(unsigned int)ActivationFactory);
    v10 = pProxy;
    if ( pProxy )
    {
      pProxy = 0LL;
      ((void (__fastcall *)(IUnknown *))v10->lpVtbl->Release)(v10);
    }
    return v9;
  }
  v12 = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, (OLECHAR *)0xFFFFFFFFFFFFFFFFLL, 0, 3u, 0LL, 0x40u);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x34,
      (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
      (const char *)(unsigned int)v12);
  v14 = pProxy;
  AddRef = pProxy->lpVtbl[15].AddRef;
  v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v125, v13);
  v17 = ((__int64 (__fastcall *)(IUnknown *, _QWORD, PVOID, __int64 *))AddRef)(
          v14,
          0LL,
          v16[1].Reserved.Reserved1,
          &v121);
  v9 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35,
      (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
      (const char *)(unsigned int)v17);
    v18 = v121;
    if ( v121 )
    {
      v121 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v19 = pProxy;
    if ( pProxy )
    {
      pProxy = 0LL;
      ((void (__fastcall *)(IUnknown *))v19->lpVtbl->Release)(v19);
    }
    return v9;
  }
  v126 = 0;
  if ( (int)IsDeveloperModeEnabled(&v126) < 0 || !v126 )
  {
    v124[0] = 0;
    v20 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v121 + 320LL))(v121, v124);
    v9 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E,
        (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
        (const char *)(unsigned int)v20);
      v21 = v121;
      if ( v121 )
      {
        v121 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      v22 = pProxy;
      if ( pProxy )
      {
        pProxy = 0LL;
        ((void (__fastcall *)(IUnknown *))v22->lpVtbl->Release)(v22);
      }
      return v9;
    }
    if ( !v124[0] )
    {
      v9 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3F,
        (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
        (const char *)0x80070057LL);
      v23 = v121;
      if ( v121 )
      {
        v121 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
      v24 = pProxy;
      if ( pProxy )
      {
        pProxy = 0LL;
        ((void (__fastcall *)(IUnknown *))v24->lpVtbl->Release)(v24);
      }
      return v9;
    }
  }
  v123 = 0LL;
  *(_QWORD *)v120 = 0LL;
  string = 0LL;
  v25 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.PackagePolicy", 0x2Eu, &hstringHeader, &string);
  if ( v25 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v25);
    JUMPOUT(0x180007FADLL);
  }
  v26 = string;
  if ( v123 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v123 + 16LL))(v123);
  v27 = RoGetActivationFactory(v26, &GUID_93b105c2_0759_4c56_b8da_6e8f72ac464e, &v123);
  v9 = v27;
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
      (const char *)(unsigned int)v27);
    v29 = v123;
    if ( v123 )
    {
      v123 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    v30 = v121;
    if ( v121 )
    {
      v121 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    }
    v31 = pProxy;
    if ( pProxy )
    {
      pProxy = 0LL;
      ((void (__fastcall *)(IUnknown *))v31->lpVtbl->Release)(v31);
    }
    return v9;
  }
  v32 = v123;
  v33 = *(__int64 (__fastcall **)(__int64, __int64, PVOID, _QWORD, int *))(*(_QWORD *)v123 + 488LL);
  v34 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v127, v28);
  v35 = v33(v32, v121, v34[1].Reserved.Reserved1, a3, v120);
  v9 = v35;
  if ( v35 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
      (const char *)(unsigned int)v35);
    v36 = *(_QWORD *)v120;
    if ( *(_QWORD *)v120 )
    {
      *(_QWORD *)v120 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    }
    v37 = v123;
    if ( v123 )
    {
      v123 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    }
    v38 = v121;
    if ( v121 )
    {
      v121 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    }
    v39 = pProxy;
    if ( pProxy )
    {
      pProxy = 0LL;
      ((void (__fastcall *)(IUnknown *))v39->lpVtbl->Release)(v39);
    }
    return v9;
  }
  if ( !*(_QWORD *)v120 )
  {
    string = 0LL;
    v64 = WindowsCreateStringReference(
            L"Windows.Internal.StateRepository.PackagePolicy",
            0x2Eu,
            &hstringHeader,
            &string);
    if ( v64 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v64);
      __debugbreak();
    }
    v65 = string;
    v66 = *(_QWORD *)v120;
    if ( *(_QWORD *)v120 )
    {
      *(_QWORD *)v120 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
    }
    *(_QWORD *)v120 = 0LL;
    v125 = 0LL;
    v9 = RoActivateInstance(v65, &v125);
    if ( (v9 & 0x80000000) == 0 )
    {
      v67 = memcmp_0(&GUID_d8cc81b3_171d_4e8b_8663_79cc87408d04, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, 0x10uLL);
      v68 = v125;
      if ( !v67 )
      {
        *(_QWORD *)v120 = v125;
LABEL_99:
        if ( (v9 & 0x80000000) != 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x49,
            (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
            (const char *)v9);
          v69 = *(_QWORD *)v120;
          if ( *(_QWORD *)v120 )
          {
            *(_QWORD *)v120 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
          }
          v70 = v123;
          if ( v123 )
          {
            v123 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
          }
          v71 = v121;
          if ( v121 )
          {
            v121 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
          }
          v72 = pProxy;
          if ( pProxy )
          {
            pProxy = 0LL;
            ((void (__fastcall *)(IUnknown *))v72->lpVtbl->Release)(v72);
          }
          return v9;
        }
        v73 = (*(__int64 (__fastcall **)(const WCHAR *, __int64))(*(_QWORD *)v68 + 136LL))(v68, v121);
        v9 = v73;
        if ( v73 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4A,
            (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
            (const char *)(unsigned int)v73);
          v75 = *(_QWORD *)v120;
          if ( *(_QWORD *)v120 )
          {
            *(_QWORD *)v120 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
          }
          v76 = v123;
          if ( v123 )
          {
            v123 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
          }
          v77 = v121;
          if ( v121 )
          {
            v121 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v77 + 16LL))(v77);
          }
          v78 = pProxy;
          if ( pProxy )
          {
            pProxy = 0LL;
            ((void (__fastcall *)(IUnknown *))v78->lpVtbl->Release)(v78);
          }
          return v9;
        }
        v79 = *(_QWORD *)v120;
        v80 = *(__int64 (__fastcall **)(__int64, PVOID))(**(_QWORD **)v120 + 152LL);
        v81 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v127, v74);
        v82 = v80(v79, v81[1].Reserved.Reserved1);
        v9 = v82;
        if ( v82 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4B,
            (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
            (const char *)(unsigned int)v82);
          v83 = *(_QWORD *)v120;
          if ( *(_QWORD *)v120 )
          {
            *(_QWORD *)v120 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v83 + 16LL))(v83);
          }
          v84 = v123;
          if ( v123 )
          {
            v123 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v84 + 16LL))(v84);
          }
          v85 = v121;
          if ( v121 )
          {
            v121 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v85 + 16LL))(v85);
          }
          v86 = pProxy;
          if ( pProxy )
          {
            pProxy = 0LL;
            ((void (__fastcall *)(IUnknown *))v86->lpVtbl->Release)(v86);
          }
          return v9;
        }
        v87 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v120 + 168LL))(*(_QWORD *)v120, a3);
        v9 = v87;
        if ( v87 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4C,
            (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
            (const char *)(unsigned int)v87);
          v88 = *(_QWORD *)v120;
          if ( *(_QWORD *)v120 )
          {
            *(_QWORD *)v120 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v88 + 16LL))(v88);
          }
          v89 = v123;
          if ( v123 )
          {
            v123 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v89 + 16LL))(v89);
          }
          v90 = v121;
          if ( v121 )
          {
            v121 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v90 + 16LL))(v90);
          }
          v91 = pProxy;
          if ( pProxy )
          {
            pProxy = 0LL;
            ((void (__fastcall *)(IUnknown *))v91->lpVtbl->Release)(v91);
          }
          return v9;
        }
        v92 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v120 + 216LL))(*(_QWORD *)v120, a5);
        v9 = v92;
        if ( v92 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4D,
            (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
            (const char *)(unsigned int)v92);
          v94 = *(_QWORD *)v120;
          if ( *(_QWORD *)v120 )
          {
            *(_QWORD *)v120 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v94 + 16LL))(v94);
          }
          v95 = v123;
          if ( v123 )
          {
            v123 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v95 + 16LL))(v95);
          }
          v96 = v121;
          if ( v121 )
          {
            v121 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v96 + 16LL))(v96);
          }
          v97 = pProxy;
          if ( pProxy )
          {
            pProxy = 0LL;
            ((void (__fastcall *)(IUnknown *))v97->lpVtbl->Release)(v97);
          }
          return v9;
        }
        if ( a4 )
        {
          v98 = *(_QWORD *)v120;
          v99 = *(__int64 (__fastcall **)(__int64, PVOID))(**(_QWORD **)v120 + 200LL);
          v100 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v128, v93);
          v101 = v99(v98, v100[1].Reserved.Reserved1);
          v9 = v101;
          if ( v101 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x51,
              (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
              (const char *)(unsigned int)v101);
            v102 = *(_QWORD *)v120;
            if ( *(_QWORD *)v120 )
            {
              *(_QWORD *)v120 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v102 + 16LL))(v102);
            }
            v103 = v123;
            if ( v123 )
            {
              v123 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v103 + 16LL))(v103);
            }
            v104 = v121;
            if ( v121 )
            {
              v121 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v104 + 16LL))(v104);
            }
            v105 = pProxy;
            if ( pProxy )
            {
              pProxy = 0LL;
              ((void (__fastcall *)(IUnknown *))v105->lpVtbl->Release)(v105);
            }
            return v9;
          }
        }
        else
        {
          v106 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v120 + 184LL))(*(_QWORD *)v120);
          v9 = v106;
          if ( v106 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x55,
              (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
              (const char *)(unsigned int)v106);
            v107 = *(_QWORD *)v120;
            if ( *(_QWORD *)v120 )
            {
              *(_QWORD *)v120 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v107 + 16LL))(v107);
            }
            v108 = v123;
            if ( v123 )
            {
              v123 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v108 + 16LL))(v108);
            }
            v109 = v121;
            if ( v121 )
            {
              v121 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v109 + 16LL))(v109);
            }
            v110 = pProxy;
            if ( pProxy )
            {
              pProxy = 0LL;
              ((void (__fastcall *)(IUnknown *))v110->lpVtbl->Release)(v110);
            }
            return v9;
          }
        }
        v111 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v123 + 48LL))(v123, *(_QWORD *)v120);
        v9 = v111;
        if ( v111 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x58,
            (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
            (const char *)(unsigned int)v111);
          v112 = *(_QWORD *)v120;
          if ( *(_QWORD *)v120 )
          {
            *(_QWORD *)v120 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v112 + 16LL))(v112);
          }
          v113 = v123;
          if ( v123 )
          {
            v123 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v113 + 16LL))(v113);
          }
          v114 = v121;
          if ( v121 )
          {
            v121 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v114 + 16LL))(v114);
          }
          v115 = pProxy;
          if ( pProxy )
          {
            pProxy = 0LL;
            ((void (__fastcall *)(IUnknown *))v115->lpVtbl->Release)(v115);
          }
          return v9;
        }
        goto LABEL_180;
      }
      v9 = (**(__int64 (__fastcall ***)(const WCHAR *, GUID *, int *))v125)(
             v125,
             &GUID_d8cc81b3_171d_4e8b_8663_79cc87408d04,
             v120);
      (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v125 + 16LL))(v125);
    }
    v68 = *(const WCHAR **)v120;
    goto LABEL_99;
  }
  v40 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v120 + 216LL))(*(_QWORD *)v120, a5);
  v9 = v40;
  if ( v40 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C,
      (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
      (const char *)(unsigned int)v40);
    v42 = *(const WCHAR **)v120;
    if ( *(_QWORD *)v120 )
    {
      *(_QWORD *)v120 = 0LL;
      (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v42 + 16LL))(v42);
    }
    v43 = v123;
    if ( v123 )
    {
      v123 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
    }
    v44 = v121;
    if ( v121 )
    {
      v121 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    }
    v45 = pProxy;
    if ( pProxy )
    {
      pProxy = 0LL;
      ((void (__fastcall *)(IUnknown *))v45->lpVtbl->Release)(v45);
    }
    return v9;
  }
  if ( a4 )
  {
    v46 = *(const WCHAR **)v120;
    v47 = *(__int64 (__fastcall **)(const WCHAR *, PVOID))(**(_QWORD **)v120 + 200LL);
    v48 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v128, v41);
    v49 = v47(v46, v48[1].Reserved.Reserved1);
    v9 = v49;
    if ( v49 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x60,
        (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
        (const char *)(unsigned int)v49);
      v50 = *(const WCHAR **)v120;
      if ( *(_QWORD *)v120 )
      {
        *(_QWORD *)v120 = 0LL;
        (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v50 + 16LL))(v50);
      }
      v51 = v123;
      if ( v123 )
      {
        v123 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
      }
      v52 = v121;
      if ( v121 )
      {
        v121 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
      }
      v53 = pProxy;
      if ( pProxy )
      {
        pProxy = 0LL;
        ((void (__fastcall *)(IUnknown *))v53->lpVtbl->Release)(v53);
      }
      return v9;
    }
  }
  else
  {
    v54 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v120 + 184LL))(*(_QWORD *)v120);
    v9 = v54;
    if ( v54 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x64,
        (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
        (const char *)(unsigned int)v54);
      v55 = *(const WCHAR **)v120;
      if ( *(_QWORD *)v120 )
      {
        *(_QWORD *)v120 = 0LL;
        (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v55 + 16LL))(v55);
      }
      v56 = v123;
      if ( v123 )
      {
        v123 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
      }
      v57 = v121;
      if ( v121 )
      {
        v121 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
      }
      v58 = pProxy;
      if ( pProxy )
      {
        pProxy = 0LL;
        ((void (__fastcall *)(IUnknown *))v58->lpVtbl->Release)(v58);
      }
      return v9;
    }
  }
  v59 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v123 + 56LL))(v123, *(_QWORD *)v120);
  v9 = v59;
  if ( v59 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x67,
      (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
      (const char *)(unsigned int)v59);
    v60 = *(const WCHAR **)v120;
    if ( *(_QWORD *)v120 )
    {
      *(_QWORD *)v120 = 0LL;
      (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v60 + 16LL))(v60);
    }
    v61 = v123;
    if ( v123 )
    {
      v123 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
    }
    v62 = v121;
    if ( v121 )
    {
      v121 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
    }
    v63 = pProxy;
    if ( pProxy )
    {
      pProxy = 0LL;
      ((void (__fastcall *)(IUnknown *))v63->lpVtbl->Release)(v63);
    }
    return v9;
  }
LABEL_180:
  v116 = *(const WCHAR **)v120;
  if ( *(_QWORD *)v120 )
  {
    *(_QWORD *)v120 = 0LL;
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v116 + 16LL))(v116);
  }
  v117 = v123;
  if ( v123 )
  {
    v123 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v117 + 16LL))(v117);
  }
  v118 = v121;
  if ( v121 )
  {
    v121 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v118 + 16LL))(v118);
  }
  v119 = pProxy;
  if ( pProxy )
  {
    pProxy = 0LL;
    ((void (__fastcall *)(IUnknown *))v119->lpVtbl->Release)(v119);
  }
  return 0LL;
}
