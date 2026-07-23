/*
 * XREFs of MiIsKernelHalPadSection @ 0x1404FA56C
 * Callers:
 *     MiSnapDriverRange @ 0x140ACB6BC (MiSnapDriverRange.c)
 *     MiFreeKernelPadSections @ 0x140D060E4 (MiFreeKernelPadSections.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsKernelHalPadSection(__int64 a1)
{
  return (*(_DWORD *)(a1 + 36) & 0x2000000) != 0
      && *(_BYTE *)a1 == 80
      && *(_BYTE *)(a1 + 1) == 97
      && *(_BYTE *)(a1 + 2) == 100
      && (unsigned __int8)(*(_BYTE *)(a1 + 3) - 48) <= 9u;
}
