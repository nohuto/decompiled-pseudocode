/*
 * XREFs of PsSetProcessTelemetryAppState @ 0x1409CF794
 * Callers:
 *     EtwpPsProvProcessEnumCallback @ 0x1409BA820 (EtwpPsProvProcessEnumCallback.c)
 *     DbgkForwardException @ 0x1409CEF30 (DbgkForwardException.c)
 *     PspExitProcess @ 0x1409FE380 (PspExitProcess.c)
 *     PsSetProcessFaultInformation @ 0x140AC0480 (PsSetProcessFaultInformation.c)
 * Callees:
 *     PspLockProcessExclusive @ 0x140481AF8 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x1404898F4 (PspUnlockProcessExclusive.c)
 *     PsGetProcessDeepFreezeStats @ 0x1409CF900 (PsGetProcessDeepFreezeStats.c)
 *     EtwTraceAppStateChange @ 0x1409CF9F8 (EtwTraceAppStateChange.c)
 */

__int64 __fastcall PsSetProcessTelemetryAppState(PRKPROCESS PROCESS, int a2)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v5; // r13
  unsigned int v6; // esi
  unsigned __int64 v7; // r14
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  unsigned __int64 ReadyTime; // rax
  __int64 v11; // r15
  __int128 v13; // [rsp+20h] [rbp-60h] BYREF
  __int128 v14; // [rsp+30h] [rbp-50h]
  __int64 v15; // [rsp+40h] [rbp-40h]
  __int64 v16; // [rsp+48h] [rbp-38h]
  unsigned __int64 UserTime; // [rsp+50h] [rbp-30h]
  __int64 v18; // [rsp+58h] [rbp-28h]
  unsigned __int64 v19; // [rsp+60h] [rbp-20h]
  __int64 v20; // [rsp+68h] [rbp-18h]
  int v21; // [rsp+70h] [rbp-10h]
  int v22; // [rsp+74h] [rbp-Ch]

  CurrentThread = KeGetCurrentThread();
  UserTime = 0LL;
  v13 = 0LL;
  v18 = 0LL;
  v14 = 0LL;
  v21 = 0;
  do
  {
    PsGetProcessDeepFreezeStats(PROCESS, &v13);
    v5 = *((_QWORD *)&v13 + 1);
    v6 = 0;
    v7 = *((_QWORD *)&v13 + 1) - v14 - (unsigned __int64)PROCESS[3].SchedulingGroup;
    PspLockProcessExclusive((__int64)PROCESS, (__int64)CurrentThread, v8, v9);
    ReadyTime = PROCESS[3].ReadyTime;
    v11 = v13;
    if ( ReadyTime >> 61 != 3 && PROCESS[3].UserTime <= (unsigned __int64)v13 )
    {
      UserTime = PROCESS[3].UserTime;
      v21 = ReadyTime >> 61;
      v18 = ReadyTime & 0x1FFFFFFFFFFFFFFFLL;
      if ( a2 == 5 && ReadyTime >> 61 == 1 )
        a2 = 6;
      v6 = 1;
      PROCESS[3].UserTime = v13;
      PROCESS[3].ReadyTime = v7 ^ (v7 ^ ((__int64)a2 << 61)) & 0xE000000000000000uLL;
    }
    PspUnlockProcessExclusive((__int64)PROCESS, (__int64)CurrentThread);
  }
  while ( PROCESS[3].ReadyTime >> 61 != 3 && !v6 );
  if ( v6 )
  {
    v20 = v14;
    v15 = v11;
    v16 = v5;
    v19 = v7;
    v22 = a2;
    EtwTraceAppStateChange(PROCESS);
  }
  return v6;
}
