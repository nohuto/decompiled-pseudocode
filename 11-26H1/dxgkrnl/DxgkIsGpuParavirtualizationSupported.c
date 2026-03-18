/*
 * XREFs of DxgkIsGpuParavirtualizationSupported @ 0x1401AA170
 * Callers:
 *     DpiFdoInitializeGpuVirtualization @ 0x1404279F8 (DpiFdoInitializeGpuVirtualization.c)
 * Callees:
 *     <none>
 */

bool __fastcall DxgkIsGpuParavirtualizationSupported(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(int *)(a1 + 2776) >= 9216 && (*(_DWORD *)(a1 + 2508) & 0x400) != 0 )
    return **(_BYTE **)(a1 + 3048) >= 0;
  return v1;
}
