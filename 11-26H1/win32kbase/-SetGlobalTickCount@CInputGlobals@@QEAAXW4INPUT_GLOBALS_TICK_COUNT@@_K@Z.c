/*
 * XREFs of ?SetGlobalTickCount@CInputGlobals@@QEAAXW4INPUT_GLOBALS_TICK_COUNT@@_K@Z @ 0x1402192C0
 * Callers:
 *     <none>
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

void __fastcall CInputGlobals::SetGlobalTickCount(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rbx

  v4 = a2;
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1);
  *(_QWORD *)(a1 + 8 * v4 + 16) = a3;
  *(_QWORD *)(a1 + 8 * v4 + 80) = (*(_QWORD *)(a1 + 72))++;
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1);
}
