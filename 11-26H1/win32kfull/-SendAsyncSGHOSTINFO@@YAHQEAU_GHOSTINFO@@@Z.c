/*
 * XREFs of ?SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z @ 0x14025E3D8
 * Callers:
 *     NtUserRegisterErrorReportingDialog @ 0x1402BA210 (NtUserRegisterErrorReportingDialog.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1402CA90C (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     DwmAsyncSignalGhost @ 0x14025E40C (DwmAsyncSignalGhost.c)
 */

_BOOL8 __fastcall SendAsyncSGHOSTINFO(struct _GHOSTINFO *const a1, __int64 a2)
{
  void *v2; // rax

  v2 = (void *)ReferenceDwmApiPort(a1, a2);
  return (int)DwmAsyncSignalGhost(v2) >= 0;
}
