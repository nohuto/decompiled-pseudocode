/*
 * XREFs of ?UpdatePositionerPriorityForActivation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@@Z @ 0x18012D1C8
 * Callers:
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@1PEAKPEAUtagRECT@@@Z @ 0x18012C244 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18012C090 (-PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?IsPositionerTypePersistent@ShellPositionerManager@@AEAA_NW4SHELL_POSITIONER_TYPE@@@Z @ 0x18012D378 (-IsPositionerTypePersistent@ShellPositionerManager@@AEAA_NW4SHELL_POSITIONER_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ShellPositionerManager::UpdatePositionerPriorityForActivation(
        ShellPositionerManager *this,
        struct IShellPositionerPriority *a2,
        struct IApplicationView *a3,
        IUnknown *a4,
        struct IUnknown *a5)
{
  HRESULT v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  unsigned int i; // esi
  void *v13; // rbx
  int (__fastcall *v14)(void *, _QWORD, GUID *, __int64 *); // rdi
  bool v15; // zf
  unsigned int (__fastcall *v16)(__int64, struct IApplicationView *, struct IUnknown *); // rax
  void *v17; // rcx
  void *v19; // rcx
  void *ppvOut; // [rsp+30h] [rbp-10h] BYREF
  __int64 v21; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v9 = IUnknown_QueryService(
         a4,
         &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
         &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
         &ppvOut);
  v11 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C9,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v9);
    v19 = ppvOut;
    if ( ppvOut )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v19 + 16LL))(v19);
    }
    return v11;
  }
  else
  {
    for ( i = 0; i < 0xB; ++i )
    {
      if ( !(unsigned __int8)ShellPositionerManager::IsPositionerTypePersistent(v10, i) )
      {
        v21 = 0LL;
        v13 = ppvOut;
        v14 = *(int (__fastcall **)(void *, _QWORD, GUID *, __int64 *))(*(_QWORD *)ppvOut + 24LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
        if ( v14(v13, i, &GUID_ee010e17_919a_4068_868b_675acf787303, &v21) >= 0 )
        {
          v15 = (*(unsigned int (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)a2 + 32LL))(
                  a2,
                  i) == 0;
          v16 = *(unsigned int (__fastcall **)(__int64, struct IApplicationView *, struct IUnknown *))(*(_QWORD *)v21 + 24LL);
          if ( v15 )
          {
            if ( v16(v21, a3, a5) )
              (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, i);
          }
          else if ( !v16(v21, a3, a5) )
          {
            (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, i);
          }
        }
        v10 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
      }
    }
    ShellPositionerManager::PersistPositionerPriority(this, a3);
    v17 = ppvOut;
    if ( ppvOut )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    return 0LL;
  }
}
