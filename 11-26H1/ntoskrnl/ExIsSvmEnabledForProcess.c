/*
 * XREFs of ExIsSvmEnabledForProcess @ 0x1404BC988
 * Callers:
 *     ExIsSvmPasidMsrUpdateRequiredForProcess @ 0x140A04188 (ExIsSvmPasidMsrUpdateRequiredForProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExIsSvmEnabledForProcess(__int64 a1)
{
  return *(_DWORD *)(a1 + 1536) != 0;
}
