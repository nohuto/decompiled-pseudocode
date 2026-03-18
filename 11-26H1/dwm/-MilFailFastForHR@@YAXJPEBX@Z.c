/*
 * XREFs of ?MilFailFastForHR@@YAXJPEBX@Z @ 0x140004460
 * Callers:
 *     ModuleFailFastForHRESULT @ 0x140004450 (ModuleFailFastForHRESULT.c)
 *     ?CollectDWMCursorTelemetry@@YAXXZ @ 0x14000CDD4 (-CollectDWMCursorTelemetry@@YAXXZ.c)
 *     ?WilFailFastHook@@YA_NAEBUFailureInfo@wil@@@Z @ 0x14000F500 (-WilFailFastHook@@YA_NAEBUFailureInfo@wil@@@Z.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x1400036F0 (-IsOOM@@YA_NJ@Z.c)
 *     memset_0 @ 0x140005978 (memset_0.c)
 */

void __fastcall MilFailFastForHR(DWORD a1, void *a2)
{
  _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-A8h] BYREF

  if ( IsOOM(a1) )
    TerminateProcessOnMemoryExhaustion(0LL);
  memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
  pExceptionRecord.ExceptionCode = a1;
  pExceptionRecord.ExceptionAddress = a2;
  RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  MEMORY[0] = 0;
}
