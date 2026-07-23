/*
 * XREFs of MmMapApiSetView @ 0x14086A2B4
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x1409E53DC (PspSetupUserProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     PsIsHostSilo @ 0x140467DB0 (PsIsHostSilo.c)
 *     PsGetProcessServerSilo @ 0x140470370 (PsGetProcessServerSilo.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     MmMapViewOfSection @ 0x140992F30 (MmMapViewOfSection.c)
 *     MiWow64SetApiSetMap @ 0x140B29784 (MiWow64SetApiSetMap.c)
 */

__int64 __fastcall MmMapApiSetView(__int64 a1)
{
  __int64 ProcessServerSilo; // rbx
  __int64 v3; // rcx
  __int64 result; // rax
  unsigned int v5; // ebx
  __int64 v6; // [rsp+68h] [rbp+10h] BYREF
  __int64 v7; // [rsp+70h] [rbp+18h] BYREF
  __int64 v8; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0LL;
  v8 = 0LL;
  v7 = 0LL;
  ProcessServerSilo = PsGetProcessServerSilo(a1);
  if ( PsIsHostSilo(ProcessServerSilo) )
    LODWORD(v3) = stru_140E2D2D0.Timer.TimerListEntry.Blink;
  else
    v3 = *((_QWORD *)PsGetServerSiloGlobals(ProcessServerSilo) + 125);
  result = MmMapViewOfSection(v3, a1, (unsigned int)&v6, 0, 0LL, (__int64)&v8, (__int64)&v7, 1, 0x400000, 2);
  v5 = result;
  if ( (int)result >= 0 )
  {
    RtlWriteULong64ToUser((_QWORD *)(*(_QWORD *)(a1 + 736) + 104LL), v6);
    MiWow64SetApiSetMap(a1, v6);
    return v5;
  }
  return result;
}
