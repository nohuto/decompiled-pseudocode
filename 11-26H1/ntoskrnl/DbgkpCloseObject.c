/*
 * XREFs of DbgkpCloseObject @ 0x1409BA900
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     DbgkpMarkProcessPeb @ 0x14077895C (DbgkpMarkProcessPeb.c)
 *     DbgkpWakeTarget @ 0x14091D3BC (DbgkpWakeTarget.c)
 *     PsTerminateProcess @ 0x14094A334 (PsTerminateProcess.c)
 *     PsGetNextProcess @ 0x1409BC470 (PsGetNextProcess.c)
 */

void __fastcall DbgkpCloseObject(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  _QWORD *v5; // rsi
  char v6; // bl
  struct _KPROCESS *i; // rcx
  __int64 NextProcess; // rax
  struct _KPROCESS *v9; // rdi
  _QWORD *v10; // rcx

  if ( a4 <= 1 )
  {
    ExAcquireFastMutex((PKGUARDED_MUTEX)(a2 + 24));
    *(_DWORD *)(a2 + 96) |= 1u;
    v5 = *(_QWORD **)(a2 + 80);
    *(_QWORD *)(a2 + 88) = a2 + 80;
    *(_QWORD *)(a2 + 80) = a2 + 80;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a2 + 24));
    KeSetEvent((PRKEVENT)a2, 0, 0);
    v6 = *(_BYTE *)(a2 + 96) & 2;
    for ( i = 0LL; ; i = v9 )
    {
      NextProcess = PsGetNextProcess(i);
      v9 = (struct _KPROCESS *)NextProcess;
      if ( !NextProcess )
        break;
      if ( *(_QWORD *)(NextProcess + 776) == a2 )
      {
        v6 &= ~1u;
        ExAcquireFastMutex((PKGUARDED_MUTEX)&EmpParseLock.ApcStateFill[8]);
        if ( v9[1].UserTime == a2 )
        {
          v9[1].UserTime = 0LL;
          v6 |= 1u;
        }
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)&EmpParseLock.ApcStateFill[8]);
        if ( (v6 & 1) != 0 )
        {
          DbgkpMarkProcessPeb(v9);
          if ( (v6 & 2) != 0 )
            PsTerminateProcess(v9);
          ObfDereferenceObject((PVOID)a2);
        }
      }
    }
    while ( v5 != (_QWORD *)(a2 + 80) )
    {
      v10 = v5;
      v5 = (_QWORD *)*v5;
      *((_DWORD *)v10 + 18) = -1073740972;
      DbgkpWakeTarget((char *)v10);
    }
  }
}
