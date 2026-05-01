/*
 * XREFs of ?ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z @ 0x180067F50
 * Callers:
 *     ?ConvertForMonitorAndView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@PEAUIApplicationView@@PEAU2@@Z @ 0x1801325F0 (-ConvertForMonitorAndView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@PEAUIApplic.c)
 *     ?ConvertForMonitorAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@HHPEAUIApplicationViewTitlebarConfiguration@@PEAU2@@Z @ 0x1801327B0 (-ConvertForMonitorAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonit.c)
 *     ?ConvertForView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIApplicationView@@PEAU2@@Z @ 0x1804D7070 (-ConvertForView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIApplicationView@@PEAU2@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180068428 (-EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?ConvertWithWindow@WindowSizeConverter@@AEAAJUtagSIZE@@IPEAUHWND__@@UtagRECT@@PEAU2@@Z @ 0x1802412C4 (-ConvertWithWindow@WindowSizeConverter@@AEAAJUtagSIZE@@IPEAUHWND__@@UtagRECT@@PEAU2@@Z.c)
 *     ?GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@Z @ 0x18029ED00 (-GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall WindowSizeConverter::ConvertWithViewInfo(
        WindowSizeConverter *this,
        struct tagSIZE a2,
        struct SizeConversionViewInfo *a3,
        struct tagSIZE *a4)
{
  struct IImmersiveMonitor *v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  int FrameForMonitor; // eax
  int v12; // eax
  __int64 v13; // rsi
  int v14; // eax
  struct IApplicationFrame *v15; // rbx
  __int64 (__fastcall *v16)(struct IApplicationFrame *, __int64 *); // r15
  int v17; // eax
  int v18; // eax
  int v19; // eax
  WindowSizeConverter *v20; // rcx
  struct tagRECT v21; // xmm0
  int v22; // eax
  __int64 v23; // rcx
  struct IApplicationFrame *v24; // rcx
  __int64 v25; // rcx
  struct IApplicationFrame *v26; // rcx
  __int64 v28; // rcx
  struct IApplicationFrame *v29; // rcx
  struct IApplicationFrame *v30; // rcx
  __int64 v31; // rcx
  struct IApplicationFrame *v32; // rcx
  __int64 v33; // rdx
  struct IApplicationFrame *v34; // [rsp+30h] [rbp-49h] BYREF
  __int64 v35; // [rsp+38h] [rbp-41h] BYREF
  unsigned int v36; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v37; // [rsp+44h] [rbp-35h] BYREF
  __int64 v38; // [rsp+48h] [rbp-31h] BYREF
  HWND v39; // [rsp+50h] [rbp-29h] BYREF
  struct IImmersiveMonitor *v40; // [rsp+58h] [rbp-21h] BYREF
  struct tagRECT v41; // [rsp+60h] [rbp-19h] BYREF
  struct tagRECT v42; // [rsp+70h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v8 = (struct IImmersiveMonitor *)*((_QWORD *)a3 + 2);
  v40 = v8;
  if ( v8 )
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = WindowSizeConverter::EnsureEntry(this, v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x266,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v9);
    if ( v8 )
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v8 + 16LL))(v8);
    return v10;
  }
  v34 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v34);
  FrameForMonitor = WindowSizeConverter::GetFrameForMonitor(this, v8, &v34);
  v10 = FrameForMonitor;
  if ( FrameForMonitor < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x269,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)FrameForMonitor);
LABEL_66:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v34);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v40);
    return v10;
  }
  v12 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, __int64, _QWORD))(*(_QWORD *)v34 + 112LL))(
          v34,
          255LL,
          *((_DWORD *)a3 + 6) & 1);
  v10 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26A,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v12);
    v30 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)v30 + 16LL))(v30);
    }
    if ( v8 )
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v8 + 16LL))(v8);
    return v10;
  }
  v13 = *((_QWORD *)a3 + 4);
  v38 = v13;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v37 = 0;
  v36 = 0;
  v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)v13 + 48LL))(v13, &v37, &v36);
  v10 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x270,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v14);
LABEL_65:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v38);
    goto LABEL_66;
  }
  v35 = 0LL;
  v15 = v34;
  v16 = *(__int64 (__fastcall **)(struct IApplicationFrame *, __int64 *))(*(_QWORD *)v34 + 144LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
  v17 = v16(v15, &v35);
  v10 = v17;
  if ( v17 < 0 )
  {
    v33 = 627LL;
LABEL_64:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v33,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v17);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
    goto LABEL_65;
  }
  v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v35 + 48LL))(v35, v37, v36);
  v10 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x274,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v18);
    v25 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v26 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)v26 + 16LL))(v26);
    }
    if ( v8 )
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v8 + 16LL))(v8);
    return v10;
  }
  v39 = 0LL;
  v19 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)v34 + 24LL))(v34, &v39);
  v10 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x277,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v19);
    v31 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v32 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)v32 + 16LL))(v32);
    }
    if ( v8 )
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v8 + 16LL))(v8);
    return v10;
  }
  v21 = 0LL;
  v42 = 0LL;
  if ( (*((_BYTE *)a3 + 24) & 2) == 0 )
  {
    v22 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, struct tagRECT *))(*(_QWORD *)v34 + 120LL))(v34, &v42);
    v10 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x27C,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)v22);
      v23 = v35;
      if ( v35 )
      {
        v35 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      v24 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)v24 + 16LL))(v24);
      }
      if ( v8 )
        (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v8 + 16LL))(v8);
      return v10;
    }
    v21 = v42;
  }
  v41 = v21;
  v17 = WindowSizeConverter::ConvertWithWindow(v20, a2, *((_DWORD *)a3 + 10), v39, &v41, a4);
  v10 = v17;
  if ( v17 < 0 )
  {
    v33 = 638LL;
    goto LABEL_64;
  }
  v28 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v29 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)v29 + 16LL))(v29);
  }
  if ( v8 )
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v8 + 16LL))(v8);
  return 0LL;
}
