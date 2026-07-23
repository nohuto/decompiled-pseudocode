/*
 * XREFs of PsUnregisterSiloMonitor @ 0x1408018B0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     PspGetServerSiloStatePointer @ 0x14052B9B8 (PspGetServerSiloStatePointer.c)
 *     PspGetHostSiloStorage @ 0x1406178A0 (PspGetHostSiloStorage.c)
 *     PspAcquirePushLockExclusive @ 0x14061909C (PspAcquirePushLockExclusive.c)
 *     PspReleasePushLockExclusive @ 0x140619120 (PspReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PspStorageFreeSlot @ 0x140805524 (PspStorageFreeSlot.c)
 *     PspStorageRemoveObject @ 0x140805638 (PspStorageRemoveObject.c)
 *     PspGetNextSilo @ 0x1409FF6D8 (PspGetNextSilo.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PsUnregisterSiloMonitor(_BYTE *P, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rdx
  __int64 i; // rcx
  __int64 NextSilo; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rax
  PVOID *v12; // rcx
  __int64 HostSiloStorage; // rax
  __int64 v14; // r8
  int v15; // edi
  _OWORD v16[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v16, 0, sizeof(v16));
  PspAcquirePushLockExclusive((__int64)P, a2, a3, a4);
  if ( *(_OWORD *)P != 0LL )
  {
    if ( *((_QWORD *)P + 4) )
    {
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v16);
      for ( i = 0LL; ; i = v8 )
      {
        LOBYTE(v5) = 1;
        NextSilo = PspGetNextSilo(i, v5);
        v8 = NextSilo;
        if ( !NextSilo )
          break;
        if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer(NextSilo) - 1) <= 2 )
          guard_dispatch_icall_no_overrides(v8, v5);
      }
      if ( P[16] )
      {
        v9 = HalSystemVectorDispatchEntry();
        guard_dispatch_icall_no_overrides(v9, v10);
      }
      KiUnstackDetachProcess((__int64)v16, 0);
    }
    v11 = *(_QWORD **)P;
    if ( *(_BYTE **)(*(_QWORD *)P + 8LL) != P || (v12 = (PVOID *)*((_QWORD *)P + 1), *v12 != P) )
      __fastfail(3u);
    *v12 = v11;
    v11[1] = v12;
    *(_QWORD *)P = 0LL;
    *((_QWORD *)P + 1) = 0LL;
  }
  PspReleasePushLockExclusive();
  if ( P[16] )
  {
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v16);
    HostSiloStorage = PspGetHostSiloStorage();
    LOBYTE(v14) = 1;
    v15 = PspStorageRemoveObject(HostSiloStorage, *((unsigned int *)P + 5), v14, 0LL);
    KiUnstackDetachProcess((__int64)v16, 0);
    if ( v15 )
    {
      if ( v15 != -1073741275 )
        NT_ASSERT("Status == ((NTSTATUS)0x00000000L) || Status == ((NTSTATUS)0xC0000225L)");
    }
  }
  PspStorageFreeSlot(*((unsigned int *)P + 5));
  ExFreePoolWithTag(P, 0x4D6C6953u);
}
