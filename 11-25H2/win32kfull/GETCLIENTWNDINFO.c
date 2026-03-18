/*
 * XREFs of GETCLIENTWNDINFO @ 0x14026E78C
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     GetWndScrollBarInfoCrossProcess @ 0x14021B954 (GetWndScrollBarInfoCrossProcess.c)
 *     GetWndSBParmsCrossProcess @ 0x140221788 (GetWndSBParmsCrossProcess.c)
 *     GetSharedPropForFilteredProcesses @ 0x1402C0CDC (GetSharedPropForFilteredProcesses.c)
 *     SetSharedPropForFilteredProcesses @ 0x1402C0DAC (SetSharedPropForFilteredProcesses.c)
 * Callees:
 *     ?GETCLIENTWNDINFOOFFSET@@YAHPEBUtagWND@@@Z @ 0x14026E7C0 (-GETCLIENTWNDINFOOFFSET@@YAHPEBUtagWND@@@Z.c)
 */

__int64 __fastcall GETCLIENTWNDINFO(const struct tagWND *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx

  v1 = 0LL;
  v2 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 296LL);
  if ( v2 )
    return v2 + (int)GETCLIENTWNDINFOOFFSET(a1);
  return v1;
}
