/*
 * XREFs of ?SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x14016344C
 * Callers:
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x14005EF30 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     xxxHandleNCMouseGuys @ 0x140220C94 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x140163F4C (-IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::TestFeature @ 0x1401644A0 (_anonymous_namespace_--TestFeature.c)
 */

char __fastcall WindowArrangement::SizeWithSnapAllowed(WindowArrangement *this, const struct tagWND *a2)
{
  const struct tagWND *v3; // rdx
  char v4; // bl

  v4 = 0;
  if ( (unsigned __int8)anonymous_namespace_::TestFeature(4LL, a2) )
    return WindowArrangement::IsSupported(this, v3);
  return v4;
}
