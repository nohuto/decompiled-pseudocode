/*
 * XREFs of NtUserSetFullscreenMagnifierOffsetsDWMUpdated @ 0x14029F250
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DwmAsyncMagnSetFullscreenMagnifierOffsetsDWMUpdated @ 0x14032489C (DwmAsyncMagnSetFullscreenMagnifierOffsetsDWMUpdated.c)
 */

unsigned __int64 __fastcall NtUserSetFullscreenMagnifierOffsetsDWMUpdated(__int64 a1, __int64 a2, float a3)
{
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // rcx
  void *v5; // rax

  v3 = PtiCurrent(a1, a2);
  v5 = (void *)ReferenceDwmApiPort(v4, **(_QWORD **)(*((_QWORD *)v3 + 62) + 8LL));
  return (unsigned __int64)(unsigned int)~DwmAsyncMagnSetFullscreenMagnifierOffsetsDWMUpdated(v5, SLODWORD(a3)) >> 31;
}
