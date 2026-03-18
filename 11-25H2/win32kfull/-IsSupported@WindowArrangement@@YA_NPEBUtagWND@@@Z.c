/*
 * XREFs of ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x14014C1F8
 * Callers:
 *     ?DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x14014C134 (-DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x14014C174 (-SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x14014C1B4 (-MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1402507C4 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402A8DA8 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsNonImmersiveBand @ 0x14014C24C (IsNonImmersiveBand.c)
 *     _anonymous_namespace_::TestFeature @ 0x14014C74C (_anonymous_namespace_--TestFeature.c)
 */

char __fastcall WindowArrangement::IsSupported(WindowArrangement *this, const struct tagWND *a2)
{
  char v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx

  v3 = 1;
  if ( !(unsigned __int8)anonymous_namespace_::TestFeature(1LL, a2)
    || !(unsigned int)IsNonImmersiveBand(this)
    || _bittest64((const signed __int64 *)PtiCurrent(v5, v4) + 86, 0x20u) )
  {
    return 0;
  }
  return v3;
}
