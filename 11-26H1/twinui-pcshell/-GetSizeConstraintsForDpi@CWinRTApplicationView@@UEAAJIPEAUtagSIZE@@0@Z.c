/*
 * XREFs of ?GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z @ 0x18008B230
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z @ 0x18008A7FC (-AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_45f761d2d247477984b20cf6ec7ae807___ @ 0x18008BA2C (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_45f761d2d247477984b20.c)
 *     ?GetWindowSizeConverter@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIWindowSizeConversionLogicalClientToWindow@@@WRL@Microsoft@@XZ @ 0x18008BDE0 (-GetWindowSizeConverter@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIWindowSizeConversion.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CWinRTApplicationView::GetSizeConstraintsForDpi(
        CWinRTApplicationView *this,
        unsigned int a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4)
{
  RTL_SRWLOCK *v8; // rbx
  __int64 v9; // rdi
  struct tagSIZE v10; // rbx
  unsigned int v11; // ebx
  struct tagSIZE v12; // rcx
  __int64 (__fastcall *v14)(struct tagSIZE, GUID *, struct tagSIZE *); // rsi
  int v15; // eax
  struct tagSIZE v16; // rcx
  struct tagSIZE v17; // rcx
  __int64 v18; // rdx
  int v19; // ecx
  int cy; // r8d
  struct tagSIZE v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  LONG cx; // eax
  LONG v28; // eax
  LONG v29; // eax
  LONG v30; // eax
  __int64 v31; // rdx
  int v32; // r8d
  int v33; // r9d
  struct tagSIZE v34; // rax
  LONG v35; // eax
  LONG v36; // eax
  LONG v37; // eax
  LONG v38; // eax
  struct tagSIZE v39; // [rsp+40h] [rbp-30h] BYREF
  __int64 v40; // [rsp+48h] [rbp-28h] BYREF
  __int64 v41; // [rsp+50h] [rbp-20h] BYREF
  __int64 v42; // [rsp+58h] [rbp-18h] BYREF
  struct tagSIZE v43; // [rsp+60h] [rbp-10h] BYREF
  int v44[2]; // [rsp+68h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  struct tagSIZE v46; // [rsp+A0h] [rbp+30h] BYREF

  v8 = (RTL_SRWLOCK *)((char *)this + 48);
  AcquireSRWLockShared((PSRWLOCK)this + 6);
  if ( *((_QWORD *)this + 29) )
    v9 = *((_QWORD *)this + 29);
  else
    v9 = *(_QWORD *)((char *)this + 220);
  if ( v8 )
    ReleaseSRWLockShared(v8);
  v43 = 0LL;
  v41 = 0LL;
  *(_QWORD *)v44 = 0LL;
  v42 = 0LL;
  v46 = 0LL;
  GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_45f761d2d247477984b20cf6ec7ae807___(&v46);
  v10 = v46;
  if ( !*(_QWORD *)&v46 )
  {
    v11 = -2147024884;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC1,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)0x8007000CLL);
    v12 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(struct tagSIZE))(**(_QWORD **)&v12 + 16LL))(v12);
    }
    goto LABEL_8;
  }
  v39 = 0LL;
  v14 = ***(__int64 (__fastcall ****)(struct tagSIZE, GUID *, struct tagSIZE *))&v46;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v39);
  v15 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v14)(v10, &GUID_9886efb0_afb3_4a35_b381_329935b32d5a, &v39);
  v11 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC4,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v15);
    v16 = v39;
    if ( v39 )
    {
      v39 = 0LL;
      (*(void (__fastcall **)(struct tagSIZE))(**(_QWORD **)&v16 + 16LL))(v16);
    }
    v17 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(struct tagSIZE))(**(_QWORD **)&v17 + 16LL))(v17);
    }
    goto LABEL_8;
  }
  v24 = (*(__int64 (__fastcall **)(struct tagSIZE, _QWORD, struct tagSIZE *, __int64 *, int *, __int64 *))(**(_QWORD **)&v39 + 40LL))(
          v39,
          *((_QWORD *)this + 26),
          &v43,
          &v41,
          v44,
          &v42);
  v11 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC5,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v24);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v39);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v46);
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B2,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)v11);
    return v11;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v39);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v46);
  ApplicationViewManagement::CGlobals::GetWindowSizeConverter(&v40);
  if ( !a3 )
    goto LABEL_49;
  v18 = v41;
  v19 = HIDWORD(v41);
  cy = v43.cy;
  v21 = v43;
  if ( v43.cx > 0 && v43.cy > 0 || (int)v41 > 0 && SHIDWORD(v41) > 0 )
  {
    *a3 = 0LL;
    if ( v21.cx > 0 && cy > 0 )
    {
      v46 = v21;
      v25 = CWinRTApplicationView::AdjustSizeForChrome(this, &v46, a2);
      v11 = v25;
      if ( v25 < 0 )
      {
        v26 = 447LL;
LABEL_43:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v26,
          (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
          (const char *)(unsigned int)v25);
LABEL_73:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
        return v11;
      }
      cx = v46.cx;
      if ( a3->cx > v46.cx )
        cx = a3->cx;
      a3->cx = cx;
      v28 = v46.cy;
      if ( a3->cy > v46.cy )
        v28 = a3->cy;
      a3->cy = v28;
      v18 = v41;
      v19 = HIDWORD(v41);
    }
    if ( (int)v18 > 0 && v19 > 0 )
    {
      v46 = 0LL;
      v25 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, CWinRTApplicationView *, struct tagSIZE *))(*(_QWORD *)v40 + 40LL))(
              v40,
              v18,
              a2,
              this,
              &v46);
      v11 = v25;
      if ( v25 < 0 )
      {
        v26 = 455LL;
        goto LABEL_43;
      }
      v29 = v46.cx;
      if ( a3->cx > v46.cx )
        v29 = a3->cx;
      a3->cx = v29;
      v30 = v46.cy;
      if ( a3->cy > v46.cy )
        v30 = a3->cy;
      a3->cy = v30;
    }
LABEL_49:
    if ( a4 )
    {
      v31 = v42;
      v32 = HIDWORD(v42);
      v33 = v44[1];
      v34 = *(struct tagSIZE *)v44;
      if ( (v44[0] <= 0 || v44[1] <= 0) && ((int)v42 <= 0 || SHIDWORD(v42) <= 0) )
      {
        v39.cx = GetSystemMetrics(59);
        v39.cy = GetSystemMetrics(60);
        *a4 = v39;
      }
      else
      {
        v39 = (struct tagSIZE)0x7FFFFFFF7FFFFFFFLL;
        *a4 = (struct tagSIZE)0x7FFFFFFF7FFFFFFFLL;
        if ( v34.cx > 0 && v33 > 0 )
        {
          v39 = v34;
          v25 = CWinRTApplicationView::AdjustSizeForChrome(this, &v39, a2);
          v11 = v25;
          if ( v25 < 0 )
          {
            v26 = 475LL;
            goto LABEL_43;
          }
          v35 = v39.cx;
          if ( a4->cx < v39.cx )
            v35 = a4->cx;
          a4->cx = v35;
          v36 = v39.cy;
          if ( a4->cy < v39.cy )
            v36 = a4->cy;
          a4->cy = v36;
          v31 = v42;
          v32 = HIDWORD(v42);
        }
        if ( (int)v31 > 0 && v32 > 0 )
        {
          v39 = 0LL;
          v25 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, CWinRTApplicationView *, struct tagSIZE *))(*(_QWORD *)v40 + 40LL))(
                  v40,
                  v31,
                  a2,
                  this,
                  &v39);
          v11 = v25;
          if ( v25 < 0 )
          {
            v26 = 483LL;
            goto LABEL_43;
          }
          v37 = v39.cx;
          if ( a4->cx < v39.cx )
            v37 = a4->cx;
          a4->cx = v37;
          v38 = v39.cy;
          if ( a4->cy < v39.cy )
            v38 = a4->cy;
          a4->cy = v38;
        }
      }
    }
    v11 = 0;
    goto LABEL_73;
  }
  v22 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, CWinRTApplicationView *, struct tagSIZE *))(*(_QWORD *)v40 + 40LL))(
          v40,
          v9,
          a2,
          this,
          a3);
  v11 = v22;
  if ( v22 >= 0 )
    goto LABEL_49;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1CE,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)v22);
  v23 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return v11;
}
