/*
 * XREFs of ?MilFailFastForHR@@YAXJPEBX@Z @ 0x18000ED8C
 * Callers:
 *     ModuleFailFastForHRESULT @ 0x18000E658 (ModuleFailFastForHRESULT.c)
 *     ?WilFailFastHook@@YA_NAEBUFailureInfo@wil@@@Z @ 0x18000F020 (-WilFailFastHook@@YA_NAEBUFailureInfo@wil@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800032B4 (memset_0.c)
 */

void __fastcall MilFailFastForHR(DWORD a1, void *a2)
{
  _DWORD *v3; // rax
  unsigned int v5; // r8d
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-A8h] BYREF

  v3 = &unk_180014DF0;
  v5 = 0;
  while ( *v3 != a1 )
  {
    ++v5;
    ++v3;
    if ( v5 >= 9 )
      goto LABEL_6;
  }
  TerminateProcessOnMemoryExhaustion(0LL);
LABEL_6:
  memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
  pExceptionRecord.ExceptionCode = a1;
  pExceptionRecord.ExceptionAddress = a2;
  RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  MEMORY[0] = 0;
}
