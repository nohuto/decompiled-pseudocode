/*
 * XREFs of NullifyLookasideRef @ 0x140267260
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x1400593C8 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     xxxMNEndMenuState @ 0x14015BDC0 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x140256734 (xxxMNStartMenuState.c)
 *     ??$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAUtagPOPUPMENU@@@Z @ 0x140267238 (--$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstr.c)
 * Callees:
 *     <none>
 */

void __fastcall NullifyLookasideRef(__int64 a1)
{
  bool v2; // zf
  void *CurrentWin32kStackRefLookAside; // rax

  *(_QWORD *)a1 = 0LL;
  v2 = *(_DWORD *)(a1 + 8) == 0;
  *(_BYTE *)(a1 + 12) = 1;
  if ( v2 )
  {
    CurrentWin32kStackRefLookAside = GetCurrentWin32kStackRefLookAside();
    Win32FreeToPagedLookasideList(CurrentWin32kStackRefLookAside, a1);
  }
}
