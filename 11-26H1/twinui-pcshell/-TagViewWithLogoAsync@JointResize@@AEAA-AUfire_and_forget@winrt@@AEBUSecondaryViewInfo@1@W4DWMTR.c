/*
 * XREFs of ?TagViewWithLogoAsync@JointResize@@AEAA?AUfire_and_forget@winrt@@AEBUSecondaryViewInfo@1@W4DWMTRANSITION_TARGET@@@Z @ 0x18053A860
 * Callers:
 *     ?TagWindowsForResize@JointResize@@AEAAXXZ @ 0x18053A908 (-TagWindowsForResize@JointResize@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     JointResize::TagViewWithLogoAsync$_ResumeCoro$1 @ 0x18053A1A0 (JointResize--TagViewWithLogoAsync$_ResumeCoro$1.c)
 */

_BYTE *__fastcall JointResize::TagViewWithLogoAsync(
        void (__fastcall *a1)(char *a1),
        _BYTE *a2,
        void (__fastcall *a3)(char *a1),
        int a4)
{
  void (__fastcall **v8)(char *); // rax

  v8 = (void (__fastcall **)(char *))operator new(0x180uLL);
  v8[45] = a1;
  v8[46] = a3;
  *((_DWORD *)v8 + 94) = a4;
  *v8 = JointResize::TagViewWithLogoAsync__ResumeCoro_1;
  *((_DWORD *)v8 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v8 + 352) = 0;
  JointResize::TagViewWithLogoAsync__ResumeCoro_1((char *)v8);
  return a2;
}
