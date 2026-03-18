/*
 * XREFs of ?AllocateAndGetBaseRustExports@@YAJPEBU_SYSTEM_GDI_DRIVER_INFORMATION@@PEAPEAUBaseRustExportsStorage@@@Z @ 0x1401C8640
 * Callers:
 *     Win32kBaseRustPatchCalloutHandler @ 0x1401C8B40 (Win32kBaseRustPatchCalloutHandler.c)
 * Callees:
 *     ?GetBaseRustExports@@YAJPEAUBaseRustExportsStorage@@@Z @ 0x1401C88B4 (-GetBaseRustExports@@YAJPEAUBaseRustExportsStorage@@@Z.c)
 */

__int64 __fastcall AllocateAndGetBaseRustExports(
        const struct _SYSTEM_GDI_DRIVER_INFORMATION *a1,
        struct BaseRustExportsStorage **a2)
{
  __int64 Pool2; // rax
  void *v4; // rbx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  int BaseRustExports; // edi

  Pool2 = ExAllocatePool2(256LL, 672LL, 1198814034LL);
  v4 = (void *)Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v6 = *(_OWORD *)&a1->ImageAddress;
  *(UNICODE_STRING *)Pool2 = a1->DriverName;
  v7 = *(_OWORD *)&a1->EntryPoint;
  *(_OWORD *)(Pool2 + 16) = v6;
  *(_OWORD *)(Pool2 + 32) = v7;
  BaseRustExports = GetBaseRustExports((struct BaseRustExportsStorage *)Pool2);
  if ( BaseRustExports < 0 )
    ExFreePoolWithTag(v4, 0);
  else
    qword_1402A10C8 = (__int64)v4;
  return (unsigned int)BaseRustExports;
}
