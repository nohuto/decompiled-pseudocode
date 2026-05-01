/*
 * XREFs of ?EnsureWindow@JointDivider@@AEAAJXZ @ 0x180530C94
 * Callers:
 *     ?AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z @ 0x180530950 (-AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z.c)
 * Callees:
 *     ?Release@?$CTSmartObj@PEAUHFONT__@@V?$CAutoHandle_Policy@PEAUHFONT__@@@@@@QEAAXXZ @ 0x1801FEA3C (-Release@-$CTSmartObj@PEAUHFONT__@@V-$CAutoHandle_Policy@PEAUHFONT__@@@@@@QEAAXXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18053C5E0 (-JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 */

__int64 __fastcall JointDivider::EnsureWindow(HWND *this)
{
  HCURSOR CursorW; // rax
  const char *v3; // r9
  HWND v4; // rcx
  HFONT *v6; // rdi
  HFONT GlyphFont; // rax
  void **v8; // rcx
  HFONT v9; // rbx
  WNDCLASSEXW v10; // [rsp+60h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  if ( !this[6] )
  {
    v10.cbSize = 80;
    memset_0(&v10.style, 0, 0x4CuLL);
    v10.lpfnWndProc = (WNDPROC)CWRLImpWndProc<JointDivider>::s_WndProcBase;
    v10.hInstance = &_ImageBase;
    v10.lpszClassName = L"JointDivider";
    CursorW = LoadCursorW(0LL, (LPCWSTR)0x7F84);
    v10.cbWndExtra = 8;
    v10.hCursor = CursorW;
    RegisterClassExW(&v10);
    CreateWindowExW(0x8000000u, L"JointDivider", 0LL, 0x80000000, 0, 0, 0, 0, this[11], 0LL, &_ImageBase, this);
    v4 = this[6];
    if ( !v4 )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0xCD,
               (__int64)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
               v3);
    DwmpTransitionWindow(v4, 1073741846LL);
    v6 = (HFONT *)(this + 9);
    this[9] = 0LL;
    GlyphFont = JointDivider_LoadGlyphFont((enum DEVICE_SCALE_FACTOR)*((_DWORD *)this + 20));
    v8 = (void **)(this + 9);
    v9 = GlyphFont;
    CTSmartObj<HFONT__ *,CAutoHandle_Policy<HFONT__ *>>::Release(v8);
    *v6 = v9;
  }
  return 0LL;
}
