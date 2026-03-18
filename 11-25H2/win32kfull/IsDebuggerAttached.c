/*
 * XREFs of IsDebuggerAttached @ 0x140151D14
 * Callers:
 *     SlowAppThreadInShellFrame @ 0x140151514 (SlowAppThreadInShellFrame.c)
 *     IsAdaptiveQueueDetachExempted @ 0x140151C68 (IsAdaptiveQueueDetachExempted.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x140239944 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     TryDetachShellFrame @ 0x14023FB5C (TryDetachShellFrame.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x140247B34 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDebuggerAttached(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  v3 = *a1;
  if ( v3 && PsGetProcessDebugPort(v3) && (!*((_DWORD *)a1 + 217) || (unsigned __int8)ExQueryFastCacheDevLicense()) )
    return 1;
  return v2;
}
