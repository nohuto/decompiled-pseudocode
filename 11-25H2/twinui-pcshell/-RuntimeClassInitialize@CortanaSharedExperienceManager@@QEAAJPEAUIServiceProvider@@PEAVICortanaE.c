/*
 * XREFs of ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VIPositionerSelector@Cortana@TwinUI@@U?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x18036D994
 * Callers:
 *     ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18036D850 (-RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18036F540 (-_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180370904 (-_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaSharedExperienceManager::RuntimeClassInitialize(
        CortanaSharedExperienceManager *this,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, char *),
        void **a4)
{
  __int64 (__fastcall *v7)(_QWORD, GUID *, char *); // rdi
  int v8; // eax
  int ShellExperienceView; // ebx
  void *v10; // rcx
  void *v12; // rax
  void *v13; // rcx
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, __int64, _QWORD); // rbx
  __int64 v16; // rdx
  __int64 (__fastcall ***v17)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v18)(_QWORD, GUID *, char *); // rdi
  void *v19; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 (__fastcall ***v21)(_QWORD, GUID *, char *); // [rsp+50h] [rbp+8h] BYREF
  void **v22; // [rsp+68h] [rbp+20h]

  v22 = a4;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 51, a2);
  v7 = **a3;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 60);
  v8 = v7(a3, &_uuidof__AUIDisposable_Platform__, (char *)this + 480);
  ShellExperienceView = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x150,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    v10 = *a4;
    *a4 = 0LL;
    if ( !v10 )
      return (unsigned int)ShellExperienceView;
LABEL_3:
    operator delete(v10, (const struct std::nothrow_t *)8);
    return (unsigned int)ShellExperienceView;
  }
  v12 = *a4;
  *a4 = 0LL;
  v13 = (void *)*((_QWORD *)this + 53);
  *((_QWORD *)this + 53) = v12;
  if ( v13 )
    operator delete(v13, (const struct std::nothrow_t *)8);
  v21 = 0LL;
  v14 = *((_QWORD *)this + 53);
  v15 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v14 + 16LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
  ShellExperienceView = v15(v14, 1LL, &v21);
  if ( ShellExperienceView < 0 )
  {
    v16 = 340LL;
    goto LABEL_9;
  }
  v17 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v21;
  v18 = **v21;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 61);
  ShellExperienceView = v18(v17, &GUID_99f6b4c8_3fa6_4b31_b246_6527a04e1086, (char *)this + 488);
  if ( ShellExperienceView < 0 )
  {
    v16 = 341LL;
    goto LABEL_9;
  }
  ShellExperienceView = CortanaSharedExperienceManager::_RegisterMessages(this);
  if ( ShellExperienceView < 0 )
  {
    v16 = 343LL;
    goto LABEL_9;
  }
  ShellExperienceView = CortanaSharedExperienceManager::_CreateShellExperienceView(this);
  if ( ShellExperienceView < 0 )
  {
    v16 = 344LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)ShellExperienceView);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
    v10 = *a4;
    *a4 = 0LL;
    if ( !v10 )
      return (unsigned int)ShellExperienceView;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
  v19 = *a4;
  *a4 = 0LL;
  if ( v19 )
    operator delete(v19, (const struct std::nothrow_t *)8);
  return 0LL;
}
