/*
 * XREFs of ?InitializeAndLoadBaseRustExports@@YA?AVLOGGED_NTSTATUS@@PEAPEAUBaseRustExportsStorage@@@Z @ 0x1402F33B8
 * Callers:
 *     ?LoadAndConnectRustCode@@YAJXZ @ 0x1402F34D4 (-LoadAndConnectRustCode@@YAJXZ.c)
 * Callees:
 *     ??0LOGGED_NTSTATUS@@QEAA@JW4RUST_INFRA_FAILURE@@@Z @ 0x1401F3C48 (--0LOGGED_NTSTATUS@@QEAA@JW4RUST_INFRA_FAILURE@@@Z.c)
 *     ?GetBaseRustExports@@YA?AVLOGGED_NTSTATUS@@PEAUBaseRustExportsStorage@@@Z @ 0x1401F3DB4 (-GetBaseRustExports@@YA-AVLOGGED_NTSTATUS@@PEAUBaseRustExportsStorage@@@Z.c)
 *     ?FindHotpatchImageIfExists@@YA?AVLOGGED_NTSTATUS@@KKPEAU_SYSTEM_GDI_DRIVER_INFORMATION@@@Z @ 0x1402F3310 (-FindHotpatchImageIfExists@@YA-AVLOGGED_NTSTATUS@@KKPEAU_SYSTEM_GDI_DRIVER_INFORMATION@@@Z.c)
 */

int *__fastcall InitializeAndLoadBaseRustExports(int *a1, PSECURITY_DESCRIPTOR **a2)
{
  NTSTATUS v4; // eax
  PIMAGE_NT_HEADERS v5; // rax
  int v6; // eax
  __int128 v8; // [rsp+20h] [rbp-18h]
  int v9; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)&v8 = 5111884LL;
  *((_QWORD *)&v8 + 1) = L"\\SystemRoot\\System32\\win32kbase_rs.sys";
  xmmword_1402AAC98 = v8;
  v4 = ZwSetSystemInformation(SystemLoadGdiDriverInSystemSpaceInformation, &xmmword_1402AAC98, 0x30uLL);
  LOGGED_NTSTATUS::LOGGED_NTSTATUS(a1, v4, 2);
  if ( *a1 >= 0 )
  {
    v5 = RtlImageNtHeader(BaseAddress);
    if ( *FindHotpatchImageIfExists(&v9, v5->OptionalHeader.CheckSum, v5->FileHeader.TimeDateStamp, &xmmword_1402AACE0) >= 0 )
    {
      xmmword_1402AAC98 = xmmword_1402AACE0;
      xmmword_1402AACB8 = xmmword_1402AAD00;
      *(_OWORD *)&BaseAddress = xmmword_1402AACF0;
    }
  }
  if ( *a1 >= 0 )
  {
    v6 = *GetBaseRustExports(&v9, (__int64)&WPP_MAIN_CB.SecurityDescriptor);
    *a1 = v6;
    if ( v6 >= 0 )
    {
      DbgPrintEx(0x70u, 3u, "successfully loaded win32kbase_rs.sys\n");
      *a2 = &WPP_MAIN_CB.SecurityDescriptor;
    }
  }
  return a1;
}
