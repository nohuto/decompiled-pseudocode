/*
 * XREFs of ?AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z @ 0x180530950
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Release@?$CTSmartObj@PEAUHFONT__@@V?$CAutoHandle_Policy@PEAUHFONT__@@@@@@QEAAXXZ @ 0x1801FEA3C (-Release@-$CTSmartObj@PEAUHFONT__@@V-$CAutoHandle_Policy@PEAUHFONT__@@@@@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?EnsureWindow@JointDivider@@AEAAJXZ @ 0x180530C94 (-EnsureWindow@JointDivider@@AEAAJXZ.c)
 *     ?ShellTargetChanged@JointDivider@@UEAAJPEAUIApplicationView@@@Z @ 0x1805311D0 (-ShellTargetChanged@JointDivider@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18053C5E0 (-JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall JointDivider::AppLayoutChanged(JointDivider *this, struct IAppLayout *a2)
{
  enum DEVICE_SCALE_FACTOR v4; // ecx
  HFONT GlyphFont; // rbx
  int v6; // eax
  JointDivider *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 (__fastcall *v11)(struct IAppLayout *, _QWORD, __int64, GUID *, int *); // rbx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // r8d
  HRESULT v15; // eax
  void *v16; // rbx
  __int64 (__fastcall *v17)(void *, int *, struct IApplicationView **); // rdi
  int v18; // eax
  __int64 v19; // rdx
  HWND v20; // rcx
  void *ppvOut; // [rsp+40h] [rbp-19h] BYREF
  struct IApplicationView *v22; // [rsp+48h] [rbp-11h] BYREF
  int v23[2]; // [rsp+50h] [rbp-9h] BYREF
  int v24; // [rsp+58h] [rbp-1h] BYREF
  int X[4]; // [rsp+60h] [rbp+7h] BYREF
  __int128 v26; // [rsp+70h] [rbp+17h] BYREF
  DEVICE_SCALE_FACTOR v27[4]; // [rsp+80h] [rbp+27h]
  __int64 v28; // [rsp+90h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v26 = 0LL;
  *(_OWORD *)v27 = 0LL;
  v28 = 0LL;
  (*(void (__fastcall **)(struct IAppLayout *, __int128 *))(*(_QWORD *)a2 + 24LL))(a2, &v26);
  v4 = v27[0];
  if ( v27[0] != *((_DWORD *)this + 14) )
  {
    *((DEVICE_SCALE_FACTOR *)this + 14) = v27[0];
    *((_QWORD *)this + 6) = 0LL;
    GlyphFont = JointDivider_LoadGlyphFont(v4);
    CTSmartObj<HFONT__ *,CAutoHandle_Policy<HFONT__ *>>::Release((void **)this + 6);
    *((_QWORD *)this + 6) = GlyphFont;
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 5, (__int64)a2);
  v6 = (*(__int64 (__fastcall **)(struct IAppLayout *, __int64))(*(_QWORD *)a2 + 80LL))(a2, 2LL);
  v7 = (JointDivider *)((char *)this - 24);
  if ( v6 == 1 )
  {
    v8 = JointDivider::EnsureWindow(v7);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5E,
        (int)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
    *(_QWORD *)v23 = 0LL;
    v11 = *(__int64 (__fastcall **)(struct IAppLayout *, _QWORD, __int64, GUID *, int *))(*(_QWORD *)a2 + 104LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v23);
    v12 = v11(a2, 0LL, 2LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v23);
    v9 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x61,
        (int)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
        (const char *)(unsigned int)v12);
LABEL_24:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v23);
      return v9;
    }
    *(_OWORD *)X = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, int *))(**(_QWORD **)v23 + 56LL))(*(_QWORD *)v23, 0LL, X);
    if ( SetWindowPos(*((HWND *)this + 3), 0LL, X[0], X[1], X[2] - X[0], X[3] - X[1], 0x54u) )
    {
      v13 = 0LL;
      LOWORD(v14) = 184;
      while ( !(_DWORD)v13 )
      {
        if ( X[2] - X[0] == (int)(float)((float)(dword_1807D28C0[6 * v13 + 4] * *((_DWORD *)this + 14)) / 100.0) )
        {
          v14 = dword_1807D28C0[6 * v13 + 5];
          break;
        }
        v13 = 1LL;
      }
      RegisterTouchHitTestingWindow(*((_QWORD *)this + 3), ((unsigned __int16)v14 << 16) | 3u);
    }
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    v15 = IUnknown_QueryService(
            *((IUnknown **)this - 1),
            (const GUID *const)&SID_ShellTargetingTracker,
            &GUID_e535b915_429c_4e9f_b0e9_94819002d685,
            &ppvOut);
    v9 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x70,
        (int)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
        (const char *)(unsigned int)v15);
LABEL_23:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      goto LABEL_24;
    }
    v24 = 0;
    v22 = 0LL;
    v16 = ppvOut;
    v17 = *(__int64 (__fastcall **)(void *, int *, struct IApplicationView **))(*(_QWORD *)ppvOut + 40LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
    v18 = v17(v16, &v24, &v22);
    v9 = v18;
    if ( v18 < 0 )
    {
      v19 = 116LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (int)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
        (const char *)(unsigned int)v18);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
      goto LABEL_23;
    }
    v18 = JointDivider::ShellTargetChanged(this, v22);
    v9 = v18;
    if ( v18 < 0 )
    {
      v19 = 117LL;
      goto LABEL_22;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    InvalidateRect(*((HWND *)this + 3), 0LL, 1);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v23);
  }
  else
  {
    v20 = (HWND)*((_QWORD *)v7 + 6);
    if ( v20 )
      ShowWindow(v20, 0);
  }
  return 0LL;
}
