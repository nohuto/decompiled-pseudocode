/*
 * XREFs of ?FindHotpatchImageIfExists@@YA?AVLOGGED_NTSTATUS@@KKPEAU_SYSTEM_GDI_DRIVER_INFORMATION@@@Z @ 0x1402F3310
 * Callers:
 *     ?InitializeAndLoadBaseRustExports@@YA?AVLOGGED_NTSTATUS@@PEAPEAUBaseRustExportsStorage@@@Z @ 0x1402F33B8 (-InitializeAndLoadBaseRustExports@@YA-AVLOGGED_NTSTATUS@@PEAPEAUBaseRustExportsStorage@@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14002BBDC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     UserGetLoadedImageInformation @ 0x1401D9CF0 (UserGetLoadedImageInformation.c)
 *     ??0LOGGED_NTSTATUS@@QEAA@JW4RUST_INFRA_FAILURE@@@Z @ 0x1401F3C48 (--0LOGGED_NTSTATUS@@QEAA@JW4RUST_INFRA_FAILURE@@@Z.c)
 *     ?PlatformReadRegistryString@NSInstrumentation@@YAJKPEBG0GPEAG@Z @ 0x1401FD4C4 (-PlatformReadRegistryString@NSInstrumentation@@YAJKPEBG0GPEAG@Z.c)
 */

int *__fastcall FindHotpatchImageIfExists(int *a1, unsigned int a2, int a3, _QWORD *a4)
{
  NSInstrumentation *v6; // rcx
  const unsigned __int16 *v7; // r8
  const unsigned __int16 *v8; // r9
  int v9; // r8d
  NTSTATUS RegistryString; // edi

  if ( (int)StringCchPrintfW(word_1402AAD10, 26LL, L"Hotpatch\\%08X%08X", a2, a3) >= 0 )
  {
    RegistryString = NSInstrumentation::PlatformReadRegistryString(v6, word_1402AAD10, v7, v8, (__int64)&word_1402AAD44);
    if ( RegistryString < 0 || (unsigned int)UserGetLoadedImageInformation(&word_1402AAD44, a4) )
    {
      *a1 = RegistryString;
      return a1;
    }
    v9 = 4;
  }
  else
  {
    v9 = 3;
  }
  LOGGED_NTSTATUS::LOGGED_NTSTATUS(a1, -1073741823, v9);
  return a1;
}
