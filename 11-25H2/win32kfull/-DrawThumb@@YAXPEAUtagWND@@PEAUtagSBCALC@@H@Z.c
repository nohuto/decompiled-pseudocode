/*
 * XREFs of ?DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x14025EF60
 * Callers:
 *     xxxSetScrollBar @ 0x1400504D8 (xxxSetScrollBar.c)
 *     xxxEndScroll @ 0x1402E85E0 (xxxEndScroll.c)
 * Callees:
 *     xxxDefWindowProc @ 0x1400C36C0 (xxxDefWindowProc.c)
 *     ?DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z @ 0x14025EB04 (-DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z.c)
 *     CalcSBStuff @ 0x14025FAB8 (CalcSBStuff.c)
 *     GetWndSBDisableFlags @ 0x14026006C (GetWndSBDisableFlags.c)
 *     WPP_RECORDER_AND_TRACE_SF_ql @ 0x1402E60A0 (WPP_RECORDER_AND_TRACE_SF_ql.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall DrawThumb(struct tagTHREADINFO **a1, struct tagSBCALC *a2, unsigned int a3)
{
  __int64 v5; // rdx
  char v6; // di
  bool v7; // si
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  HWND DCEx; // rbp
  char WndSBDisableFlags; // si
  HBRUSH v13; // rbx
  __int64 v14; // rdi
  _BYTE v15[64]; // [rsp+50h] [rbp-78h] BYREF

  memset_0(v15, 0, sizeof(v15));
  v6 = 1;
  v7 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v6 = 0;
  }
  if ( v7 || v6 )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
    LOBYTE(v9) = v6;
    LOBYTE(v10) = v7;
    WPP_RECORDER_AND_TRACE_SF_ql(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69160),
      5);
  }
  DCEx = (HWND)_GetDCEx(a1, 0LL, 65537LL);
  CalcSBStuff(a1, v15, a3);
  WndSBDisableFlags = GetWndSBDisableFlags(a1, a3);
  v13 = (HBRUSH)xxxDefWindowProc(a1, 311LL, DCEx, *a1);
  v14 = GreSelectBrush(DCEx, v13);
  DrawThumb2((struct tagWND *)a1, (struct tagSBCALC *)v15, (HDC)DCEx, v13, a3, WndSBDisableFlags);
  GreSelectBrush(DCEx, v14);
  _ReleaseDC(DCEx);
}
