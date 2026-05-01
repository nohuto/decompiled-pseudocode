/*
 * XREFs of ?GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PEAUtagPOINT@@@Z @ 0x180506D74
 * Callers:
 *     ?GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PEAUtagPOINT@@@Z @ 0x180506D74 (-GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PE.c)
 *     ?MovePlacement@WindowArrangementView@@UEAAXW4PlaceModeKey@@@Z @ 0x180507E00 (-MovePlacement@WindowArrangementView@@UEAAXW4PlaceModeKey@@@Z.c)
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1805090CC (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PEAUtagPOINT@@@Z @ 0x180506D74 (-GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowArrangementView::GetPlaceModePoint(__int64 a1, int a2, unsigned int a3, _QWORD *a4)
{
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  unsigned int PlaceModePoint; // ebx
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, _QWORD, __int64, GUID *, int *); // rbx
  int v14; // eax
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, __int64, __int64, GUID *, int *); // rbx
  int v18; // eax
  __int64 v19; // rdi
  __int64 (__fastcall *v20)(__int64, _QWORD, __int64, GUID *, int *); // rbx
  int v21; // eax
  __int64 v22; // [rsp+30h] [rbp-50h] BYREF
  int v23[2]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v24; // [rsp+40h] [rbp-40h] BYREF
  __int128 v25; // [rsp+50h] [rbp-30h] BYREF
  __int128 v26; // [rsp+60h] [rbp-20h]
  __int64 v27; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  *a4 = 0LL;
  v6 = a2 - 2;
  if ( !v6 )
  {
    *(_QWORD *)v23 = 0LL;
    v19 = *(_QWORD *)(a1 + 120);
    v20 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v19 + 104LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v23);
    v21 = v20(v19, 0LL, 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v23);
    PlaceModePoint = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32F,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v21);
      goto LABEL_22;
    }
    goto LABEL_21;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    *(_QWORD *)v23 = 0LL;
    v16 = *(_QWORD *)(a1 + 120);
    v17 = *(__int64 (__fastcall **)(__int64, __int64, __int64, GUID *, int *))(*(_QWORD *)v16 + 104LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v23);
    v18 = v17(v16, 1LL, 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v23);
    PlaceModePoint = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x339,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v18);
      goto LABEL_22;
    }
LABEL_21:
    v24 = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)v23 + 56LL))(*(_QWORD *)v23, 0LL, &v24);
    LODWORD(v22) = v24 + (DWORD2(v24) - (int)v24) / 2;
    HIDWORD(v22) = DWORD1(v24) + (HIDWORD(v24) - DWORD1(v24)) / 2;
    *a4 = v22;
    PlaceModePoint = 0;
    goto LABEL_22;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 120) + 24LL))(*(_QWORD *)(a1 + 120), &v25);
    v22 = (unsigned int)(v25 + (DWORD2(v25) - (int)v25) / 2);
    goto LABEL_15;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v22 = 0LL;
    PlaceModePoint = WindowArrangementView::GetPlaceModePoint(a1, a3, 0xFFFFFFFFLL, &v22);
    if ( (PlaceModePoint & 0x80000000) != 0 )
    {
      v11 = 853LL;
      goto LABEL_7;
    }
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 120) + 24LL))(*(_QWORD *)(a1 + 120), &v25);
    HIDWORD(v22) = HIDWORD(v25);
LABEL_15:
    *a4 = v22;
    return 0LL;
  }
  if ( v9 == 1 )
  {
    *(_QWORD *)v23 = 0LL;
    v12 = *(_QWORD *)(a1 + 120);
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v12 + 104LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v23);
    v14 = v13(v12, 0LL, 2LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v23);
    PlaceModePoint = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x343,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v14);
LABEL_22:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v23);
      return PlaceModePoint;
    }
    goto LABEL_21;
  }
  PlaceModePoint = -2147467259;
  v11 = 860LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)PlaceModePoint);
  return PlaceModePoint;
}
