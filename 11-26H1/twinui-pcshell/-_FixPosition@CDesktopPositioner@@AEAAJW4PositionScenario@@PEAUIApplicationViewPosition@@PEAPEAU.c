/*
 * XREFs of ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x180165FD0
 * Callers:
 *     ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1801EAD20 (-_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIAppli.c)
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1802605C8 (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPositi.c)
 *     ?DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z @ 0x18050FC00 (-DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z.c)
 *     ?_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180512CE8 (-_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@AEAUtagRECT@@@Z @ 0x1800B074C (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x1800B0CB8 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AE_ea_1800B0CB8.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAUIApplicationView@@PEAU3@@Z @ 0x180166600 (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x180166D5C (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPo.c)
 *     ?_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x1801DCD20 (-_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x1802BAB88 (-_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x18050E65C (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPos_ea_18050E65C.c)
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x180512844 (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CDesktopPositioner::_FixPosition(
        __int64 a1,
        unsigned int a2,
        int (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        __int64 *a4)
{
  int (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // eax
  unsigned int fixed; // ebx
  CDesktopPositioner *v13; // rcx
  HMONITOR v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int DefaultRect; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  CDesktopPositioner *v27; // rcx
  unsigned __int64 v28; // r9
  __int64 v29; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+38h] [rbp-C8h] BYREF
  int v31; // [rsp+40h] [rbp-C0h] BYREF
  int v32; // [rsp+44h] [rbp-BCh] BYREF
  int (__fastcall ***v33)(_QWORD, _QWORD, _QWORD); // [rsp+48h] [rbp-B8h] BYREF
  struct tagRECT v34; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE mi[44]; // [rsp+60h] [rbp-A0h] BYREF
  RECT rc; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v37; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v38; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v39; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v40[28]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v41[40]; // [rsp+F0h] [rbp-10h] BYREF
  struct tagRECT v42; // [rsp+118h] [rbp+18h] BYREF
  struct tagRECT v43; // [rsp+128h] [rbp+28h] BYREF
  struct tagRECT v44; // [rsp+138h] [rbp+38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v30 = 0LL;
  *a4 = 0LL;
  v33 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))a3;
  if ( a3 )
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a3)[1])(a3);
  v29 = 0LL;
  v8 = **a3;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
  if ( v8(a3, &GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1, &v29) < 0 )
  {
    if ( !*(_DWORD *)(a1 + 544) )
    {
      fixed = 0;
      goto LABEL_72;
    }
    v38 = 0LL;
    DefaultRect = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int128 *))(*a3)[3])(
                    a3,
                    &v38);
    fixed = DefaultRect;
    if ( DefaultRect < 0 )
    {
      v26 = 2132LL;
    }
    else
    {
      v43 = 0LL;
      fixed = CDesktopPositioner::_FixRectForWorkArea(a1, a2, &v38, 0LL);
      if ( (fixed & 0x80000000) != 0 )
      {
        if ( fixed != -2147024809 )
        {
          v28 = fixed;
          v26 = 2163LL;
          goto LABEL_71;
        }
        v34 = 0LL;
        DefaultRect = CDesktopPositioner::_GetDefaultRect(a1, &v38, 0LL, &v34);
        fixed = DefaultRect;
        if ( DefaultRect >= 0 )
        {
          if ( a2 == 4 )
          {
            DefaultRect = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
                            &v30,
                            (__int64)&v34);
            fixed = DefaultRect;
            if ( DefaultRect >= 0 )
              goto LABEL_31;
            v26 = 2151LL;
          }
          else
          {
            v44 = 0LL;
            DefaultRect = CDesktopPositioner::_ConvertScreenRectToWorkAreaRect(v27, &v34, &v44);
            fixed = DefaultRect;
            if ( DefaultRect >= 0 )
            {
              v31 = 3;
              DefaultRect = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,enum ARRANGEMENT_BASED_VIEW_STATE,tagRECT &>(
                              &v30,
                              &v31,
                              &v44);
              fixed = DefaultRect;
              if ( DefaultRect >= 0 )
                goto LABEL_31;
              v26 = 2158LL;
            }
            else
            {
              v26 = 2157LL;
            }
          }
        }
        else
        {
          v26 = 2145LL;
        }
      }
      else
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
        DefaultRect = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
                        &v30,
                        &v43);
        fixed = DefaultRect;
        if ( DefaultRect >= 0 )
        {
LABEL_31:
          v20 = v30;
          v30 = 0LL;
          *a4 = v20;
          v21 = v29;
          if ( v29 )
          {
            v29 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          }
          ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a3)[2])(a3);
          v22 = v30;
          if ( v30 )
          {
            v30 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          }
          return 0LL;
        }
        v26 = 2138LL;
      }
    }
    v28 = (unsigned int)DefaultRect;
LABEL_71:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)v28);
    goto LABEL_72;
  }
  v9 = v29;
  v10 = v29;
  *(_QWORD *)&v34.left = v29;
  if ( v29 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
    v9 = v29;
  }
  if ( !a2 )
  {
    v32 = 0;
    v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 32LL))(v9, &v32);
    fixed = v11;
    if ( v11 < 0 )
    {
      v24 = 2065LL;
    }
    else
    {
      memset(v41, 0, sizeof(v41));
      v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v29 + 72LL))(v29, v41);
      fixed = v11;
      if ( v11 < 0 )
      {
        v24 = 2070LL;
      }
      else
      {
        *(_DWORD *)mi = 44;
        *(_OWORD *)&mi[4] = *(_OWORD *)v41;
        *(_QWORD *)&mi[20] = *(_QWORD *)&v41[16];
        *(_OWORD *)&mi[28] = *(_OWORD *)&v41[24];
        v39 = *(_OWORD *)mi;
        *(_OWORD *)v40 = *(_OWORD *)&mi[16];
        *(_QWORD *)&v40[16] = *(_OWORD *)&v41[24] >> 32;
        *(_DWORD *)&v40[24] = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v41[24], 12));
        if ( v32 != 1 )
          goto LABEL_10;
        v31 = 0;
        v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v29 + 64LL))(v29, &v31);
        fixed = v11;
        if ( v11 >= 0 )
        {
          DWORD2(v39) = (v31 != 1) + 3;
LABEL_10:
          v37 = 0LL;
          v11 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v29 + 56LL))(v29, &v37);
          fixed = v11;
          if ( v11 < 0 )
          {
            v24 = 2086LL;
          }
          else
          {
            v42 = 0LL;
            v11 = CDesktopPositioner::_ConvertWorkAreaRectToScreenRect(v13, &v37, &v42);
            fixed = v11;
            if ( v11 < 0 )
            {
              v24 = 2090LL;
            }
            else
            {
              rc = 0LL;
              if ( (unsigned int)CDesktopPositioner::_FixRectForWorkArea(a1, 0LL, &v42, 0LL) != -2147024809 )
              {
LABEL_13:
                *(RECT *)&v40[12] = rc;
                v14 = MonitorFromRect(&rc, 0);
                if ( v14 )
                {
                  memset(mi, 0, 40);
                  *(_DWORD *)mi = 40;
                  if ( GetMonitorInfoW(v14, (LPMONITORINFO)mi) )
                  {
                    if ( *(_DWORD *)&mi[4] != *(_DWORD *)&mi[20] || *(_DWORD *)&mi[8] != *(_DWORD *)&mi[24] )
                      OffsetRect(
                        (LPRECT)&v40[12],
                        *(_DWORD *)&mi[4] - *(_DWORD *)&mi[20],
                        *(_DWORD *)&mi[8] - *(_DWORD *)&mi[24]);
                  }
                }
                if ( v10 )
                {
                  *(_QWORD *)&v34.left = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
                }
                v15 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IOcclusionBasedApplicationViewPosition,tagWINDOWPLACEMENT &>(
                        &v34,
                        &v39);
                fixed = v15;
                if ( v15 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x83E,
                    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                    (const char *)(unsigned int)v15);
                  if ( *(_QWORD *)&v34.left )
                    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v34.left + 16LL))(*(_QWORD *)&v34.left);
                  v16 = v29;
                  if ( v29 )
                  {
                    v29 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
                  }
                  ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a3)[2])(a3);
                  v17 = v30;
                  if ( v30 )
                  {
                    v30 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
                  }
                  return fixed;
                }
                v9 = v29;
                v10 = *(_QWORD *)&v34.left;
                goto LABEL_37;
              }
              v11 = CDesktopPositioner::_GetDefaultRect(a1, &v37, 0LL, &rc);
              fixed = v11;
              if ( v11 >= 0 )
              {
                v25 = DWORD2(v39);
                if ( v32 == 2 )
                  v25 = 3;
                DWORD2(v39) = v25;
                goto LABEL_13;
              }
              v24 = 2098LL;
            }
          }
          goto LABEL_51;
        }
        v24 = 2078LL;
      }
    }
LABEL_51:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v34.left);
LABEL_72:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
    return fixed;
  }
LABEL_37:
  *a4 = v10;
  if ( v9 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a3)[2])(a3);
  v23 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return 0LL;
}
