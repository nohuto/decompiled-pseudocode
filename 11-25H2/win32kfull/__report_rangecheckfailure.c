/*
 * XREFs of __report_rangecheckfailure @ 0x1402702E0
 * Callers:
 *     NtUserRemoteConnect @ 0x1401FB800 (NtUserRemoteConnect.c)
 *     NtGdiMakeFontDir @ 0x140223A90 (NtGdiMakeFontDir.c)
 *     ?SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1402919EC (-SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     SetAppCompatFlags @ 0x1402B3320 (SetAppCompatFlags.c)
 *     NtGdiEudcLoadUnloadLink @ 0x14030E6F0 (NtGdiEudcLoadUnloadLink.c)
 *     NtGdiGetEudcTimeStampEx @ 0x14030E890 (NtGdiGetEudcTimeStampEx.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1403325FC (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
