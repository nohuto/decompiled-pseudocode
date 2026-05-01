/*
 * XREFs of ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VIPositionerSelector@Cortana@TwinUI@@U?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1803750FC
 * Callers:
 *     ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180374FC0 (-RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??R?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@QEBAXPEAVIPositionerSelector@Cortana@TwinUI@@@Z @ 0x180371D78 (--R-$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@QEBAXPEAVIPositionerSelector@Co.c)
 *     ?_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180376DAC (-_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18037819C (-_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaSharedExperienceManager::RuntimeClassInitialize(
        CortanaSharedExperienceManager *this,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, char *),
        __int64 *a4)
{
  __int64 (__fastcall *v7)(_QWORD, GUID *, char *); // rdi
  int v8; // eax
  __int64 v9; // rcx
  int ShellExperienceView; // ebx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, __int64, _QWORD); // rbx
  __int64 v18; // rdx
  __int64 (__fastcall ***v19)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v20)(_QWORD, GUID *, char *); // rdi
  __int64 v21; // rcx
  __int64 v22; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v24)(_QWORD, GUID *, char *); // [rsp+40h] [rbp+8h] BYREF
  __int64 *v25; // [rsp+58h] [rbp+20h]

  v25 = a4;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 51, a2);
  v7 = **a3;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 60);
  v8 = v7(a3, &GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e, (char *)this + 480);
  ShellExperienceView = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x151,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
LABEL_3:
    v12 = *a4;
    *a4 = 0LL;
    if ( v12 )
      wistd::default_delete<TwinUI::Cortana::IPositionerSelector>::operator()(v11, v12);
    return (unsigned int)ShellExperienceView;
  }
  v14 = *a4;
  *a4 = 0LL;
  v15 = *((_QWORD *)this + 53);
  *((_QWORD *)this + 53) = v14;
  if ( v15 )
    wistd::default_delete<TwinUI::Cortana::IPositionerSelector>::operator()(v9, v15);
  v24 = 0LL;
  v16 = *((_QWORD *)this + 53);
  v17 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v16 + 16LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
  ShellExperienceView = v17(v16, 1LL, &v24);
  if ( ShellExperienceView < 0 )
  {
    v18 = 341LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)ShellExperienceView);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
    goto LABEL_3;
  }
  v19 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v24;
  v20 = **v24;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 61);
  ShellExperienceView = v20(v19, &GUID_99f6b4c8_3fa6_4b31_b246_6527a04e1086, (char *)this + 488);
  if ( ShellExperienceView < 0 )
  {
    v18 = 342LL;
    goto LABEL_10;
  }
  ShellExperienceView = CortanaSharedExperienceManager::_RegisterMessages(this);
  if ( ShellExperienceView < 0 )
  {
    v18 = 344LL;
    goto LABEL_10;
  }
  ShellExperienceView = CortanaSharedExperienceManager::_CreateShellExperienceView(this);
  if ( ShellExperienceView < 0 )
  {
    v18 = 345LL;
    goto LABEL_10;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
  v22 = *a4;
  *a4 = 0LL;
  if ( v22 )
    wistd::default_delete<TwinUI::Cortana::IPositionerSelector>::operator()(v21, v22);
  return 0LL;
}
