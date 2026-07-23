/*
 * XREFs of ExIsSvmPasidMsrUpdateRequiredForProcess @ 0x140A7BF00
 * Callers:
 *     ExpAssignPasid @ 0x1408470D8 (ExpAssignPasid.c)
 *     PspRecheckThreadPasidMsrState @ 0x140A7BE9C (PspRecheckThreadPasidMsrState.c)
 * Callees:
 *     KeIsEnqueueStoreAndMovDir64BSupported @ 0x1403D8288 (KeIsEnqueueStoreAndMovDir64BSupported.c)
 *     ExIsSvmEnabledForProcess @ 0x1404B6164 (ExIsSvmEnabledForProcess.c)
 */

char __fastcall ExIsSvmPasidMsrUpdateRequiredForProcess(__int64 a1)
{
  char v1; // dl

  if ( ExIsSvmEnabledForProcess(a1) && KeIsEnqueueStoreAndMovDir64BSupported() )
    return 1;
  return v1;
}
