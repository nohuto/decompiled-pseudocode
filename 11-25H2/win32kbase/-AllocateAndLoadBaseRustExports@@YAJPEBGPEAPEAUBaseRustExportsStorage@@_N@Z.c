/*
 * XREFs of ?AllocateAndLoadBaseRustExports@@YAJPEBGPEAPEAUBaseRustExportsStorage@@_N@Z @ 0x1401C86CC
 * Callers:
 *     ?HotswapBaseRustBinary@@YAJPEBG@Z @ 0x1401C89C0 (-HotswapBaseRustBinary@@YAJPEBG@Z.c)
 *     InitializeGre @ 0x1402EC79C (InitializeGre.c)
 * Callees:
 *     ?FindHotpatchImageIfExists@@YAJKKPEAU_SYSTEM_GDI_DRIVER_INFORMATION@@@Z @ 0x1401C880C (-FindHotpatchImageIfExists@@YAJKKPEAU_SYSTEM_GDI_DRIVER_INFORMATION@@@Z.c)
 *     ?GetBaseRustExports@@YAJPEAUBaseRustExportsStorage@@@Z @ 0x1401C88B4 (-GetBaseRustExports@@YAJPEAUBaseRustExportsStorage@@@Z.c)
 */

__int64 __fastcall AllocateAndLoadBaseRustExports(PCWSTR SourceString, struct _UNICODE_STRING **a2, char a3)
{
  struct _UNICODE_STRING *Pool2; // rax
  struct _UNICODE_STRING *v7; // rbx
  NTSTATUS v9; // eax
  int BaseRustExports; // edi
  PIMAGE_NT_HEADERS v11; // rax
  struct _UNICODE_STRING v12; // xmm1
  struct _UNICODE_STRING v13; // xmm0
  _SYSTEM_GDI_DRIVER_INFORMATION v14; // [rsp+20h] [rbp-38h] BYREF

  Pool2 = (struct _UNICODE_STRING *)ExAllocatePool2(256LL, 672LL, 1198814034LL);
  v7 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  RtlInitUnicodeString(Pool2, SourceString);
  v9 = ZwSetSystemInformation(SystemLoadGdiDriverInSystemSpaceInformation, v7, 0x30uLL);
  BaseRustExports = v9;
  *v7 = 0LL;
  if ( !a3 )
  {
    if ( v9 >= 0 )
      goto LABEL_8;
LABEL_10:
    ExFreePoolWithTag(v7, 0);
    return (unsigned int)BaseRustExports;
  }
  if ( v9 < 0 )
    goto LABEL_10;
  v11 = RtlImageNtHeader(*(PVOID *)&v7[1].Length);
  memset(&v14, 0, 48);
  if ( (int)FindHotpatchImageIfExists(v11->OptionalHeader.CheckSum, v11->FileHeader.TimeDateStamp, &v14) >= 0 )
  {
    v12 = *(struct _UNICODE_STRING *)&v14.ImageAddress;
    *v7 = v14.DriverName;
    v13 = *(struct _UNICODE_STRING *)&v14.EntryPoint;
    v7[1] = v12;
    v7[2] = v13;
  }
LABEL_8:
  BaseRustExports = GetBaseRustExports((struct BaseRustExportsStorage *)v7);
  if ( BaseRustExports < 0 )
    goto LABEL_10;
  DbgPrintEx(0x70u, 3u, "successfully loaded win32kbase_rs.sys\n");
  *a2 = v7;
  return (unsigned int)BaseRustExports;
}
