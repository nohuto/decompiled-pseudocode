/*
 * XREFs of ?AddNewSharedDistantLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@AEBUVector3@Numerics@Foundation@4@@Z @ 0x180036580
 * Callers:
 *     ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x18003628C (-Initialize@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C124 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CGlobalLightSet::AddNewSharedDistantLightWithType(__int64 a1, int a2, __int64 a3, __int64 *a4)
{
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rsi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 (__fastcall ***v17)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v18)(_QWORD, GUID *, __int64 *); // rsi
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 (__fastcall ***v22)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v23; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 (__fastcall ***v27)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v28; // rcx
  __int64 (__fastcall ***v29)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v30; // rcx
  __int64 (__fastcall ***v31)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v32; // rcx
  __int64 (__fastcall ***v33)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-40h] BYREF
  __int64 v34; // [rsp+28h] [rbp-38h] BYREF
  __int64 v35[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v36; // [rsp+40h] [rbp-20h] BYREF
  int v37; // [rsp+48h] [rbp-18h]
  _DWORD Buffer[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v39; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v8 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                             + 32LL);
  v35[1] = (__int64)v8;
  if ( v8 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v8)[1])(v8);
  v34 = 0LL;
  v9 = **v8;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v34);
  v10 = v9(v8, &GUID_735081dc_5e24_45da_a38f_e32cc349a9a0, &v34);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v10,
      (int)v33);
    v25 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v8)[2])(v8);
    return v11;
  }
  v33 = 0LL;
  v12 = v34;
  v13 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v34 + 72LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v33);
  v14 = v13(v12, &v33);
  v11 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v14,
      (int)v33);
    v29 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v33;
    if ( v33 )
    {
      v33 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v29)[2])(v29);
    }
    v30 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    }
    goto LABEL_36;
  }
  v15 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*v33)[9])(v33, a3);
  v11 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v15,
      (int)v33);
    v31 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v33;
    if ( v33 )
    {
      v33 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v31)[2])(v31);
    }
    v32 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
    goto LABEL_36;
  }
  v36 = *a4;
  v37 = *((_DWORD *)a4 + 2);
  v16 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v33)[11])(v33, &v36);
  v11 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v16,
      (int)v33);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v33);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v34);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v8)[2])(v8);
    return v11;
  }
  v35[0] = 0LL;
  v17 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v33;
  v18 = **v33;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v35);
  v19 = v18(v17, &GUID_41a6d7c2_2e5d_4bc1_b09e_8f0a03e3d8d3, v35);
  v11 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v19,
      (int)v33);
    v26 = v35[0];
    if ( v35[0] )
    {
      v35[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v27 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v33;
    if ( v33 )
    {
      v33 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v27)[2])(v27);
    }
    v28 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
LABEL_36:
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v8)[2])(v8);
    return v11;
  }
  Buffer[1] = 0;
  Buffer[0] = a2;
  v20 = v35[0];
  v35[0] = 0LL;
  v39 = v20;
  if ( !RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 16), Buffer, 0x10u, 0LL) )
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)0x8007000ELL,
      (int)v33);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v35);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v33);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v34);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v8)[2])(v8);
    return v11;
  }
  v21 = v35[0];
  if ( v35[0] )
  {
    v35[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v33;
  if ( v33 )
  {
    v33 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v22)[2])(v22);
  }
  v23 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v8)[2])(v8);
  return 0LL;
}
