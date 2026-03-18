/*
 * XREFs of ?DxgkWslProcessCleanup@@YAXPEAU_EPROCESS@@@Z @ 0x1401F5A30
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402E7F14 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 */

void __fastcall DxgkWslProcessCleanup(PRKPROCESS PROCESS)
{
  __int64 ProcessDxgProcess; // rsi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v3; // rdi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4[2]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  ProcessDxgProcess = PsGetProcessDxgProcess(PROCESS);
  if ( ProcessDxgProcess )
  {
    LOBYTE(v4[0]) = 0;
    CDisplayScenarioContextScope::ContextScopeConstructor(v4, 0LL, 0x24u, 0);
    v3 = v4[1];
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(PROCESS, &ApcState);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(ProcessDxgProcess + 104));
    DXGPROCESS::Destroy((DXGPROCESS *)ProcessDxgProcess, v3, 1u);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(ProcessDxgProcess + 104));
    KeUnstackDetachProcess(&ApcState);
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v4);
  }
}
