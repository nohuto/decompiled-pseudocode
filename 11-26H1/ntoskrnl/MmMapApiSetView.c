/*
 * XREFs of MmMapApiSetView @ 0x140863ED4
 * Callers:
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x140A9A3AC (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     PsIsHostSilo @ 0x14046E630 (PsIsHostSilo.c)
 *     PsGetProcessServerSilo @ 0x140476BF0 (PsGetProcessServerSilo.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404E5578 (MiModeCopyExceptionFilterEx.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     MmMapViewOfSection @ 0x1409C1F50 (MmMapViewOfSection.c)
 *     MiWow64SetApiSetMap @ 0x140B27AF4 (MiWow64SetApiSetMap.c)
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
    LODWORD(v3) = stru_140E2D150.Timer.TimerListEntry.Blink;
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
