/*
 * XREFs of _PostQuitMessage @ 0x1401C7DA0
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x1400593C8 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     NtUserPostQuitMessage @ 0x1401C7D60 (NtUserPostQuitMessage.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IPostQuitMessage @ 0x1401C7DC4 (IPostQuitMessage.c)
 */

__int64 __fastcall PostQuitMessage(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  struct tagTHREADINFO *v3; // rax

  v2 = a1;
  v3 = PtiCurrent(a1, a2);
  return IPostQuitMessage(v3, v2);
}
