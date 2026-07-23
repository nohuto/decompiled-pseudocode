/*
 * XREFs of KiStopForceParkSingleDutyCycleTimerCallback @ 0x1405FB620
 * Callers:
 *     <none>
 * Callees:
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiStopForceParkSingleDutyCycleTimerCallback(__int64 a1, __int64 a2)
{
  __int64 v3; // r11
  char v4; // bl
  __int64 result; // rax
  ULONG_PTR v6; // r11
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  KiAcquirePrcbLocksForIsolationUnit(a2, 0, (unsigned __int64 *)&v7);
  v3 = *(_QWORD *)(a2 + 34544);
  v4 = 0;
  if ( *(_DWORD *)(v3 + 336) == 2 )
  {
    v4 = 1;
    *(_DWORD *)(v3 + 340) = 3;
    *(_DWORD *)(v3 + 336) = 1;
  }
  result = KiReleasePrcbLocksForIsolationUnit(&v7);
  if ( v4 )
    return KiInsertQueueDpc(v6, 0LL, 0LL, 0LL, 0);
  return result;
}
