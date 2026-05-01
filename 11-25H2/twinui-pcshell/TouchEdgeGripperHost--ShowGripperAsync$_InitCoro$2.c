/*
 * XREFs of TouchEdgeGripperHost::ShowGripperAsync$_InitCoro$2 @ 0x1805732F8
 * Callers:
 *     ?ShowGripperAsync@TouchEdgeGripperHost@@QEAA?AUfire_and_forget@winrt@@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_N@Z @ 0x180573504 (-ShowGripperAsync@TouchEdgeGripperHost@@QEAA-AUfire_and_forget@winrt@@W4TouchEdgeGestureType@@PE.c)
 * Callees:
 *     TouchEdgeGripperHost::ShowGripperAsync$_ResumeCoro$1 @ 0x180573370 (TouchEdgeGripperHost--ShowGripperAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchEdgeGripperHost::ShowGripperAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        int *a4,
        __int64 a5,
        char *a6,
        __int64 a7)
{
  char v7; // r10
  int v8; // r9d

  v7 = *a6;
  v8 = *a4;
  *(_QWORD *)(a2 + 49) = a7;
  *(_DWORD *)(a2 + 57) = v8;
  *(_QWORD *)(a2 + 65) = a5;
  *(_BYTE *)(a2 + 73) = v7;
  *(_QWORD *)a2 = TouchEdgeGripperHost::ShowGripperAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 48) = 0;
  return TouchEdgeGripperHost::ShowGripperAsync__ResumeCoro_1(a2);
}
