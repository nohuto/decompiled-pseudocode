/*
 * XREFs of ?OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180048370
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801ABFD4 (-RemoveView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ @ 0x1801D6C40 (-SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ.c)
 *     ?FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180320148 (-FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180321648 (-SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall FullScreenPositioner::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  FullScreenPositioner *v5; // rsi
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  struct IApplicationView *v10; // rcx
  int v11; // ebx
  __int64 v12; // r14
  int (__fastcall *v13)(struct IApplicationView *, __int64 *); // rbx
  int v14; // eax
  char v15; // bl
  __int64 v16; // rcx
  int (__fastcall *v17)(struct IApplicationView *, __int64 *); // rbx
  __int64 v18; // rcx
  __int64 v19; // r15
  int (__fastcall *v20)(struct IApplicationView *, __int64 *); // rbx
  int v21; // eax
  char v22; // bl
  __int64 v23; // rcx
  struct IApplicationView *v24; // rcx
  int v25; // ebx
  int (__fastcall *v26)(struct IApplicationView *, __int64 *); // rbx
  int v27; // eax
  unsigned int v28; // ebx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v35; // [rsp+60h] [rbp+30h] BYREF

  v5 = (FullScreenPositioner *)(a1 - 144);
  if ( !*(_DWORD *)(a1 - 144 + 328) )
    return 0LL;
  v6 = a3 - 1;
  if ( !v6 )
  {
    v10 = *(struct IApplicationView **)(a1 + 80);
    if ( v10 && a2 )
    {
      if ( v10 == a2 )
        goto LABEL_64;
      v33[0] = 0LL;
      v35 = 0LL;
      if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v10)(
             v10,
             &GUID_00000000_0000_0000_c000_000000000046,
             v33) >= 0 )
      {
        v11 = (**(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
                a2,
                &GUID_00000000_0000_0000_c000_000000000046,
                &v35);
        if ( v11 >= 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33[0] + 16LL))(v33[0]);
        if ( v11 >= 0 && v33[0] == v35 )
LABEL_64:
          FullScreenPositioner::SetVisibleView(v5, 0LL);
      }
    }
    FullScreenPositioner::RemoveView(v5, a2);
    return 0LL;
  }
  v7 = v6 - 6;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        return 0LL;
      v12 = *(_QWORD *)(a1 + 72);
      v33[0] = 0LL;
      LODWORD(v35) = 0;
      v13 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 80LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v33);
      if ( v13(a2, v33) >= 0 )
      {
        v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v12 + 96LL))(v12, v33[0], &v35);
        if ( v14 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xB6,
            (int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
            (const char *)(unsigned int)v14);
        }
        else
        {
          v15 = 1;
          if ( (_DWORD)v35 )
          {
LABEL_20:
            v16 = v33[0];
            if ( v33[0] )
            {
              v33[0] = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
            }
            if ( !v15 )
              return 0LL;
            v35 = 0LL;
            v17 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 264LL);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
            if ( v17(a2, &v35) < 0 || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v35 + 24LL))(v35) != 4 )
            {
              v30 = FullScreenPositioner::SwitchToNonFullScreenApp(v5);
              v28 = v30;
              if ( v30 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x316,
                  (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
                  (const char *)(unsigned int)v30);
                v31 = v35;
                if ( v35 )
                {
                  v35 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
                }
                return v28;
              }
            }
            v18 = v35;
            if ( !v35 )
              return 0LL;
            v35 = 0LL;
LABEL_27:
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
            return 0LL;
          }
        }
      }
      v15 = 0;
      goto LABEL_20;
    }
  }
  v19 = *(_QWORD *)(a1 + 72);
  v33[0] = 0LL;
  LODWORD(v35) = 0;
  v20 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 80LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v33);
  if ( v20(a2, v33) < 0 )
    goto LABEL_34;
  v21 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v19 + 96LL))(v19, v33[0], &v35);
  if ( v21 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB6,
      (int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
      (const char *)(unsigned int)v21);
    goto LABEL_34;
  }
  v22 = 1;
  if ( !(_DWORD)v35 )
LABEL_34:
    v22 = 0;
  v23 = v33[0];
  if ( v33[0] )
  {
    v33[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  if ( !v22 )
    return 0LL;
  v24 = *(struct IApplicationView **)(a1 + 80);
  if ( v24 )
  {
    if ( v24 == a2 )
      return 0LL;
    v33[0] = 0LL;
    v35 = 0LL;
    if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v24)(
           v24,
           &GUID_00000000_0000_0000_c000_000000000046,
           v33) >= 0 )
    {
      v25 = (**(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
              a2,
              &GUID_00000000_0000_0000_c000_000000000046,
              &v35);
      if ( v25 >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33[0] + 16LL))(v33[0]);
      if ( v25 >= 0 && v33[0] == v35 )
        return 0LL;
    }
  }
  LODWORD(v35) = 0;
  v33[0] = 0LL;
  v26 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 264LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v33);
  if ( v26(a2, v33) < 0 || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v33[0] + 24LL))(v33[0]) != 4 )
  {
    if ( (!v33[0] || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v33[0] + 24LL))(v33[0]) != 6)
      && (*(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 336LL))(a2, &v35) >= 0
      && !(_DWORD)v35 )
    {
      v27 = FullScreenPositioner::SwitchToNonFullScreenApp(v5);
      v28 = v27;
      if ( v27 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2FF,
          (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
          (const char *)(unsigned int)v27);
        v29 = v33[0];
        if ( v33[0] )
        {
          v33[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        }
        return v28;
      }
    }
    goto LABEL_55;
  }
  v32 = FullScreenPositioner::FullScreenViewGetsFocus(v5, a2);
  v28 = v32;
  if ( v32 >= 0 )
  {
LABEL_55:
    v18 = v33[0];
    if ( !v33[0] )
      return 0LL;
    v33[0] = 0LL;
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2F5,
    (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
    (const char *)(unsigned int)v32);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v33);
  return v28;
}
