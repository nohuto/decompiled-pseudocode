/*
 * XREFs of TouchEdgeGripperHost::CreateGripperWindowAsync$_InitCoro$2 @ 0x180571F98
 * Callers:
 *     ?CreateGripperWindowAsync@TouchEdgeGripperHost@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180572484 (-CreateGripperWindowAsync@TouchEdgeGripperHost@@AEAA-AUfire_and_forget@winrt@@_N@Z.c)
 * Callees:
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x180572000 (TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchEdgeGripperHost::CreateGripperWindowAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        char *a4,
        __int64 a5)
{
  char v5; // r9

  v5 = *a4;
  *(_QWORD *)(a2 + 321) = a5;
  *(_BYTE *)(a2 + 329) = v5;
  *(_QWORD *)a2 = TouchEdgeGripperHost::CreateGripperWindowAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 320) = 0;
  return TouchEdgeGripperHost::CreateGripperWindowAsync__ResumeCoro_1(a2);
}
