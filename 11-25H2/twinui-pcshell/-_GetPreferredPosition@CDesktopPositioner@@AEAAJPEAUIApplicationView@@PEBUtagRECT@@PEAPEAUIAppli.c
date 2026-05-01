/*
 * XREFs of ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1801F4AE0
 * Callers:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1801E576C (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x180114230 (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@AEAUtagRECT@@@Z @ 0x180114E58 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ?_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z @ 0x180115978 (-_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z.c)
 *     ?_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x1802C37CC (-_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopPositioner::_GetPreferredPosition(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        const struct tagRECT *a3,
        struct IApplicationViewPosition **a4)
{
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rax
  int OffsetRectFromSize; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdi
  int (__fastcall *v16)(__int64, LPVOID, LPVOID, __int64 *); // rbx
  CDesktopPositioner *v17; // rcx
  int fixed; // eax
  __int64 v19; // rdx
  __int64 v21; // [rsp+30h] [rbp-69h] BYREF
  int v22; // [rsp+38h] [rbp-61h] BYREF
  int (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-59h] BYREF
  struct tagSIZE v24; // [rsp+48h] [rbp-51h] BYREF
  LPVOID v25; // [rsp+50h] [rbp-49h] BYREF
  __int64 v26; // [rsp+58h] [rbp-41h]
  __int64 v27; // [rsp+60h] [rbp-39h]
  LPVOID pv[3]; // [rsp+68h] [rbp-31h] BYREF
  struct tagRECT v29; // [rsp+80h] [rbp-19h] BYREF
  struct tagRECT v30; // [rsp+90h] [rbp-9h] BYREF
  struct tagRECT v31; // [rsp+A0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  *a4 = 0LL;
  pv[0] = 0LL;
  v8 = *(_QWORD *)a2;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, LPVOID *))(v8 + 136))(a2, pv);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v25 = 0LL;
    v11 = *(_QWORD *)a2;
    v26 = -1LL;
    v27 = -1LL;
    OffsetRectFromSize = (*(__int64 (__fastcall **)(struct IApplicationView *, LPVOID *))(v11 + 488))(a2, &v25);
    v10 = OffsetRectFromSize;
    if ( OffsetRectFromSize < 0 )
    {
      v13 = 1531LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)OffsetRectFromSize);
      goto LABEL_29;
    }
    v22 = 0;
    v14 = (*(__int64 (__fastcall **)(_QWORD, LPVOID, int *))(**((_QWORD **)this + 35) + 24LL))(
            *((_QWORD *)this + 35),
            pv[0],
            &v22);
    v10 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5FE,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v14);
      if ( v25 )
      {
        CoTaskMemFree(v25);
        v25 = 0LL;
      }
      v26 = 0LL;
      v27 = 0LL;
      goto LABEL_3;
    }
    if ( v22 == 1 )
    {
      v24 = 0LL;
      OffsetRectFromSize = (*(__int64 (__fastcall **)(_QWORD, LPVOID, struct tagSIZE *))(**((_QWORD **)this + 35) + 40LL))(
                             *((_QWORD *)this + 35),
                             pv[0],
                             &v24);
      v10 = OffsetRectFromSize;
      if ( OffsetRectFromSize < 0 )
      {
        v13 = 1541LL;
        goto LABEL_15;
      }
      v29 = 0LL;
      OffsetRectFromSize = CDesktopPositioner::_GetOffsetRectFromSize(this, a3, a3, v24, &v29);
      v10 = OffsetRectFromSize;
      if ( OffsetRectFromSize < 0 )
      {
        v13 = 1547LL;
        goto LABEL_15;
      }
      v21 = 0LL;
      if ( IsRectEmpty(a3) )
      {
        v15 = *((_QWORD *)this + 34);
        v16 = *(int (__fastcall **)(__int64, LPVOID, LPVOID, __int64 *))(*(_QWORD *)v15 + 24LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
        if ( v16(v15, pv[0], v25, &v21) >= 0 )
        {
          v31 = 0LL;
          if ( (*(int (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v21 + 56LL))(v21, &v31) >= 0 )
          {
            v30 = 0LL;
            if ( CDesktopPositioner::_ConvertWorkAreaRectToScreenRect(v17, &v31, &v30) >= 0 )
            {
              v29.left = v30.left;
              v29.top = v30.top;
              v29.right = v24.cx + v30.left;
              v29.bottom = v30.top + v24.cy;
            }
          }
        }
      }
      v23 = 0LL;
      fixed = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
                (__int64 *)&v23,
                (__int64)&v29);
      v10 = fixed;
      if ( fixed >= 0 )
      {
        fixed = CDesktopPositioner::_FixPosition((__int64)this, 2u, v23, (__int64 *)a4);
        v10 = fixed;
        if ( fixed >= 0 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
          v10 = 0;
          goto LABEL_29;
        }
        v19 = 1572LL;
      }
      else
      {
        v19 = 1571LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)fixed);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
    }
    else
    {
      v10 = -2147023728;
    }
LABEL_29:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v25);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)pv);
    return v10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5F8,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v9);
LABEL_3:
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return v10;
}
