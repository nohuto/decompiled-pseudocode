/*
 * XREFs of DbgkClearProcessDebugObject @ 0x140957E88
 * Callers:
 *     PspTerminateAllThreads @ 0x14095705C (PspTerminateAllThreads.c)
 *     NtRemoveProcessDebug @ 0x140985870 (NtRemoveProcessDebug.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     DbgkpMarkProcessPeb @ 0x140775AB4 (DbgkpMarkProcessPeb.c)
 *     DbgkpWakeTarget @ 0x140985E88 (DbgkpWakeTarget.c)
 */

__int64 __fastcall DbgkClearProcessDebugObject(PRKPROCESS PROCESS, __int64 a2)
{
  unsigned __int64 UserTime; // rbx
  int v5; // edi
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  PVOID **v9; // r10
  _QWORD *v10; // rcx
  PVOID *v11; // r9
  _DWORD *v12; // rcx
  __int64 v13; // rax
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]

  ExAcquireFastMutex((PKGUARDED_MUTEX)&EmpParseLock.152);
  UserTime = PROCESS[1].UserTime;
  if ( UserTime && (UserTime == a2 || !a2) )
  {
    PROCESS[1].UserTime = 0LL;
    v5 = 0;
  }
  else
  {
    UserTime = 0LL;
    v5 = -1073740973;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&EmpParseLock.152);
  if ( v5 >= 0 )
    DbgkpMarkProcessPeb(PROCESS);
  if ( UserTime )
  {
    p_P = &P;
    P = &P;
    ExAcquireFastMutex((PKGUARDED_MUTEX)(UserTime + 24));
    v7 = *(_QWORD **)(UserTime + 80);
    while ( v7 != (_QWORD *)(UserTime + 80) )
    {
      v8 = v7;
      v9 = (PVOID **)v7;
      v7 = (_QWORD *)*v7;
      if ( (PRKPROCESS)v8[7] == PROCESS )
      {
        if ( (_QWORD *)v7[1] != v8
          || (v10 = (_QWORD *)v8[1], (_QWORD *)*v10 != v8)
          || (*v10 = v7, v7[1] = v10, v11 = p_P, *p_P != &P) )
        {
LABEL_13:
          __fastfail(3u);
        }
        v8[1] = p_P;
        *v9 = &P;
        *v11 = v8;
        p_P = (PVOID *)v8;
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(UserTime + 24));
    ObfDereferenceObject((PVOID)UserTime);
    while ( 1 )
    {
      v12 = P;
      if ( P == &P )
        break;
      if ( *((PVOID **)P + 1) != &P )
        goto LABEL_13;
      v13 = *(_QWORD *)P;
      if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
        goto LABEL_13;
      P = *(PVOID *)P;
      *(_QWORD *)(v13 + 8) = &P;
      v12[18] = -1073740972;
      DbgkpWakeTarget(v12);
    }
  }
  return (unsigned int)v5;
}
