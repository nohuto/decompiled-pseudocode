/*
 * XREFs of DbgkpMarkProcessPeb @ 0x140775AB4
 * Callers:
 *     DbgkClearProcessDebugObject @ 0x140957E88 (DbgkClearProcessDebugObject.c)
 *     DbgkCopyProcessDebugPort @ 0x1409845B8 (DbgkCopyProcessDebugPort.c)
 *     DbgkpSetProcessDebugObject @ 0x140985C5C (DbgkpSetProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x140AFF4E0 (DbgkpCloseObject.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KeStackAttachProcess @ 0x1402C5270 (KeStackAttachProcess.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlWriteUCharToUser @ 0x14077F710 (RtlWriteUCharToUser.c)
 */

void __fastcall DbgkpMarkProcessPeb(PRKPROCESS PROCESS)
{
  struct _EX_RUNDOWN_REF *p_Blink; // rdi
  bool v3; // si
  __int64 v4; // rdx
  __int64 *ReadyTime; // rcx
  __int16 v6; // ax
  __int64 v7; // rdx
  __int64 v9; // rcx
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  p_Blink = (struct _EX_RUNDOWN_REF *)&PROCESS[1].ProfileListHead.Blink;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink) )
  {
    if ( PROCESS[1].ProcessListEntry.Blink )
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      ExAcquireFastMutex((PKGUARDED_MUTEX)&EmpParseLock.152);
      v3 = PROCESS[1].UserTime != 0;
      LOBYTE(v4) = v3;
      RtlWriteUCharToUser((char *)&PROCESS[1].ProcessListEntry.Blink->Flink + 2, v4);
      ReadyTime = (__int64 *)PROCESS[1].ReadyTime;
      if ( ReadyTime )
      {
        v6 = WORD2(PROCESS[3].PerProcessorCycleTimes);
        v7 = 332LL;
        if ( v6 == 332 || (v7 = 452LL, v6 == 452) )
        {
          v9 = *ReadyTime;
          if ( v9 )
          {
            LOBYTE(v7) = v3;
            RtlWriteUCharToUser(v9 + 2, v7);
          }
        }
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&EmpParseLock.152);
      KiUnstackDetachProcess((__int64)&ApcState, 0);
    }
    ExReleaseRundownProtection_0(p_Blink);
  }
}
