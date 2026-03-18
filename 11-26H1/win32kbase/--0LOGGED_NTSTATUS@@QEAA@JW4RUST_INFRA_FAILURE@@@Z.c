/*
 * XREFs of ??0LOGGED_NTSTATUS@@QEAA@JW4RUST_INFRA_FAILURE@@@Z @ 0x1401F3C48
 * Callers:
 *     ?GetBaseRustExports@@YA?AVLOGGED_NTSTATUS@@PEAUBaseRustExportsStorage@@@Z @ 0x1401F3DB4 (-GetBaseRustExports@@YA-AVLOGGED_NTSTATUS@@PEAUBaseRustExportsStorage@@@Z.c)
 *     ?HotswapBaseRustBinary@@YAJPEBG@Z @ 0x1401F3EE0 (-HotswapBaseRustBinary@@YAJPEBG@Z.c)
 *     ?FindHotpatchImageIfExists@@YA?AVLOGGED_NTSTATUS@@KKPEAU_SYSTEM_GDI_DRIVER_INFORMATION@@@Z @ 0x1402F3310 (-FindHotpatchImageIfExists@@YA-AVLOGGED_NTSTATUS@@KKPEAU_SYSTEM_GDI_DRIVER_INFORMATION@@@Z.c)
 *     ?InitializeAndLoadBaseRustExports@@YA?AVLOGGED_NTSTATUS@@PEAPEAUBaseRustExportsStorage@@@Z @ 0x1402F33B8 (-InitializeAndLoadBaseRustExports@@YA-AVLOGGED_NTSTATUS@@PEAPEAUBaseRustExportsStorage@@@Z.c)
 * Callees:
 *     EngBugCheckEx @ 0x1401C0710 (EngBugCheckEx.c)
 */

int *__fastcall LOGGED_NTSTATUS::LOGGED_NTSTATUS(int *a1, int a2, int a3)
{
  ULONG_PTR v3; // rdi
  ULONG_PTR v5; // rsi

  v3 = a2;
  *a1 = a2;
  v5 = a3;
  if ( a2 < 0 && a3 && !(unsigned int)PsGetCurrentProcessSessionId() )
    EngBugCheckEx(0x164u, 0x3DuLL, v5, v3, 0LL);
  return a1;
}
