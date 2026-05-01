/*
 * XREFs of ?_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x180117520
 * Callers:
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x1804F11EC (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetWorkAreaSizeFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x180115F30 (-_GetWorkAreaSizeFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAUtagSIZE@@@Z.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180116E14 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?_GetMonitorFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1802AB464 (-_GetMonitorFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopPositioner::_GetDefaultSizeForRect(
        CDesktopPositioner *a1,
        int a2,
        const struct tagRECT *a3,
        _QWORD *a4)
{
  CDesktopPositioner *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  int MonitorFromRect; // eax
  __int64 v11; // rdx
  __int64 v13; // rax
  __int64 v14; // rbx
  LONG cy; // r14d
  int v16; // eax
  unsigned int v17; // edi
  struct IImmersiveMonitor *v18; // rcx
  struct IApplicationViewTitlebarConfiguration *v19; // rcx
  struct IImmersiveMonitor *v20; // rcx
  struct IApplicationViewTitlebarConfiguration *v21; // rcx
  struct IImmersiveMonitor *v22; // [rsp+40h] [rbp-19h] BYREF
  struct IApplicationViewTitlebarConfiguration *v23; // [rsp+48h] [rbp-11h] BYREF
  struct tagSIZE v24; // [rsp+50h] [rbp-9h] BYREF
  __int64 v25; // [rsp+58h] [rbp-1h] BYREF
  __int64 v26; // [rsp+60h] [rbp+7h]
  int v27; // [rsp+68h] [rbp+Fh]
  int v28; // [rsp+6Ch] [rbp+13h]
  __m128i si128; // [rsp+70h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v26 = 0x1F4000001F4LL;
  if ( a2 == 1 )
  {
    v27 = 900;
    v28 = 640;
  }
  else
  {
    v27 = 800;
    v28 = 600;
  }
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v23 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
  v8 = CDesktopPositioner::_CreateTitlebarConfiguration(v7, 0LL, &v23);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x509,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v8);
LABEL_11:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
    return v9;
  }
  v22 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
  MonitorFromRect = CDesktopPositioner::_GetMonitorFromRect(a1, a3, &v22);
  v9 = MonitorFromRect;
  if ( MonitorFromRect < 0 )
  {
    v11 = 1292LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)MonitorFromRect);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
    goto LABEL_11;
  }
  v24 = 0LL;
  MonitorFromRect = CDesktopPositioner::_GetWorkAreaSizeFromRect(a1, a3, &v24);
  v9 = MonitorFromRect;
  if ( MonitorFromRect < 0 )
  {
    v11 = 1295LL;
    goto LABEL_10;
  }
  v13 = 0LL;
  v25 = 0LL;
  v14 = 3LL;
  cy = v24.cy;
  while ( 1 )
  {
    if ( v14 < 0 )
    {
LABEL_23:
      *a4 = v13;
      v20 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v20 + 16LL))(v20);
      }
      v21 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v21 + 16LL))(v21);
      }
      return 0LL;
    }
    v16 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, struct IImmersiveMonitor *, _QWORD, int, struct IApplicationViewTitlebarConfiguration *, __int64 *))(**((_QWORD **)a1 + 36) + 48LL))(
            *((_QWORD **)a1 + 36),
            *(&v26 + v14),
            v22,
            0LL,
            1,
            v23,
            &v25);
    v17 = v16;
    if ( v16 < 0 )
      break;
    v13 = v25;
    if ( v24.cx >= (int)v25 && cy >= SHIDWORD(v25) )
      goto LABEL_23;
    --v14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x515,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v16);
  v18 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return v17;
}
