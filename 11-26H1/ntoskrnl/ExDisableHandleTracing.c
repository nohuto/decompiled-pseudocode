/*
 * XREFs of ExDisableHandleTracing @ 0x1406CF91C
 * Callers:
 *     PsSetProcessHandleTracingInformation @ 0x14077DFB0 (PsSetProcessHandleTracingInformation.c)
 * Callees:
 *     ExpUnlockHandleTableExclusive @ 0x14031722C (ExpUnlockHandleTableExclusive.c)
 *     ExpLockHandleTableExclusive @ 0x14047D358 (ExpLockHandleTableExclusive.c)
 *     ExDereferenceHandleDebugInfo @ 0x140A9431C (ExDereferenceHandleDebugInfo.c)
 */

__int64 __fastcall ExDisableHandleTracing(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rdi
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  ExpLockHandleTableExclusive(a1, (__int64)CurrentThread, a3, a4);
  v6 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = 0LL;
  if ( v6 && (*(_DWORD *)(v6 + 8) & 8) == 0 )
    *(_BYTE *)(a1 + 44) &= ~2u;
  result = ExpUnlockHandleTableExclusive(a1, (__int64)CurrentThread);
  if ( v6 )
    return ExDereferenceHandleDebugInfo(a1, v6);
  return result;
}
