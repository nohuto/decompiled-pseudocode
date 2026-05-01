/*
 * XREFs of ?HandleTabletModeSnapping@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAUtagRECT@@@Z @ 0x180586094
 * Callers:
 *     ?SnapToLocation@SnapServiceProvider@@UEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SNAP_TO_LOCATION_FLAGS@@PEAUtagRECT@@@Z @ 0x180586480 (-SnapToLocation@SnapServiceProvider@@UEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SNAP_TO_LOCAT.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall SnapServiceProvider::HandleTabletModeSnapping(__int64 a1, GUID *a2, int a3, __int64 a4)
{
  __int64 (__fastcall *v8)(GUID *, __int64 *); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, __int64 *, GUID *, GUID *, int *); // rbx
  int v13; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, GUID *, GUID *, __int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD)); // rdi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, __int64 *); // rdi
  int v20; // eax
  __int64 v21; // rdx
  __int64 *v22; // r8
  __int64 (__fastcall ***v23)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v24)(_QWORD, GUID *, __int64 *); // rdi
  int v25; // eax
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, __int64 *); // rdi
  int v28; // eax
  __int64 v29; // rbx
  __int64 (__fastcall *v30)(__int64, GUID *, __int64 *, _QWORD); // rdi
  int v31; // eax
  int v33[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v34; // [rsp+38h] [rbp-38h] BYREF
  __int64 v35; // [rsp+40h] [rbp-30h] BYREF
  __int64 v36; // [rsp+48h] [rbp-28h] BYREF
  __int64 v37; // [rsp+50h] [rbp-20h] BYREF
  __int64 v38; // [rsp+58h] [rbp-18h] BYREF
  __int64 v39; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  __int64 (__fastcall ***v41)(_QWORD, GUID *, __int64 *); // [rsp+98h] [rbp+28h] BYREF

  v38 = 0LL;
  v8 = *(__int64 (__fastcall **)(GUID *, __int64 *))(*(_QWORD *)&a2->Data1 + 80LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v38);
  v9 = v8(a2, &v38);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v39 = 0LL;
    *(_QWORD *)v33 = 0LL;
    v11 = *(_QWORD *)(a1 + 32);
    v12 = *(__int64 (__fastcall **)(__int64, __int64 *, GUID *, GUID *, int *))(*(_QWORD *)v11 + 96LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v33);
    v13 = v12(v11, &v39, &GUID_975d55f5_ce62_42c0_868a_eda817f3871e, &GUID_975d55f5_ce62_42c0_868a_eda817f3871e, v33);
    v10 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8B,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
        (const char *)(unsigned int)v13);
LABEL_34:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v33);
      goto LABEL_35;
    }
    v41 = 0LL;
    v14 = *(_QWORD *)v33;
    v15 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD)))(**(_QWORD **)v33 + 80LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v41);
    v16 = v15(
            v14,
            &CLSID_WindowArrangementOperation,
            &GUID_83266822_9e63_4b62_a1b4_75b389df3388,
            (__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))&v41);
    v10 = v16;
    if ( v16 < 0 )
    {
      v17 = 142LL;
LABEL_32:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
        (const char *)(unsigned int)v16);
      goto LABEL_33;
    }
    if ( a3 == 2 )
    {
      v16 = (*v41)[5](v41, a2, (__int64 *)5);
      v10 = v16;
      if ( v16 < 0 )
      {
        v17 = 146LL;
        goto LABEL_32;
      }
      goto LABEL_20;
    }
    v34 = 0LL;
    v18 = *(_QWORD *)v33;
    v19 = *(__int64 (__fastcall **)(__int64, __int64 *))(**(_QWORD **)v33 + 72LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
    v20 = v19(v18, &v34);
    v10 = v20;
    if ( v20 >= 0 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 80LL))(v34, 1LL) != 2
        || (*(unsigned int (__fastcall **)(__int64, GUID *))(*(_QWORD *)v34 + 184LL))(v34, a2) )
      {
        v22 = (__int64 *)((unsigned int)(a3 != 0) + 1);
      }
      else
      {
        v22 = (__int64 *)((unsigned int)(a3 != 0) + 3);
      }
      v20 = (*v41)[5](v41, a2, v22);
      v10 = v20;
      if ( v20 >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
LABEL_20:
        if ( a4 )
        {
          v35 = 0LL;
          v23 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v41;
          v24 = **v41;
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v35);
          v25 = v24(v23, &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb, &v35);
          v10 = v25;
          if ( v25 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xA9,
              (int)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
              (const char *)(unsigned int)v25);
LABEL_23:
            Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v35);
            goto LABEL_33;
          }
          v36 = 0LL;
          v26 = v35;
          v27 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v35 + 48LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
          v28 = v27(v26, &v36);
          v10 = v28;
          if ( v28 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xAC,
              (int)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
              (const char *)(unsigned int)v28);
LABEL_26:
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
            goto LABEL_23;
          }
          v37 = 0LL;
          v29 = v36;
          v30 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *, _QWORD))(*(_QWORD *)v36 + 152LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
          v31 = v30(v29, a2, &v37, 0LL);
          v10 = v31;
          if ( v31 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xAF,
              (int)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
              (const char *)(unsigned int)v31);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
            goto LABEL_26;
          }
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v37 + 56LL))(v37, 0LL, a4);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v35);
        }
        v16 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(**(_QWORD **)v33 + 88LL))(
                *(_QWORD *)v33,
                v41);
        v10 = v16;
        if ( v16 < 0 )
        {
          v17 = 180LL;
          goto LABEL_32;
        }
LABEL_33:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v41);
        goto LABEL_34;
      }
      v21 = 163LL;
    }
    else
    {
      v21 = 151LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
      (const char *)(unsigned int)v20);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
    goto LABEL_33;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x87,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
    (const char *)(unsigned int)v9);
LABEL_35:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v38);
  return v10;
}
