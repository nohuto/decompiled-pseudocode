/*
 * XREFs of ?RequestPrivilegedHotkeys@PrivilegedHotkeyOperations@@UEAAJIQEBUIMMERSIVE_WINDOW_MESSAGE_SERVICE_HOTKEY_REGISTRATION@@PEAUIImmersiveWindowMessageNotification@@PEAK@Z @ 0x1800B86B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800B7AB0 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEBAXXZ @ 0x1800B7E38 (-InternalAddRef@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall PrivilegedHotkeyOperations::RequestPrivilegedHotkeys(
        PrivilegedHotkeyOperations *this,
        unsigned int a2,
        const struct IMMERSIVE_WINDOW_MESSAGE_SERVICE_HOTKEY_REGISTRATION *a3,
        struct IImmersiveWindowMessageNotification *a4,
        unsigned int *a5)
{
  unsigned int *v9; // r14
  unsigned int *v10; // rbx
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(unsigned int *, GUID *, __int64 *); // rdi
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, GUID *, GUID *, __int64 *); // rdi
  int v17; // eax
  RTL_SRWLOCK *v18; // rbx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int *v22; // rcx
  unsigned int *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned int *v27; // rcx
  __int64 v28; // rcx
  unsigned int *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned int *v32; // rcx
  __int64 v33; // [rsp+30h] [rbp-10h] BYREF
  RTL_SRWLOCK *v34; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v36; // [rsp+70h] [rbp+30h] BYREF

  v9 = a5;
  *a5 = 0;
  a5 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
  v10 = 0LL;
  a5 = 0LL;
  v11 = *((_QWORD *)this + 7);
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64, GUID *, unsigned int **))(*(_QWORD *)v11 + 24LL))(
      v11,
      &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
      &a5);
    v10 = a5;
  }
  if ( !v10 )
  {
    v14 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E7,
      (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)0x80070490LL);
    v24 = a5;
    if ( a5 )
    {
      a5 = 0LL;
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v24 + 16LL))(v24);
    }
    return v14;
  }
  v36 = 0LL;
  v12 = **(__int64 (__fastcall ***)(unsigned int *, GUID *, __int64 *))v10;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
  v13 = v12(v10, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &v36);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E9,
      (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)(unsigned int)v13);
    v28 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    v29 = a5;
    if ( a5 )
    {
      a5 = 0LL;
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v29 + 16LL))(v29);
    }
    return v14;
  }
  v33 = 0LL;
  v15 = v36;
  v16 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v36 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
  v17 = v16(v15, &IID_IImmersiveWindowMessageService, &GUID_fc62ce95_8396_401a_b74f_88df0d75e112, &v33);
  v14 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EC,
      (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)(unsigned int)v17);
    v25 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    v26 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v27 = a5;
    if ( a5 )
    {
      a5 = 0LL;
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v27 + 16LL))(v27);
    }
    return v14;
  }
  v34 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  v18 = v34;
  Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalAddRef((__int64 *)&v34);
  AcquireSRWLockExclusive(v18 + 6);
  EnableIAMAccess(v18[5].Ptr, 1LL);
  v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, const struct IMMERSIVE_WINDOW_MESSAGE_SERVICE_HOTKEY_REGISTRATION *, struct IImmersiveWindowMessageNotification *, unsigned int *))(*(_QWORD *)v33 + 56LL))(
          v33,
          a2,
          a3,
          a4,
          v9);
  v14 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F3,
      (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)(unsigned int)v19);
    IamAccess::SyncIamAccess::~SyncIamAccess(&v34);
    v30 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    }
    v31 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    v32 = a5;
    if ( a5 )
    {
      a5 = 0LL;
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v32 + 16LL))(v32);
    }
    return v14;
  }
  IamAccess::SyncIamAccess::~SyncIamAccess(&v34);
  v20 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = a5;
  if ( a5 )
  {
    a5 = 0LL;
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return 0LL;
}
