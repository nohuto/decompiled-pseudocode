/*
 * XREFs of EtwpProcessEnumCallback @ 0x14096EA90
 * Callers:
 *     EtwpProcessThreadImageRundown @ 0x14096E924 (EtwpProcessThreadImageRundown.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     KeStackAttachProcess @ 0x1402C5270 (KeStackAttachProcess.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     PsGetProcessServerSilo @ 0x140476BF0 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     EtwpEnumerateWorkingSet @ 0x14077794C (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleRundown @ 0x14077B8B4 (EtwpObjectHandleRundown.c)
 *     EtwpTraceProcessRundown @ 0x14096D72C (EtwpTraceProcessRundown.c)
 *     EtwpIsProcessZombie @ 0x14096EF94 (EtwpIsProcessZombie.c)
 *     EtwpSysModuleRunDown @ 0x14096F07C (EtwpSysModuleRunDown.c)
 *     PsEnumProcessThreads @ 0x14096F1F0 (PsEnumProcessThreads.c)
 *     EtwpEnumerateAddressSpace @ 0x1409FD0D0 (EtwpEnumerateAddressSpace.c)
 *     EtwpThreadEnumCallback @ 0x140A8BF80 (EtwpThreadEnumCallback.c)
 *     EtwpProcessPerfCtrsRundown @ 0x140B2E130 (EtwpProcessPerfCtrsRundown.c)
 */

__int64 __fastcall EtwpProcessEnumCallback(PEPROCESS Process, __int64 a2)
{
  __int64 v2; // r14
  char v3; // r12
  _DWORD *v5; // rdi
  char v7; // r13
  char v8; // r15
  __int64 ProcessServerSilo; // rax
  __int64 v10; // rdx
  int v11; // ecx
  char v12; // bp
  _QWORD *ServerSiloGlobals; // rax
  __int64 v15; // rdx
  unsigned int v16; // r15d
  unsigned int j; // ebp
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // r15d
  unsigned int i; // ebp
  __int64 Prcb; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-78h] BYREF

  v2 = *(_QWORD *)(a2 + 32);
  v3 = *(_BYTE *)(a2 + 64);
  v5 = *(_DWORD **)a2;
  memset(&ApcState, 0, sizeof(ApcState));
  v7 = 0;
  v8 = 0;
  ProcessServerSilo = PsGetProcessServerSilo((__int64)Process);
  if ( *(_QWORD *)(v2 + 1360) != EtwpHostSiloState )
  {
    ServerSiloGlobals = PsGetServerSiloGlobals(ProcessServerSilo);
    if ( ServerSiloGlobals[104] != v15 )
      return 0LL;
  }
  *(_BYTE *)(a2 + 65) = 0;
  if ( !(unsigned int)EtwpIsProcessZombie(Process) )
  {
    v12 = 1;
    if ( Process == PsIdleProcess )
    {
      v8 = 1;
    }
    else
    {
      if ( KeGetCurrentThread()->ApcState.Process == Process )
      {
LABEL_7:
        *(_BYTE *)(a2 + 65) = v12;
        *(_BYTE *)(a2 + 67) = v8;
        if ( v5 )
        {
          if ( v3 )
          {
            if ( (*v5 & 1) != 0 )
              EtwpTraceProcessRundown((int)Process, v2, 0x303u, a2);
            if ( (*v5 & 2) != 0 && (Process->SecureState.EntireField & 1) == 0 )
            {
              if ( Process == PsIdleProcess )
              {
                v20 = KeNumberProcessors_0;
                for ( i = 0; i < v20; ++i )
                {
                  Prcb = KeGetPrcb(i);
                  EtwpThreadEnumCallback(Process, *(_QWORD *)(Prcb + 24), a2);
                }
              }
              else
              {
                PsEnumProcessThreads(Process, EtwpThreadEnumCallback, a2);
              }
            }
            if ( (*v5 & 0xC004) != 0 )
              EtwpEnumerateAddressSpace(Process);
            if ( (*v5 & 4) != 0 && Process == PsInitialSystemProcess )
            {
              LOBYTE(v10) = v3;
              EtwpSysModuleRunDown(v2, v10);
            }
            if ( (v5[1] & 0x8000000) != 0 )
              EtwpEnumerateWorkingSet((__int64)Process, a2);
          }
          else
          {
            if ( (v5[1] & 0x8000000) != 0 )
              EtwpEnumerateWorkingSet((__int64)Process, a2);
            if ( (*v5 & 4) != 0 && Process == PsInitialSystemProcess )
              EtwpSysModuleRunDown(v2, 0LL);
            if ( (*v5 & 0xC004) != 0 )
              EtwpEnumerateAddressSpace(Process);
            if ( (v5[4] & 0x40) != 0 && Process != PsIdleProcess )
              EtwpObjectHandleRundown(Process, a2);
            if ( (*v5 & 2) != 0 )
            {
              if ( Process == PsIdleProcess )
              {
                v16 = KeNumberProcessors_0;
                for ( j = 0; j < v16; ++j )
                {
                  v18 = KeGetPrcb(j);
                  EtwpThreadEnumCallback(Process, *(_QWORD *)(v18 + 24), a2);
                  v19 = KeGetPrcb(j);
                  EtwpThreadEnumCallback(Process, *(_QWORD *)(v19 + 14392), a2);
                }
              }
              else
              {
                PsEnumProcessThreads(Process, EtwpThreadEnumCallback, a2);
              }
            }
            if ( (*v5 & 8) != 0 )
              EtwpProcessPerfCtrsRundown(Process, v2);
            if ( (*v5 & 1) != 0 )
              EtwpTraceProcessRundown((int)Process, v2, 0x304u, a2);
          }
        }
        if ( v7 )
        {
          KiUnstackDetachProcess((__int64)&ApcState, 0);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
        }
        return 0LL;
      }
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink) )
      {
        KeStackAttachProcess(Process, &ApcState);
        v7 = 1;
        goto LABEL_7;
      }
    }
    v12 = 0;
    goto LABEL_7;
  }
  if ( v5 && (*v5 & 1) != 0 && !v3 )
    EtwpTraceProcessRundown(v11, v2, 0x327u, a2);
  return 0LL;
}
