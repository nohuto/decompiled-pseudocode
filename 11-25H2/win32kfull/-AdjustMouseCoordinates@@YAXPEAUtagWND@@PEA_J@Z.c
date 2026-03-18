/*
 * XREFs of ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x140220DBC
 * Callers:
 *     xxxHandleMenuMessages @ 0x1400439DC (xxxHandleMenuMessages.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x14015470C (PhysicalToLogicalInPlacePointWithParent.c)
 */

void __fastcall AdjustMouseCoordinates(struct tagWND *a1, __int64 *a2)
{
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // rbx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+34h] [rbp+Ch]

  v5 = PtiCurrent((__int64)a1, (__int64)a2);
  if ( *((_QWORD *)a1 + 27)
    && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 1
    && (W32GetCurrentThreadDpiAwarenessContext(v4) & 0xF) == 2
    && *((_DWORD *)v5 + 199) == *((_DWORD *)v5 + 202)
    && *((_DWORD *)v5 + 200) == *((_DWORD *)v5 + 203) )
  {
    v6 = *(__int16 *)a2;
    v7 = *((__int16 *)a2 + 1);
    PhysicalToLogicalInPlacePointWithParent(a1, &v6, 0LL);
    *a2 = ((unsigned __int16)v7 << 16) | (unsigned __int16)v6;
  }
}
