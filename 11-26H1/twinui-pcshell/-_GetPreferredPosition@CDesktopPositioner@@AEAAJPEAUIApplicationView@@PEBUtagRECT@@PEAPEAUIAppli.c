/*
 * XREFs of ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1801EAD20
 * Callers:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1801DA4B0 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@AEAUtagRECT@@@Z @ 0x1800B074C (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x180165FD0 (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     ?_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z @ 0x1801669F0 (-_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z.c)
 *     ?_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x1802BAB88 (-_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopPositioner::_GetPreferredPosition(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        const struct tagRECT *a3,
        struct IApplicationViewPosition **a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  int OffsetRectFromSize; // eax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdi
  int (__fastcall *v14)(__int64, LPVOID, LPVOID, __int64 *); // rbx
  CDesktopPositioner *v15; // rcx
  int fixed; // eax
  __int64 v17; // rdx
  __int64 v19; // [rsp+30h] [rbp-69h] BYREF
  int v20; // [rsp+38h] [rbp-61h] BYREF
  int (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-59h] BYREF
  struct tagSIZE v22; // [rsp+48h] [rbp-51h] BYREF
  LPVOID v23; // [rsp+50h] [rbp-49h] BYREF
  __int64 v24; // [rsp+58h] [rbp-41h]
  __int64 v25; // [rsp+60h] [rbp-39h]
  LPVOID pv[3]; // [rsp+68h] [rbp-31h] BYREF
  struct tagRECT v27; // [rsp+80h] [rbp-19h] BYREF
  struct tagRECT v28; // [rsp+90h] [rbp-9h] BYREF
  struct tagRECT v29; // [rsp+A0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  *a4 = 0LL;
  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, LPVOID *))(*(_QWORD *)a2 + 136LL))(a2, pv);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v23 = 0LL;
    v24 = -1LL;
    v25 = -1LL;
    OffsetRectFromSize = (*(__int64 (__fastcall **)(struct IApplicationView *, LPVOID *))(*(_QWORD *)a2 + 488LL))(
                           a2,
                           &v23);
    v9 = OffsetRectFromSize;
    if ( OffsetRectFromSize < 0 )
    {
      v11 = 1531LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)OffsetRectFromSize);
      goto LABEL_29;
    }
    v20 = 0;
    v12 = (*(__int64 (__fastcall **)(_QWORD, LPVOID, int *))(**((_QWORD **)this + 35) + 24LL))(
            *((_QWORD *)this + 35),
            pv[0],
            &v20);
    v9 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5FE,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v12);
      if ( v23 )
      {
        CoTaskMemFree(v23);
        v23 = 0LL;
      }
      v24 = 0LL;
      v25 = 0LL;
      goto LABEL_3;
    }
    if ( v20 == 1 )
    {
      v22 = 0LL;
      OffsetRectFromSize = (*(__int64 (__fastcall **)(_QWORD, LPVOID, struct tagSIZE *))(**((_QWORD **)this + 35) + 40LL))(
                             *((_QWORD *)this + 35),
                             pv[0],
                             &v22);
      v9 = OffsetRectFromSize;
      if ( OffsetRectFromSize < 0 )
      {
        v11 = 1541LL;
        goto LABEL_15;
      }
      v27 = 0LL;
      OffsetRectFromSize = CDesktopPositioner::_GetOffsetRectFromSize(this, a3, a3, v22, &v27);
      v9 = OffsetRectFromSize;
      if ( OffsetRectFromSize < 0 )
      {
        v11 = 1547LL;
        goto LABEL_15;
      }
      v19 = 0LL;
      if ( IsRectEmpty(a3) )
      {
        v13 = *((_QWORD *)this + 34);
        v14 = *(int (__fastcall **)(__int64, LPVOID, LPVOID, __int64 *))(*(_QWORD *)v13 + 24LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
        if ( v14(v13, pv[0], v23, &v19) >= 0 )
        {
          v29 = 0LL;
          if ( (*(int (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v19 + 56LL))(v19, &v29) >= 0 )
          {
            v28 = 0LL;
            if ( CDesktopPositioner::_ConvertWorkAreaRectToScreenRect(v15, &v29, &v28) >= 0 )
            {
              v27.left = v28.left;
              v27.top = v28.top;
              v27.right = v22.cx + v28.left;
              v27.bottom = v28.top + v22.cy;
            }
          }
        }
      }
      v21 = 0LL;
      fixed = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
                (__int64 *)&v21,
                (__int64)&v27);
      v9 = fixed;
      if ( fixed >= 0 )
      {
        fixed = CDesktopPositioner::_FixPosition((__int64)this, 2u, v21, (__int64 *)a4);
        v9 = fixed;
        if ( fixed >= 0 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
          v9 = 0;
          goto LABEL_29;
        }
        v17 = 1572LL;
      }
      else
      {
        v17 = 1571LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)fixed);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    }
    else
    {
      v9 = -2147023728;
    }
LABEL_29:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v23);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)pv);
    return v9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5F8,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v8);
LABEL_3:
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return v9;
}
