/*
 * XREFs of ExIsSvmEnabledForProcess @ 0x1404B6164
 * Callers:
 *     ExIsSvmPasidMsrUpdateRequiredForProcess @ 0x140A7BF00 (ExIsSvmPasidMsrUpdateRequiredForProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExIsSvmEnabledForProcess(__int64 a1)
{
  return *(_DWORD *)(a1 + 1536) != 0;
}
