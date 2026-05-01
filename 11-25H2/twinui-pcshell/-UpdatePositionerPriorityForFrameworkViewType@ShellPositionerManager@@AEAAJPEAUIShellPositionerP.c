/*
 * XREFs of ?UpdatePositionerPriorityForFrameworkViewType@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1804DAAA8
 * Callers:
 *     ?HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x18012BDCC (-HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicat.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18012C090 (-PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?IsPositionerTypePersistent@ShellPositionerManager@@AEAA_NW4SHELL_POSITIONER_TYPE@@@Z @ 0x18012D378 (-IsPositionerTypePersistent@ShellPositionerManager@@AEAA_NW4SHELL_POSITIONER_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::UpdatePositionerPriorityForFrameworkViewType(
        ShellPositionerManager *a1,
        __int64 a2,
        struct IApplicationView *a3,
        IUnknown *a4,
        unsigned int a5)
{
  HRESULT Service; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  unsigned int i; // esi
  void *v13; // rbx
  int (__fastcall *v14)(void *, _QWORD, GUID *, __int64 *); // rdi
  bool v15; // zf
  unsigned int (__fastcall *v16)(__int64, struct IApplicationView *, _QWORD); // rax
  __int64 v18; // [rsp+30h] [rbp-28h] BYREF
  void *ppvOut[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  ppvOut[0] = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppvOut);
  Service = IUnknown_QueryService(
              a4,
              &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
              &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
              ppvOut);
  v11 = Service;
  if ( Service >= 0 )
  {
    for ( i = 0; i < 0xB; ++i )
    {
      if ( !ShellPositionerManager::IsPositionerTypePersistent(v10, i) )
      {
        v18 = 0LL;
        v13 = ppvOut[0];
        v14 = *(int (__fastcall **)(void *, _QWORD, GUID *, __int64 *))(*(_QWORD *)ppvOut[0] + 24LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
        if ( v14(v13, i, &GUID_ee010e17_919a_4068_868b_675acf787303, &v18) >= 0 )
        {
          v15 = (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 32LL))(a2, i) == 0;
          v16 = *(unsigned int (__fastcall **)(__int64, struct IApplicationView *, _QWORD))(*(_QWORD *)v18 + 56LL);
          if ( v15 )
          {
            if ( v16(v18, a3, a5) )
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, i);
          }
          else if ( !v16(v18, a3, a5) )
          {
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, i);
          }
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
      }
    }
    ShellPositionerManager::PersistPositionerPriority(a1, a3);
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4FE,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)Service);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppvOut);
  return v11;
}
