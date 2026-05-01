/*
 * XREFs of TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync$_InitCoro$2 @ 0x180572EF4
 * Callers:
 *     ?NotifyGripperDismissedIfNecessaryAsync@TouchEdgeGripperHost@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180573068 (-NotifyGripperDismissedIfNecessaryAsync@TouchEdgeGripperHost@@AEAA-AUfire_and_forget@winrt@@_N@Z.c)
 * Callees:
 *     TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync$_ResumeCoro$1 @ 0x180572F60 (TouchEdgeGripperHost--NotifyGripperDismissedIfNecessaryAsync$_ResumeCoro$1.c)
 */

__int64 __fastcall TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        char *a4,
        __int64 a5)
{
  char v5; // r9

  v5 = *a4;
  *(_QWORD *)(a2 + 49) = a5;
  *(_BYTE *)(a2 + 57) = v5;
  *(_QWORD *)a2 = TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 48) = 0;
  return TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync__ResumeCoro_1(a2);
}
