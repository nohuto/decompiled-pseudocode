/*
 * XREFs of ?QuerySnapView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x1805025E0
 * Callers:
 *     ?QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x1805021EC (-QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@P.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1804AAD7C (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowArrangementOperation::QuerySnapView(
        __int64 a1,
        struct IApplicationView *a2,
        int a3,
        _DWORD *a4)
{
  int v8; // r13d
  int v9; // edi
  int ViewLayoutBehaviorFlags; // ebx
  __int64 v11; // rdx
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, _QWORD, GUID *, int *); // rbx
  int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  char v20; // bl
  int v21; // edi
  __int64 v22; // rdx
  char v23; // r13
  __int64 v24; // rdi
  __int64 (__fastcall *v25)(__int64, _QWORD, __int64, GUID *, int *); // rbx
  int v26; // eax
  int v27; // ecx
  unsigned int v28; // [rsp+30h] [rbp-30h] BYREF
  int v29[2]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v30; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64), 5LL);
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64), 1LL);
  if ( !(*(unsigned int (__fastcall **)(_QWORD, struct IApplicationView *))(**(_QWORD **)(a1 + 64) + 184LL))(
          *(_QWORD *)(a1 + 64),
          a2) )
    ++v9;
  v28 = 0;
  ViewLayoutBehaviorFlags = GetViewLayoutBehaviorFlags(a2, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&v28);
  if ( ViewLayoutBehaviorFlags < 0 )
  {
    v11 = 138LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
      (const char *)(unsigned int)ViewLayoutBehaviorFlags);
    return (unsigned int)ViewLayoutBehaviorFlags;
  }
  v13 = *(__int64 **)(a1 + 64);
  v14 = *v13;
  if ( v8 == 2 )
  {
    if ( !(*(unsigned int (__fastcall **)(__int64 *, struct IApplicationView *))(v14 + 184))(v13, a2) )
    {
      ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IApplicationView *, __int64))(**(_QWORD **)(a1 + 64) + 248LL))(
                                  *(_QWORD *)(a1 + 64),
                                  0LL,
                                  a2,
                                  1LL);
      if ( ViewLayoutBehaviorFlags < 0 )
      {
        v11 = 151LL;
        goto LABEL_5;
      }
    }
    v28 = 0;
    ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, _QWORD, unsigned int *))(**(_QWORD **)(a1 + 64) + 152LL))(
                                *(_QWORD *)(a1 + 64),
                                a2,
                                0LL,
                                &v28);
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v11 = 156LL;
      goto LABEL_5;
    }
    if ( a3 == 1 && v28 || a3 == 2 && v28 != 1 )
    {
      *(_QWORD *)v29 = 0LL;
      v15 = *(_QWORD *)(a1 + 64);
      v16 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, int *))(*(_QWORD *)v15 + 96LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v29);
      v17 = v16(v15, 0LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, v29);
      ViewLayoutBehaviorFlags = v17;
      if ( v17 < 0 )
      {
        v18 = 164LL;
LABEL_23:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
          (const char *)(unsigned int)v17);
LABEL_24:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v29);
        return (unsigned int)ViewLayoutBehaviorFlags;
      }
      v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 64) + 256LL))(*(_QWORD *)(a1 + 64), 0LL);
      ViewLayoutBehaviorFlags = v17;
      if ( v17 < 0 )
      {
        v18 = 165LL;
        goto LABEL_23;
      }
      v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 64) + 224LL))(
              *(_QWORD *)(a1 + 64),
              *(_QWORD *)v29,
              1LL);
      ViewLayoutBehaviorFlags = v17;
      if ( v17 < 0 )
      {
        v18 = 166LL;
        goto LABEL_23;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v29);
    }
    return 0LL;
  }
  if ( v9 == 1 )
  {
    v19 = (*(__int64 (__fastcall **)(__int64 *, struct IApplicationView *))(v14 + 184))(v13, a2);
    v20 = v28;
    if ( !v19 )
    {
      v21 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 64)
                                                                                                 + 232LL))(
              *(_QWORD *)(a1 + 64),
              a2,
              0LL,
              v28,
              0LL);
      if ( v21 < 0 )
      {
        v22 = 175LL;
LABEL_30:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
          (const char *)(unsigned int)v21);
        return (unsigned int)v21;
      }
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 264LL))(*(_QWORD *)(a1 + 64), 4LL);
    v21 = (*(__int64 (__fastcall **)(_QWORD, bool, _QWORD, _QWORD))(**(_QWORD **)(a1 + 64) + 240LL))(
            *(_QWORD *)(a1 + 64),
            a3 == 1,
            0LL,
            0LL);
    if ( v21 < 0 )
    {
      v22 = 181LL;
      goto LABEL_30;
    }
    *a4 |= (v20 & 2) != 0 ? 12 : 6;
  }
  else
  {
    if ( (*(unsigned int (__fastcall **)(__int64 *, __int64))(v14 + 88))(v13, 2LL) )
    {
      v23 = 1;
      *(_QWORD *)v29 = 0LL;
      v24 = *(_QWORD *)(a1 + 64);
      v25 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v24 + 112LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v29);
      v26 = v25(v24, 0LL, 2LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, v29);
      ViewLayoutBehaviorFlags = v26;
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC7,
          (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
          (const char *)(unsigned int)v26);
        goto LABEL_24;
      }
      v30 = 0LL;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)v29 + 104LL))(*(_QWORD *)v29, 0LL, &v30);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v29);
    }
    else
    {
      v23 = 0;
    }
    ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, bool, _QWORD, _QWORD))(**(_QWORD **)(a1 + 64) + 232LL))(
                                *(_QWORD *)(a1 + 64),
                                a2,
                                a3 != 1,
                                v28,
                                0LL);
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v11 = 207LL;
      goto LABEL_5;
    }
    if ( (v28 & 2) != 0 || (v27 = 6, v23) )
      v27 = 12;
    *a4 |= v27;
  }
  return 0LL;
}
