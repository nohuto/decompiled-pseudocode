/*
 * XREFs of DbgkpCloseObject @ 0x140AFF4E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     DbgkpMarkProcessPeb @ 0x140775AB4 (DbgkpMarkProcessPeb.c)
 *     PsTerminateProcess @ 0x14095690C (PsTerminateProcess.c)
 *     PsGetNextProcess @ 0x14096EE20 (PsGetNextProcess.c)
 *     DbgkpWakeTarget @ 0x140985E88 (DbgkpWakeTarget.c)
 */

void __fastcall DbgkpCloseObject(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  _QWORD *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  char v9; // bl
  struct _KPROCESS *i; // rcx
  LIST_ENTRY *NextProcess; // rax
  struct _KPROCESS *v12; // rdi
  _QWORD *v13; // rcx

  if ( a4 <= 1 )
  {
    ExAcquireFastMutex((PKGUARDED_MUTEX)(a2 + 24));
    *(_DWORD *)(a2 + 96) |= 1u;
    v5 = *(_QWORD **)(a2 + 80);
    *(_QWORD *)(a2 + 88) = a2 + 80;
    *(_QWORD *)(a2 + 80) = a2 + 80;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a2 + 24));
    KeSetEvent((PRKEVENT)a2, 0, 0);
    v9 = *(_BYTE *)(a2 + 96) & 2;
    for ( i = 0LL; ; i = v12 )
    {
      NextProcess = PsGetNextProcess(i, v6, v7, v8);
      v12 = (struct _KPROCESS *)NextProcess;
      if ( !NextProcess )
        break;
      if ( NextProcess[48].Blink == (struct _LIST_ENTRY *)a2 )
      {
        v9 &= ~1u;
        ExAcquireFastMutex((PKGUARDED_MUTEX)&EmpParseLock.152);
        if ( v12[1].UserTime == a2 )
        {
          v12[1].UserTime = 0LL;
          v9 |= 1u;
        }
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)&EmpParseLock.152);
        if ( (v9 & 1) != 0 )
        {
          DbgkpMarkProcessPeb(v12);
          if ( (v9 & 2) != 0 )
            PsTerminateProcess(v12);
          ObfDereferenceObject((PVOID)a2);
        }
      }
    }
    while ( v5 != (_QWORD *)(a2 + 80) )
    {
      v13 = v5;
      v5 = (_QWORD *)*v5;
      *((_DWORD *)v13 + 18) = -1073740972;
      DbgkpWakeTarget((char *)v13);
    }
  }
}
