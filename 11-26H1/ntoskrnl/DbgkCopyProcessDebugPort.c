/*
 * XREFs of DbgkCopyProcessDebugPort @ 0x1409845B8
 * Callers:
 *     PspInsertProcess @ 0x140983A9C (PspInsertProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     DbgkpMarkProcessPeb @ 0x140775AB4 (DbgkpMarkProcessPeb.c)
 *     PsTestProtectedProcessIncompatibility @ 0x140985588 (PsTestProtectedProcessIncompatibility.c)
 */

__int64 __fastcall DbgkCopyProcessDebugPort(PRKPROCESS PROCESS, __int64 a2, void *a3, char *a4)
{
  char v4; // di
  unsigned __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  int v11; // ebp
  __int16 v12; // ax
  _KPROCESS_SECURE_STATE v13; // rbp
  char v14; // bp
  _BYTE v15[8]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-B0h]
  __int64 v17; // [rsp+30h] [rbp-A8h]

  v4 = 0;
  PROCESS[1].UserTime = 0LL;
  v6 = (unsigned __int64)a3;
  if ( a3 )
  {
    PsReferenceSiloContext(a3);
  }
  else
  {
    if ( !*(_QWORD *)(a2 + 776) )
      goto LABEL_3;
    ExAcquireFastMutex((PKGUARDED_MUTEX)&EmpParseLock.152);
    v6 = *(_QWORD *)(a2 + 776);
    if ( v6 )
    {
      if ( (*(_DWORD *)(a2 + 500) & 2) != 0 )
        v6 = 0LL;
      else
        PsReferenceSiloContext(*(void **)(a2 + 776));
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&EmpParseLock.152);
    if ( !v6 )
      goto LABEL_3;
  }
  CurrentThread = KeGetCurrentThread();
  LOBYTE(CurrentThread) = CurrentThread->PreviousMode;
  if ( !(unsigned __int8)PsTestProtectedProcessIncompatibility(CurrentThread, a2, PROCESS) )
  {
    if ( (*(_DWORD *)(v6 + 96) & 4) != 0 )
    {
      if ( !PROCESS[1].ReadyTime || (v12 = WORD2(PROCESS[3].PerProcessorCycleTimes), v12 != 332) && v12 != 452 )
      {
        v11 = -1073741637;
        goto LABEL_7;
      }
    }
    v13.EntireField = (unsigned __int64)PROCESS->SecureState;
    if ( (v13.EntireField & 1) != 0 )
    {
      memset_0(v15, 0, 0x68uLL);
      v17 = 1LL;
      v16 = v13.EntireField & 0xFFFFFFFFFFFFFFFCuLL;
      v11 = VslpEnterIumSecureMode(2u, 0xCu, 0, (__int64)v15);
      if ( v11 < 0 )
        goto LABEL_7;
    }
    v14 = 0;
    ExAcquireFastMutex((PKGUARDED_MUTEX)(v6 + 24));
    if ( (*(_DWORD *)(v6 + 96) & 1) != 0 )
      v14 = 1;
    else
      PROCESS[1].UserTime = v6;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v6 + 24));
    if ( v14 )
    {
      ObfDereferenceObject((PVOID)v6);
    }
    else
    {
      DbgkpMarkProcessPeb(PROCESS);
      v4 = 1;
    }
LABEL_3:
    *a4 = v4;
    return 0LL;
  }
  v11 = -1073740014;
LABEL_7:
  ObfDereferenceObject((PVOID)v6);
  return (unsigned int)v11;
}
