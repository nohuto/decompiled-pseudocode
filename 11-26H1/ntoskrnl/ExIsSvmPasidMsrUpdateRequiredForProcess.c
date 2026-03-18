/*
 * XREFs of ExIsSvmPasidMsrUpdateRequiredForProcess @ 0x140A04188
 * Callers:
 *     ExpAssignPasid @ 0x140840E98 (ExpAssignPasid.c)
 *     PspRecheckThreadPasidMsrState @ 0x140A04124 (PspRecheckThreadPasidMsrState.c)
 * Callees:
 *     KeIsEnqueueStoreAndMovDir64BSupported @ 0x1403D52B8 (KeIsEnqueueStoreAndMovDir64BSupported.c)
 *     ExIsSvmEnabledForProcess @ 0x1404BC988 (ExIsSvmEnabledForProcess.c)
 */

char __fastcall ExIsSvmPasidMsrUpdateRequiredForProcess(__int64 a1)
{
  char v1; // dl

  if ( ExIsSvmEnabledForProcess(a1) && KeIsEnqueueStoreAndMovDir64BSupported() )
    return 1;
  return v1;
}
