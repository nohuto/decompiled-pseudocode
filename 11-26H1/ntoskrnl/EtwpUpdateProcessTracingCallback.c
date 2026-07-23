/*
 * XREFs of EtwpUpdateProcessTracingCallback @ 0x14082E870
 * Callers:
 *     EtwpEnableDisableUMGL @ 0x140A99A14 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x140AB0700 (EtwpUpdatePerProcessTracing.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     PsGetProcessId @ 0x140460330 (PsGetProcessId.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlInterlockedCompareExchange32ToUser @ 0x140781EAC (RtlInterlockedCompareExchange32ToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     EtwpNotifyProcessTracingChange @ 0x14082E6CC (EtwpNotifyProcessTracingChange.c)
 */

__int64 __fastcall EtwpUpdateProcessTracingCallback(PEPROCESS Process, int *a2)
{
  struct _LIST_ENTRY *Blink; // rsi
  struct _EX_RUNDOWN_REF *p_Blink; // r14
  char v6; // r13
  int v7; // r15d
  unsigned int *v8; // r12
  signed __int32 ULongFromUser; // eax
  signed __int32 v10; // edx
  char v11; // bl
  __int64 v12; // rax
  __int64 *ReadyTime; // rcx
  unsigned int *v14; // r12
  signed __int32 v15; // eax
  signed __int32 v16; // edx
  HANDLE ProcessId; // rax
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-60h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  Blink = Process[1].ProcessListEntry.Blink;
  if ( Blink )
  {
    p_Blink = (struct _EX_RUNDOWN_REF *)&Process[1].ProfileListHead.Blink;
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink) )
    {
      KeStackAttachProcess(Process, &ApcState);
      v6 = *((_BYTE *)a2 + 4);
      v7 = *a2;
      v8 = (unsigned int *)&Blink[55].Blink;
      while ( 1 )
      {
        ULongFromUser = RtlReadULongFromUser(v8);
        v10 = v6 ? ULongFromUser | (1 << v7) : ULongFromUser & ~(1 << v7);
        if ( ULongFromUser == v10 )
          break;
        v11 = 1;
        if ( (unsigned int)RtlInterlockedCompareExchange32ToUser(v8, v10, ULongFromUser) == ULongFromUser )
          goto LABEL_11;
      }
      v11 = 0;
LABEL_11:
      v12 = 0LL;
      ReadyTime = (__int64 *)Process[1].ReadyTime;
      if ( ReadyTime )
        v12 = *ReadyTime;
      if ( v12 )
      {
        v14 = (unsigned int *)(v12 + 576);
        do
        {
          v15 = RtlReadULongFromUser(v14);
          if ( v6 )
            v16 = v15 | (1 << v7);
          else
            v16 = v15 & ~(1 << v7);
        }
        while ( v15 != v16 && (unsigned int)RtlInterlockedCompareExchange32ToUser(v14, v16, v15) != v15 );
      }
      KiUnstackDetachProcess((__int64)&ApcState, 0);
      ExReleaseRundownProtection_0(p_Blink);
      if ( v11 )
      {
        ProcessId = PsGetProcessId(Process);
        EtwpNotifyProcessTracingChange(ProcessId);
      }
    }
  }
  return 0LL;
}
