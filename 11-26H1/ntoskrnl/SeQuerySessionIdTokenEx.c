/*
 * XREFs of SeQuerySessionIdTokenEx @ 0x140A661C0
 * Callers:
 *     PiUEventApplyAdditionalFilters @ 0x14099A920 (PiUEventApplyAdditionalFilters.c)
 * Callees:
 *     PsGetSessionById @ 0x140215D80 (PsGetSessionById.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     PsGetServerSiloServiceSessionId @ 0x140487140 (PsGetServerSiloServiceSessionId.c)
 */

NTSTATUS __stdcall SeQuerySessionIdTokenEx(PACCESS_TOKEN Token, PULONG SessionId, PBOOLEAN IsServiceSession)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD *SessionById; // rax
  __int64 v11; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
  v7 = *((_DWORD *)Token + 30);
  *SessionId = v7;
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9);
  if ( v7 )
  {
    SessionById = (_QWORD *)PsGetSessionById(v7);
    if ( SessionById )
    {
      v11 = *(_QWORD *)(SessionById[93] + 160LL);
      ObfDereferenceObjectWithTag(SessionById, 0x79517350u);
      *IsServiceSession = v7 == (unsigned int)PsGetServerSiloServiceSessionId(v11);
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
