/*
 * XREFs of ?DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1401F01A0
 * Callers:
 *     xxxSetScrollBar @ 0x140127BBC (xxxSetScrollBar.c)
 *     xxxEndScroll @ 0x1402F857C (xxxEndScroll.c)
 * Callees:
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 *     GetWndSBDisableFlags @ 0x14018F5C0 (GetWndSBDisableFlags.c)
 *     CalcSBStuff @ 0x14018F8F8 (CalcSBStuff.c)
 *     ?DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z @ 0x1401F09B0 (-DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ql @ 0x1402F669C (WPP_RECORDER_AND_TRACE_SF_ql.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall DrawThumb(struct tagWND *a1, struct tagSBCALC *a2, unsigned int a3)
{
  __int64 v5; // rdx
  char v6; // di
  bool v7; // si
  HDC DCEx; // rbp
  unsigned int WndSBDisableFlags; // esi
  HBRUSH v10; // rbx
  __int64 v11; // rdi
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  _BYTE v15[104]; // [rsp+50h] [rbp-68h] BYREF

  memset_0(v15, 0, 0x40uLL);
  v6 = 1;
  v7 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v6 = 0;
  if ( v7 || v6 )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
    LOBYTE(v13) = v6;
    LOBYTE(v14) = v7;
    WPP_RECORDER_AND_TRACE_SF_ql(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 69152),
      5);
  }
  DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
  CalcSBStuff(a1, (__int64)v15, a3);
  WndSBDisableFlags = GetWndSBDisableFlags((__int64 *)a1, a3);
  v10 = (HBRUSH)xxxDefWindowProc((struct tagTHREADINFO **)a1, 0x137u, (__int64)DCEx, *(_QWORD *)a1);
  v11 = GreSelectBrush(DCEx, v10);
  DrawThumb2(a1, (struct tagSBCALC *)v15, DCEx, v10, a3, WndSBDisableFlags);
  GreSelectBrush(DCEx, v11);
  _ReleaseDC(DCEx);
}
