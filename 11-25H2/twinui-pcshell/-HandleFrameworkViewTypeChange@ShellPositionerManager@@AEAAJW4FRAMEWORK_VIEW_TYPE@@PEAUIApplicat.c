/*
 * XREFs of ?HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x18012BDCC
 * Callers:
 *     ?FrameworkViewTypeChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180048890 (-FrameworkViewTypeChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TY.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x18012CFF0 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18012D3A8 (-GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@1@Z @ 0x18029DF9C (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?UpdatePositionerPriorityForFrameworkViewType@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1804DAAA8 (-UpdatePositionerPriorityForFrameworkViewType@ShellPositionerManager@@AEAAJPEAUIShellPositionerP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ShellPositionerManager::HandleFrameworkViewTypeChange(
        ShellPositionerManager *a1,
        unsigned int a2,
        struct IApplicationView *a3,
        __int64 a4)
{
  int PositionerPriorityForView; // eax
  unsigned int v9; // ebx
  unsigned int v10; // r13d
  int PositionerForMonitor; // eax
  __int64 v12; // rcx
  struct IShellPositionerPriority *v13; // rcx
  struct IShellPositionerPriority *v14; // rbx
  __int64 (__fastcall *v15)(struct IShellPositionerPriority *, __int64 *); // rdi
  int updated; // eax
  __int64 v17; // rdx
  unsigned int v18; // edi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v22; // rcx
  struct IShellPositionerPriority *v23; // rcx
  __int64 v24; // [rsp+30h] [rbp-20h] BYREF
  __int64 v25; // [rsp+38h] [rbp-18h] BYREF
  struct IShellPositionerPriority *v26; // [rsp+40h] [rbp-10h] BYREF
  __int64 v27; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v26 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
  PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(a1, a3, &v26);
  v9 = PositionerPriorityForView;
  if ( PositionerPriorityForView < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36F,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)PositionerPriorityForView);
LABEL_22:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
    return v9;
  }
  v10 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v26 + 24LL))(v26);
  v24 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
  PositionerForMonitor = ShellPositionerManager::GetPositionerForMonitor(
                           v10,
                           a4,
                           &GUID_ee010e17_919a_4068_868b_675acf787303,
                           &v24);
  v9 = PositionerForMonitor;
  if ( PositionerForMonitor < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x374,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)PositionerForMonitor);
    v12 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    return v9;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, struct IApplicationView *, _QWORD))(*(_QWORD *)v24 + 56LL))(
          v24,
          a3,
          a2) )
  {
    v25 = 0LL;
    v14 = v26;
    v15 = *(__int64 (__fastcall **)(struct IShellPositionerPriority *, __int64 *))(*(_QWORD *)v26 + 64LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
    updated = v15(v14, &v25);
    v9 = updated;
    if ( updated >= 0 )
    {
      updated = ShellPositionerManager::UpdatePositionerPriorityForFrameworkViewType(a1, v25, a3, a4, a2);
      v9 = updated;
      if ( updated >= 0 )
      {
        v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 24LL))(v25);
        v27 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
        v19 = ShellPositionerManager::GetPositionerForMonitor(v18, a4, &GUID_ee010e17_919a_4068_868b_675acf787303, &v27);
        v9 = v19;
        if ( v19 >= 0 )
        {
          v19 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a3 + 272LL))(a3, v25);
          v9 = v19;
          if ( v19 >= 0 )
          {
            ShellPositionerManager::PerformPositionerHandoff(a1, a3, v10, v18);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
            goto LABEL_25;
          }
          v20 = 911LL;
        }
        else
        {
          v20 = 908LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v19);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
LABEL_21:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
        goto LABEL_22;
      }
      v17 = 903LL;
    }
    else
    {
      v17 = 900LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)updated);
    goto LABEL_21;
  }
  (*(void (__fastcall **)(__int64, struct IApplicationView *, _QWORD))(*(_QWORD *)v24 + 64LL))(v24, a3, a2);
LABEL_25:
  v22 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return 0LL;
}
