/*
 * XREFs of ?NotifyGripperDismissedIfNecessaryAsync@TouchEdgeGripperHost@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180596724
 * Callers:
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x180595910 (TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1 @ 0x180595DE0 (TouchEdgeGripperHost--DismissGripperWindowAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync$_ResumeCoro$1 @ 0x180596610 (TouchEdgeGripperHost--NotifyGripperDismissedIfNecessaryAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync(
        void (__fastcall *a1)(__int64 a1),
        _BYTE *a2,
        char a3)
{
  void (__fastcall **v7)(__int64); // [rsp+40h] [rbp+8h]

  v7 = (void (__fastcall **)(__int64))operator new(0x50uLL);
  v7[7] = a1;
  *((_BYTE *)v7 + 64) = a3;
  *v7 = TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync__ResumeCoro_1;
  *((_DWORD *)v7 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v7 + 48) = 0;
  TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync__ResumeCoro_1((__int64)v7);
  return a2;
}
