/*
 * XREFs of ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1402580B0
 * Callers:
 *     xxxHandleMenuMessages @ 0x14005B450 (xxxHandleMenuMessages.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x14008FCC0 (PhysicalToLogicalInPlacePointWithParent.c)
 */

void __fastcall AdjustMouseCoordinates(struct tagWND *a1, __int64 *a2)
{
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // rbx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+34h] [rbp+Ch]

  v5 = PtiCurrent((__int64)a1);
  if ( *((_QWORD *)a1 + 27)
    && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 1
    && (W32GetCurrentThreadDpiAwarenessContext(v4) & 0xF) == 2
    && *((_DWORD *)v5 + 197) == *((_DWORD *)v5 + 200)
    && *((_DWORD *)v5 + 198) == *((_DWORD *)v5 + 201) )
  {
    v6 = *(__int16 *)a2;
    v7 = *((__int16 *)a2 + 1);
    PhysicalToLogicalInPlacePointWithParent(a1, &v6, 0LL);
    *a2 = ((unsigned __int16)v7 << 16) | (unsigned __int16)v6;
  }
}
