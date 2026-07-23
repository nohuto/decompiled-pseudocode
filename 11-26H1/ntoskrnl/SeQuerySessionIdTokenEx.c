/*
 * XREFs of SeQuerySessionIdTokenEx @ 0x140A73190
 * Callers:
 *     PiUEventApplyAdditionalFilters @ 0x14095B380 (PiUEventApplyAdditionalFilters.c)
 * Callees:
 *     PsGetSessionById @ 0x1402160B0 (PsGetSessionById.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     PsGetServerSiloServiceSessionId @ 0x140480B10 (PsGetServerSiloServiceSessionId.c)
 */

NTSTATUS __stdcall SeQuerySessionIdTokenEx(PACCESS_TOKEN Token, PULONG SessionId, PBOOLEAN IsServiceSession)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG v7; // ebx
  _QWORD *SessionById; // rax
  __int64 v9; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
  v7 = *((_DWORD *)Token + 30);
  *SessionId = v7;
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v7 )
  {
    SessionById = (_QWORD *)PsGetSessionById(v7);
    if ( SessionById )
    {
      v9 = *(_QWORD *)(SessionById[93] + 160LL);
      ObfDereferenceObjectWithTag(SessionById, 0x79517350u);
      *IsServiceSession = v7 == (unsigned int)PsGetServerSiloServiceSessionId(v9);
    }
    else
    {
      *IsServiceSession = 0;
    }
  }
  else
  {
    *IsServiceSession = 1;
  }
  return 0;
}
