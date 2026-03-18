/*
 * XREFs of ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x140163F4C
 * Callers:
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x14005EF30 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1401633F0 (-DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x14016344C (-SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x140163F08 (-MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402C5B78 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsNonImmersiveBand @ 0x140163FA0 (IsNonImmersiveBand.c)
 *     _anonymous_namespace_::TestFeature @ 0x1401644A0 (_anonymous_namespace_--TestFeature.c)
 */

char __fastcall WindowArrangement::IsSupported(WindowArrangement *this, const struct tagWND *a2)
{
  char v3; // bl
  __int64 v4; // rcx

  v3 = 1;
  if ( !(unsigned __int8)anonymous_namespace_::TestFeature(1LL, a2)
    || !(unsigned int)IsNonImmersiveBand(this)
    || _bittest64((const signed __int64 *)PtiCurrent(v4) + 85, 0x20u) )
  {
    return 0;
  }
  return v3;
}
