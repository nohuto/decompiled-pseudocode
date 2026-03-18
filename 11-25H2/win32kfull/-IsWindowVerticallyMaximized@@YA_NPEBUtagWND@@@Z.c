/*
 * XREFs of ?IsWindowVerticallyMaximized@@YA_NPEBUtagWND@@@Z @ 0x1402A7804
 * Callers:
 *     xxxHandleNCMouseGuys @ 0x1401BAF84 (xxxHandleNCMouseGuys.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402A8DA8 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 * Callees:
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400262EC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x14009047C (GetMonitorWorkRectForWindow.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014EE58 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 */

char __fastcall IsWindowVerticallyMaximized(struct tagRECT *retstr)
{
  char result; // al
  char v3; // bl
  __int64 v4; // rax
  __m128i *MonitorWorkRectForWindow; // rax
  const struct tagWND *v6; // r8
  __m128i v7; // xmm6
  struct tagRECT v8; // [rsp+20h] [rbp-38h] BYREF
  __m128i v9; // [rsp+30h] [rbp-28h] BYREF

  result = IsArranged((const struct tagWND *)retstr);
  v3 = 0;
  if ( result )
  {
    v4 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)&retstr[2].right + 256LL));
    MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow((__int64)&v9, v4, (const struct tagWND *)retstr);
    v6 = (const struct tagWND *)(*(_QWORD *)&retstr[2].right + 88LL);
    v9 = *MonitorWorkRectForWindow;
    v7 = v9;
    v8 = *WindowMargins::ReduceRect((WindowMargins *)&v8, retstr, v6, 0LL);
    if ( v8.top == _mm_cvtsi128_si32(_mm_srli_si128(v7, 4)) )
      return v8.bottom == v9.m128i_i32[3];
    return v3;
  }
  return result;
}
