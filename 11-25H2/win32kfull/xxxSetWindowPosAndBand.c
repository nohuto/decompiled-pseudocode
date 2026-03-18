/*
 * XREFs of xxxSetWindowPosAndBand @ 0x140236EBC
 * Callers:
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxEndDeferWindowPosEx @ 0x14004CC40 (xxxEndDeferWindowPosEx.c)
 *     InternalBeginDeferWindowPos @ 0x14004E1DC (InternalBeginDeferWindowPos.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x14004EA98 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     ?IsWindowGhosted@@YA_NPEBUtagWND@@@Z @ 0x140181368 (-IsWindowGhosted@@YA_NPEBUtagWND@@@Z.c)
 *     Feature_3444625720__private_IsEnabledDeviceUsageNoInline @ 0x140272058 (Feature_3444625720__private_IsEnabledDeviceUsageNoInline.c)
 *     ?xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z @ 0x1402AEE08 (-xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSetWindowPosAndBand(struct tagWND *a1, __int64 a2, int a3, int a4, int a5, int a6, int a7)
{
  _OWORD *v11; // rax
  struct tagSMWP *v12; // rax

  if ( (a7 & 0x80u) != 0 && *((struct tagTHREADINFO **)a1 + 2) == PtiCurrent((__int64)a1, a2) && IsWindowGhosted(a1) )
    xxxHandleHealthyWindow(a1);
  v11 = InternalBeginDeferWindowPos(1LL, a2);
  if ( !v11 )
    return 0LL;
  v12 = (struct tagSMWP *)_DeferWindowPos((__int64)v11, (__int64)a1, a2, a3, a4, a5, a6, a7, 0);
  if ( !v12 || !(unsigned int)xxxEndDeferWindowPosEx(v12, a7 & 0x4000) )
    return 0LL;
  Feature_3444625720__private_IsEnabledDeviceUsageNoInline();
  return 1LL;
}
