/*
 * XREFs of ExDisableHandleTracing @ 0x1406CB8EC
 * Callers:
 *     PsSetProcessHandleTracingInformation @ 0x14077B370 (PsSetProcessHandleTracingInformation.c)
 * Callees:
 *     ExpUnlockHandleTableExclusive @ 0x1403151FC (ExpUnlockHandleTableExclusive.c)
 *     ExpLockHandleTableExclusive @ 0x1404839F0 (ExpLockHandleTableExclusive.c)
 *     ExDereferenceHandleDebugInfo @ 0x140A8F64C (ExDereferenceHandleDebugInfo.c)
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
