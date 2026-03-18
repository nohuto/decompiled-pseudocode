/*
 * XREFs of KeIsEnqueueStoreAndMovDir64BSupported @ 0x1403D52B8
 * Callers:
 *     KiInitializeContextThread @ 0x1403D4E4C (KiInitializeContextThread.c)
 *     ExIsSvmPasidMsrUpdateRequiredForProcess @ 0x140A04188 (ExIsSvmPasidMsrUpdateRequiredForProcess.c)
 * Callees:
 *     <none>
 */

bool KeIsEnqueueStoreAndMovDir64BSupported()
{
  return (KeFeatureBits & 0x100000000000000LL) != 0 && (KeFeatureBits & 0x400000000000000LL) != 0;
}
