/*
 * XREFs of PiUEventFreeClientRegistrationContext @ 0x1409A8FAC
 * Callers:
 *     PiUEventDispatch @ 0x1409A75A0 (PiUEventDispatch.c)
 *     PiUEventHandleRegistration @ 0x1409A80E0 (PiUEventHandleRegistration.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     ZwDeleteWnfStateName @ 0x140729BE0 (ZwDeleteWnfStateName.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     PiDmObjectRelease @ 0x140966A60 (PiDmObjectRelease.c)
 *     PiUEventDequeuePendingEventWorker @ 0x1409A764C (PiUEventDequeuePendingEventWorker.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiUEventFreeClientRegistrationContext(char *P, char a2)
{
  PKGUARDED_MUTEX v3; // rcx
  PVOID *v4; // rax
  int v5; // ecx
  int v6; // ecx
  char *v7; // rdi
  char *v8; // rdi
  int v9; // ecx
  char *v10; // rdx
  char *v11; // rdx
  unsigned int *v12; // rcx

  if ( a2 )
  {
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    ExAcquireFastMutex(*((PKGUARDED_MUTEX *)P + 2));
    v3 = *(PKGUARDED_MUTEX *)P;
    if ( *(char **)(*(_QWORD *)P + 8LL) != P || (v4 = (PVOID *)*((_QWORD *)P + 1), *v4 != P) )
      __fastfail(3u);
    *v4 = v3;
    v3->Owner = v4;
    v5 = *((_DWORD *)P + 33);
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v9 = v6 - 1;
        if ( v9 )
        {
          if ( v9 == 1 )
            --PiUEventDevInstancePropertyClientCount;
        }
        else
        {
          --PiUEventDevInstanceClientCount;
        }
      }
      else
      {
        --PiUEventDevHandleClientCount;
      }
    }
    else
    {
      --PiUEventDevInterfaceClientCount;
    }
    v7 = (char *)*((_QWORD *)P + 14);
    while ( v7 != P + 112 )
    {
      v10 = v7;
      v7 = *(char **)v7;
      PiUEventDequeuePendingEventWorker((__int64)P, v10, 0, 1);
    }
    v8 = (char *)*((_QWORD *)P + 12);
    while ( v8 != P + 96 )
    {
      v11 = v8;
      v8 = *(char **)v8;
      PiUEventDequeuePendingEventWorker((__int64)P, v11, 1, 1);
    }
    KeReleaseGuardedMutex(*((PKGUARDED_MUTEX *)P + 2));
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  }
  if ( *((_DWORD *)P + 33) == 1 || (unsigned int)(*((_DWORD *)P + 33) - 2) < 2 )
  {
    v12 = (unsigned int *)*((_QWORD *)P + 3);
    if ( v12 )
      PiDmObjectRelease(v12);
  }
  ZwDeleteWnfStateName((PCWNF_STATE_NAME)P + 11);
  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(P + 56));
  ExFreePoolWithTag(*((PVOID *)P + 2), 0x59706E50u);
  memset_0(P, 0, 0x90uLL);
  ExFreePoolWithTag(P, 0x59706E50u);
}
