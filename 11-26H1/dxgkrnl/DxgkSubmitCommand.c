/*
 * XREFs of DxgkSubmitCommand @ 0x140373650
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140058AF8 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x140294050 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSubmitCommand(struct _D3DKMT_SUBMITCOMMAND *Src)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v4; // rdi
  __int64 v5; // rcx
  struct DXGPROCESS *v6; // rbx
  unsigned int v7; // edi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax

  CurrentProcess = PsGetCurrentProcess(Src);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v4 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess
    || (v5 = *(_DWORD *)(ProcessDxgProcess + 408) >> 7, (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) != 0) )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v6 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( v6 )
        goto LABEL_4;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v6 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( v6 )
        goto LABEL_4;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3080;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 3080LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v6 = v4;
  if ( !v4 )
  {
    v9 = PsGetCurrentProcess(v5);
    WdLogSingleEntry2(2LL, v9, -1073741811LL);
    WdLogGlobalForLineNumber = 2063;
    v11 = PsGetCurrentProcess(v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v11,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
LABEL_4:
  v7 = DxgkSubmitCommandInternal(Src, v6);
  if ( (int)(v7 + 0x80000000) >= 0
    && v7 != -1073741130
    && !g_DwmRenderDebugMode
    && (*((_DWORD *)v6 + 102) & 4) != 0
    && !KdRefreshDebuggerNotPresent() )
  {
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      "An unexpected render failure 0x%x from DWM has been detected.\n"
      "We broke into the debugger to allow a chance for debugging this issue.\n"
      "To disable debug breaks for DWM render failures, run \"?? dxgmms2!g_DwmRenderDebugMode=1\" command,\n"
      "or \"ed 0x%p 1\"\n"
      "\n",
      v7,
      (const void *)&g_DwmRenderDebugMode);
    __debugbreak();
  }
  return v7;
}
