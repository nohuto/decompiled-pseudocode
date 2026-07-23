/*
 * XREFs of DbgkpMarkProcessPeb @ 0x14077895C
 * Callers:
 *     DbgkpSetProcessDebugObject @ 0x14091D490 (DbgkpSetProcessDebugObject.c)
 *     DbgkCopyProcessDebugPort @ 0x1409465C8 (DbgkCopyProcessDebugPort.c)
 *     DbgkClearProcessDebugObject @ 0x14094B8B8 (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x1409BA900 (DbgkpCloseObject.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
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
      ExAcquireFastMutex((PKGUARDED_MUTEX)&EmpParseLock.ApcStateFill[8]);
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
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&EmpParseLock.ApcStateFill[8]);
      KiUnstackDetachProcess((__int64)&ApcState, 0);
    }
    ExReleaseRundownProtection_0(p_Blink);
  }
}
