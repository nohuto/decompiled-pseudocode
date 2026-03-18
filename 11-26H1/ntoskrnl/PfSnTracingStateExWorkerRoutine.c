/*
 * XREFs of PfSnTracingStateExWorkerRoutine @ 0x1407C7450
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnTracingStateExWorkerRoutine(PVOID P)
{
  void *v2; // rcx
  _KSCHEDULING_GROUP *volatile **v3; // rax

  ExAcquireFastMutex((PKGUARDED_MUTEX)((char *)&stru_140E66FF0.116 + 4));
  if ( *(_DWORD *)&stru_140E66FF0.ApcStateFill[28] == 2 )
  {
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)((char *)&stru_140E66FF0.116 + 4));
  }
  else
  {
    *(_DWORD *)&stru_140E66FF0.ApcStateFill[28] = 1;
    while ( (_KSCHEDULING_GROUP *volatile *)stru_140E66FF0.SchedulingGroup != &stru_140E66FF0.SchedulingGroup )
    {
      v2 = *(void **)&stru_140E66FF0.WaitRegister.Flags;
      if ( **(struct _KTHREAD ***)&stru_140E66FF0.WaitRegister.Flags != (struct _KTHREAD *)&stru_140E66FF0.SchedulingGroup
        || (v3 = *(_KSCHEDULING_GROUP *volatile ***)(*(_QWORD *)&stru_140E66FF0.WaitRegister.Flags + 8LL),
            *v3 != *(_KSCHEDULING_GROUP *volatile **)&stru_140E66FF0.WaitRegister.Flags) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)&stru_140E66FF0.WaitRegister.Flags = *(_QWORD *)(*(_QWORD *)&stru_140E66FF0.WaitRegister.Flags + 8LL);
      *v3 = &stru_140E66FF0.SchedulingGroup;
      ExFreePoolWithTag(v2, 0);
      --*(_DWORD *)&stru_140E66FF0.ApcStateFill[24];
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)((char *)&stru_140E66FF0.116 + 4));
    if ( stru_140E66FF0.ApcState.Process )
      KeSetEvent((PRKEVENT)stru_140E66FF0.ApcState.Process, 0, 0);
  }
  ExFreePoolWithTag(P, 0);
}
