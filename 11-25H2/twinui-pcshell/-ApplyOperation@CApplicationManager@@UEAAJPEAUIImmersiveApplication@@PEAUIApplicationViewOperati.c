/*
 * XREFs of ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x180117A60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180054278 (--$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImme.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x1800881A4 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CApplicationManager::ApplyOperation(
        CApplicationManager *this,
        struct IImmersiveApplication *a2,
        struct IApplicationViewOperation *a3)
{
  int v6; // r14d
  void (__fastcall *v7)(struct IApplicationViewOperation *, __int64 *); // rbx
  void (__fastcall *v8)(struct IApplicationViewOperation *, __int64 *); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  RTL_SRWLOCK *v11; // rbx
  CApplicationManager *v12; // r15
  unsigned int First; // esi
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // edi
  int v20; // eax
  __int64 v21; // rdi
  unsigned int v22; // r12d
  __int64 *v23; // rcx
  _OWORD *v24; // r8
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v30; // ecx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  unsigned __int64 v39; // r9
  __int64 v40; // rdx
  unsigned __int64 v41; // r9
  __int64 v42; // rdx
  int v43; // eax
  char *v44; // r8
  __int64 *v45; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+68h] [rbp-98h] BYREF
  __int64 v47; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v48; // [rsp+78h] [rbp-88h] BYREF
  __int64 v49; // [rsp+80h] [rbp-80h] BYREF
  struct ISyncIAMEventHandler *v50; // [rsp+88h] [rbp-78h] BYREF
  __int64 v51; // [rsp+90h] [rbp-70h] BYREF
  int v52; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v53; // [rsp+9Ch] [rbp-64h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v56; // [rsp+B0h] [rbp-50h]
  struct IImmersiveApplication *v57; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v58; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v59; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v60; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v61; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v62; // [rsp+E0h] [rbp-20h] BYREF
  CApplicationManager *v63; // [rsp+E8h] [rbp-18h]
  PSRWLOCK v64; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v65[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v66; // [rsp+118h] [rbp+18h]
  int v67; // [rsp+120h] [rbp+20h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v63 = this;
  v48 = 0;
  if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, unsigned int *))(*(_QWORD *)a3 + 168LL))(a3, &v48) >= 0 )
  {
    if ( v48 > 0x11 || (v30 = 139538, !_bittest(&v30, v48)) )
    {
      v10 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x872,
        (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)0x80070057LL);
      return v10;
    }
  }
  else
  {
    v48 = 0;
  }
  v6 = 0;
  v52 = 0;
  if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, int *))(*(_QWORD *)a3 + 104LL))(a3, &v52) >= 0 )
    v6 = 2 - (v52 != 0);
  memset(v65, 0, sizeof(v65));
  v66 = 0LL;
  v67 = 0;
  LODWORD(v50) = (*(unsigned int (__fastcall **)(struct IApplicationViewOperation *, _OWORD *))(*(_QWORD *)a3 + 152LL))(
                   a3,
                   v65) >> 31;
  v47 = 0LL;
  v7 = *(void (__fastcall **)(struct IApplicationViewOperation *, __int64 *))(*(_QWORD *)a3 + 88LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v47);
  v7(a3, &v47);
  v46 = 0LL;
  v8 = *(void (__fastcall **)(struct IApplicationViewOperation *, __int64 *))(*(_QWORD *)a3 + 184LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v46);
  v8(a3, &v46);
  v54 = 0LL;
  v56 = (*(unsigned int (__fastcall **)(struct IApplicationViewOperation *, __int64 *, char *))(*(_QWORD *)a3 + 120LL))(
          a3,
          &v54,
          (char *)&v54 + 4) >> 31;
  v53 = 0;
  v9 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, unsigned int *))(*(_QWORD *)a3 + 136LL))(a3, &v53);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x89B,
      (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v9);
    v31 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    v32 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
    return v10;
  }
  v55 = 0LL;
  v11 = CApplicationManagerUtility::g_pIAMGlobals;
  v64 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v45 = 0LL;
  v12 = (CApplicationManager *)((char *)this - 216);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v45);
  v57 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v57);
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>(
            (__int64)this - 216,
            &v57,
            &v45,
            0LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v57);
  if ( (First & 0x80000000) != 0 )
  {
    v41 = First;
    v42 = 2215LL;
LABEL_77:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v42,
      (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)v41);
    goto LABEL_73;
  }
  v59 = 0LL;
  v58 = 0LL;
  v14 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64 *, __int64 *))(*(_QWORD *)a3 + 216LL))(
          a3,
          &v59,
          &v58);
  First = v14;
  if ( v14 < 0 )
  {
    v42 = 2220LL;
LABEL_76:
    v41 = (unsigned int)v14;
    goto LABEL_77;
  }
  v15 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(*v45 + 560))(v45, v59, v58);
  First = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8AD,
      (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v15);
    v33 = (__int64)v45;
    if ( v45 )
    {
      v45 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    }
    if ( v11 )
      ReleaseSRWLockExclusive(v11);
    if ( v55 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
    v34 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    }
    v35 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    }
    return First;
  }
  v61 = 0LL;
  v60 = 0LL;
  v14 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64 *, __int64 *))(*(_QWORD *)a3 + 232LL))(
          a3,
          &v61,
          &v60);
  First = v14;
  if ( v14 < 0 )
  {
    v42 = 2225LL;
    goto LABEL_76;
  }
  v14 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(*v45 + 568))(v45, v61, v60);
  First = v14;
  if ( v14 < 0 )
  {
    v42 = 2226LL;
    goto LABEL_76;
  }
  v62 = 0LL;
  if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, __int64 *))(*(_QWORD *)a3 + 248LL))(a3, &v62) >= 0 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v45 + 592))(v45, v62);
    First = v14;
    if ( v14 < 0 )
    {
      v42 = 2232LL;
      goto LABEL_76;
    }
  }
  v16 = *(_QWORD *)a3;
  v51 = 0LL;
  if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, __int64 *))(v16 + 264))(a3, &v51) >= 0 )
  {
    v43 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(*v45 + 632))(v45, v51, 0LL);
    if ( v43 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8C5,
        (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v43);
  }
  v49 = 0LL;
  v17 = *v45;
  v49 = 0LL;
  v18 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v17 + 504))(v45, &v49);
  v19 = v18;
  if ( v18 >= 0 )
  {
    v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v49 + 144LL))(v49, v53);
    First = v20;
    if ( v20 < 0 )
    {
      v39 = (unsigned int)v20;
      v40 = 2252LL;
    }
    else
    {
      v21 = (__int64)v45;
      v22 = v48;
      v23 = &v54;
      if ( (_BYTE)v56 )
        v23 = 0LL;
      v24 = v65;
      if ( (_BYTE)v50 )
        v24 = 0LL;
      v25 = (*(__int64 (__fastcall **)(__int64 *, __int64, _OWORD *, __int64, int, _DWORD, _QWORD, __int64 *, int, unsigned int))(*v45 + 256))(
              v45,
              v47,
              v24,
              v46,
              v6,
              *((_DWORD *)v63 + 186),
              0LL,
              v23,
              1,
              v48);
      First = v25;
      if ( v25 >= 0 )
      {
        if ( v22 && ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 280LL))(v21) & 2) != 0 )
        {
          v50 = 0LL;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v50);
          if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(v12, &v50) >= 0 )
          {
            v44 = (char *)v12 + 248;
            if ( !v12 )
              v44 = 0LL;
            (*(void (__fastcall **)(struct ISyncIAMEventHandler *, _QWORD, char *, struct IImmersiveApplication *, unsigned int, int, int))(*(_QWORD *)v50 + 24LL))(
              v50,
              0LL,
              v44,
              a2,
              v22,
              5,
              1);
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v50);
        }
        if ( v49 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
        if ( v51 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
        v26 = (__int64)v45;
        if ( v45 )
        {
          v45 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        if ( v11 )
          ReleaseSRWLockExclusive(v11);
        if ( v55 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
        v27 = v46;
        if ( v46 )
        {
          v46 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        }
        v28 = v47;
        if ( v47 )
        {
          v47 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
        }
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1098,
        (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v25);
      v39 = First;
      v40 = 2265LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v40,
      (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)v39);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v49);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v51);
LABEL_73:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v45);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v64);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v55);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v46);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v47);
    return First;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8CB,
    (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)(unsigned int)v18);
  if ( v49 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
  if ( v51 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
  v36 = (__int64)v45;
  if ( v45 )
  {
    v45 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  if ( v11 )
    ReleaseSRWLockExclusive(v11);
  if ( v55 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
  v37 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  v38 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  }
  return v19;
}
