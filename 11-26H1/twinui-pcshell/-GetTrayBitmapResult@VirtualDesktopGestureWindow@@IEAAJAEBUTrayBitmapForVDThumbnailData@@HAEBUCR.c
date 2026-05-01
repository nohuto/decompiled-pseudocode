/*
 * XREFs of ?GetTrayBitmapResult@VirtualDesktopGestureWindow@@IEAAJAEBUTrayBitmapForVDThumbnailData@@HAEBUCRect@Geometry@@AEAV?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@PEAUIDCompThumbnail@@@Z @ 0x18056024C
 * Callers:
 *     ?s_GetTrayBitmapResult@VirtualDesktopGestureWindow@@KAXPEAUHWND__@@I_K_J@Z @ 0x180563D70 (-s_GetTrayBitmapResult@VirtualDesktopGestureWindow@@KAXPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800870E4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopGestureWindow::GetTrayBitmapResult(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6)
{
  void *v8; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *); // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64, _QWORD, __int64, GUID *, __int64 *); // rdi
  void *v17; // r8
  __int64 v18; // rdx
  __int64 *v19; // rcx
  __int64 v20; // [rsp+40h] [rbp-79h] BYREF
  __int64 v21; // [rsp+48h] [rbp-71h]
  __int64 v22; // [rsp+50h] [rbp-69h] BYREF
  __int128 v23; // [rsp+60h] [rbp-59h]
  _OWORD pv[2]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v25; // [rsp+90h] [rbp-29h]
  struct tagPOINT Points[2]; // [rsp+A0h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+4Fh]

  *(_QWORD *)&v23 = a4;
  v22 = a2;
  v25 = a6;
  v8 = *(void **)(a2 + 16);
  if ( !v8 )
    return 0LL;
  if ( !*(_QWORD *)(a1 + 8) )
    return 2147947423LL;
  memset(pv, 0, sizeof(pv));
  if ( GetObjectW(v8, 32, pv) )
  {
    v20 = 0LL;
    if ( *(_BYTE *)(a1 + 224) )
    {
      v11 = *(_QWORD *)(a1 + 56);
      v12 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v11 + 72LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
      v21 = *(_QWORD *)((char *)pv + 4);
      v13 = v12(
              v11,
              *(_QWORD *)(a1 + 160),
              *(_QWORD *)((char *)pv + 4),
              1LL,
              &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
              &v20);
      v10 = v13;
      if ( v13 < 0 )
      {
        v14 = 379LL;
        goto LABEL_15;
      }
    }
    else
    {
      v15 = *(_QWORD *)(a1 + 56);
      v16 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v15 + 72LL);
      if ( *(_DWORD *)(a1 + 228) == 2 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
        v21 = *(_QWORD *)((char *)pv + 4);
        v13 = v16(v15, v25, *(_QWORD *)((char *)pv + 4), 1LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v20);
        v10 = v13;
        if ( v13 < 0 )
        {
          v14 = 385LL;
          goto LABEL_15;
        }
      }
      else
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
        v21 = *(_QWORD *)((char *)pv + 4);
        v13 = v16(
                v15,
                *(_QWORD *)(a1 + 160),
                *(_QWORD *)((char *)pv + 4),
                1LL,
                &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                &v20);
        v10 = v13;
        if ( v13 < 0 )
        {
          v14 = 389LL;
          goto LABEL_15;
        }
      }
    }
    (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(__int64, __int64, __int64), __int64 *))(*(_QWORD *)v20 + 88LL))(
      v20,
      LambdaCustomPaintProc__lambda_3cfa92d190bc4310595425b1883be1f6__HDC___,
      &v22);
    *(_OWORD *)&Points[0].x = *(_OWORD *)v23;
    MapWindowPoints(0LL, *(HWND *)(a1 + 8), Points, 2u);
    if ( *(_BYTE *)(a1 + 224) || *(_DWORD *)(a1 + 228) != 2 )
    {
      Points[0].x += a3;
      Points[1].x += a3;
    }
    else
    {
      LODWORD(v23) = 0;
      DWORD1(v23) = Points[0].y;
      DWORD2(v23) = Points[1].x - Points[0].x;
      HIDWORD(v23) = Points[1].y;
      *(_OWORD *)&Points[0].x = v23;
    }
    v13 = (*(__int64 (__fastcall **)(__int64, struct tagPOINT *, _QWORD, _QWORD))(*(_QWORD *)v20 + 24LL))(
            v20,
            Points,
            0LL,
            0LL);
    v10 = v13;
    if ( v13 >= 0 )
    {
      v18 = a5[1];
      if ( v18 != a5[3]
        || (v13 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                    (__int64)a5,
                    v18 + 1,
                    v17),
            v10 = v13,
            v13 >= 0) )
      {
        v19 = (__int64 *)(*a5 + 8 * a5[1]++);
        if ( v19 )
        {
          *v19 = v20;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v19);
        }
        v10 = 0;
        goto LABEL_28;
      }
      v14 = 422LL;
    }
    else
    {
      v14 = 421LL;
    }
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v13);
LABEL_28:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
    return v10;
  }
  v10 = -2147467259;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x177,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)0x80004005LL);
  return v10;
}
