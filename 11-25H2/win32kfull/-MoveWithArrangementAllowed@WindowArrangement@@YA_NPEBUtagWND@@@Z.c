/*
 * XREFs of ?MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x14014C1B4
 * Callers:
 *     xxxHandleNCMouseGuys @ 0x1401BAF84 (xxxHandleNCMouseGuys.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1402507C4 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     xxxSysCommand @ 0x1402B6EB4 (xxxSysCommand.c)
 * Callees:
 *     ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x14014C1F8 (-IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::TestFeature @ 0x14014C74C (_anonymous_namespace_--TestFeature.c)
 */

char __fastcall WindowArrangement::MoveWithArrangementAllowed(WindowArrangement *this, const struct tagWND *a2)
{
  const struct tagWND *v3; // rdx
  char v4; // bl

  v4 = 0;
  if ( (unsigned __int8)anonymous_namespace_::TestFeature(8LL, a2) )
    return WindowArrangement::IsSupported(this, v3);
  return v4;
}
