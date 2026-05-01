/*
 * XREFs of ?CreateGripperWindowAsync@TouchEdgeGripperHost@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180595D1C
 * Callers:
 *     TouchEdgeGripperHost::ShowGripperAsync$_ResumeCoro$1 @ 0x180596980 (TouchEdgeGripperHost--ShowGripperAsync$_ResumeCoro$1.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x180595910 (TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall TouchEdgeGripperHost::CreateGripperWindowAsync(void (__fastcall *a1)(__int64 a1), _BYTE *a2, char a3)
{
  void (__fastcall **v7)(__int64); // [rsp+20h] [rbp-28h]

  v7 = (void (__fastcall **)(__int64))operator new(0x130uLL);
  v7[35] = a1;
  *((_BYTE *)v7 + 288) = a3;
  *v7 = TouchEdgeGripperHost::CreateGripperWindowAsync__ResumeCoro_1;
  *((_DWORD *)v7 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v7 + 272) = 0;
  TouchEdgeGripperHost::CreateGripperWindowAsync__ResumeCoro_1((__int64)v7);
  return a2;
}
