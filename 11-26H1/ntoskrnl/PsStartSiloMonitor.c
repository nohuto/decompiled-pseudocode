/*
 * XREFs of PsStartSiloMonitor @ 0x140801670
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     PspGetServerSiloStatePointer @ 0x14052B9B8 (PspGetServerSiloStatePointer.c)
 *     PspAcquirePushLockExclusive @ 0x14061909C (PspAcquirePushLockExclusive.c)
 *     PspReleasePushLockExclusive @ 0x140619120 (PspReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PspInvokeCreateCallback @ 0x140801A48 (PspInvokeCreateCallback.c)
 *     PspInvokeTerminateCallback @ 0x140801AAC (PspInvokeTerminateCallback.c)
 *     PspGetNextSilo @ 0x1409FF6D8 (PspGetNextSilo.c)
 */

__int64 __fastcall PsStartSiloMonitor(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v5; // edi
  __int64 v6; // rdx
  __int64 i; // rcx
  __int64 NextSilo; // rax
  __int64 v9; // r8
  __int64 v10; // rsi
  char v11; // si
  int v12; // ebp
  __int64 v13; // rdx
  __int64 j; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 *v17; // rax
  int v18; // esi
  __int64 v19; // rdx
  __int64 k; // rcx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  _OWORD v25[3]; // [rsp+20h] [rbp-58h] BYREF

  memset(v25, 0, sizeof(v25));
  v5 = 0;
  PspAcquirePushLockExclusive(a1, a2, a3, a4);
  if ( !*(_QWORD *)a1 && !*(_QWORD *)(a1 + 8) )
  {
    if ( !*(_BYTE *)(a1 + 17) )
    {
      for ( i = 0LL; ; i = v9 )
      {
        LOBYTE(v6) = 1;
        NextSilo = PspGetNextSilo(i, v6);
        if ( !NextSilo )
          break;
        if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer(NextSilo) - 1) <= 2 )
        {
          v5 = -1073741637;
          goto LABEL_37;
        }
      }
    }
    if ( *(_QWORD *)(a1 + 24) )
    {
      if ( !*(_BYTE *)(a1 + 16) )
        goto LABEL_15;
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v25);
      v10 = HalSystemVectorDispatchEntry();
      v5 = PspInvokeCreateCallback(v10, a1);
      if ( v5 < 0 && *(_QWORD *)(a1 + 32) )
        PspInvokeTerminateCallback(v10, a1);
      KiUnstackDetachProcess((__int64)v25, 0);
      if ( v5 >= 0 )
      {
LABEL_15:
        v11 = 0;
        v12 = 0;
        KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v25);
        for ( j = 0LL; ; j = v16 )
        {
          LOBYTE(v13) = 1;
          v15 = PspGetNextSilo(j, v13);
          v16 = v15;
          if ( !v15 )
            break;
          if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer(v15) - 1) <= 2 )
          {
            ++v12;
            if ( (int)PspInvokeCreateCallback(v16, a1) < 0 )
              v11 = 1;
          }
        }
        KiUnstackDetachProcess((__int64)v25, 0);
        if ( v11 )
        {
          if ( *(_QWORD *)(a1 + 32) )
          {
            v18 = 0;
            KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v25);
            for ( k = 0LL; ; k = v22 )
            {
              LOBYTE(v19) = 1;
              v21 = PspGetNextSilo(k, v19);
              v22 = v21;
              if ( !v21 )
                break;
              if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer(v21) - 1) <= 2 )
              {
                PspInvokeTerminateCallback(v22, a1);
                ++v18;
              }
            }
            if ( v12 != v18 )
              NT_ASSERT("CreateCount == TerminateCount");
            if ( *(_BYTE *)(a1 + 16) )
            {
              v23 = HalSystemVectorDispatchEntry();
              PspInvokeCreateCallback(v23, a1);
            }
            KiUnstackDetachProcess((__int64)v25, 0);
          }
          v5 = -1073741248;
        }
        else
        {
          v17 = *(__int64 **)&KiSystemServiceTraceCallbackLock.CurrentRunTime;
          if ( **(struct _KTHREAD ***)&KiSystemServiceTraceCallbackLock.CurrentRunTime != (struct _KTHREAD *)&KiSystemServiceTraceCallbackLock.CycleTime )
            __fastfail(3u);
          *(_QWORD *)a1 = &KiSystemServiceTraceCallbackLock.CycleTime;
          v5 = 0;
          *(_QWORD *)(a1 + 8) = v17;
          *v17 = a1;
          *(_QWORD *)&KiSystemServiceTraceCallbackLock.CurrentRunTime = a1;
        }
      }
    }
  }
LABEL_37:
  PspReleasePushLockExclusive();
  return (unsigned int)v5;
}
