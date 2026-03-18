/*
 * XREFs of RtlGetHostNtSystemRoot @ 0x140B46F80
 * Callers:
 *     IoConfigureCrashDump @ 0x1405C63E0 (IoConfigureCrashDump.c)
 *     IopStoreBootDriveLetter @ 0x140CBE1A0 (IopStoreBootDriveLetter.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     HalSystemVectorDispatchEntry @ 0x1404BD660 (HalSystemVectorDispatchEntry.c)
 */

char *RtlGetHostNtSystemRoot()
{
  __int64 v0; // rax

  v0 = HalSystemVectorDispatchEntry();
  return (char *)PsGetServerSiloGlobals(v0) + 1232;
}
