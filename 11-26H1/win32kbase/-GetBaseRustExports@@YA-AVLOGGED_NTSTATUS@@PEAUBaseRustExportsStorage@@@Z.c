/*
 * XREFs of ?GetBaseRustExports@@YA?AVLOGGED_NTSTATUS@@PEAUBaseRustExportsStorage@@@Z @ 0x1401F3DB4
 * Callers:
 *     ?AllocateAndGetBaseRustExports@@YAJPEBU_SYSTEM_GDI_DRIVER_INFORMATION@@PEAPECUBaseRustExportsStorage@@@Z @ 0x1401F3CB4 (-AllocateAndGetBaseRustExports@@YAJPEBU_SYSTEM_GDI_DRIVER_INFORMATION@@PEAPECUBaseRustExportsSto.c)
 *     ?InitializeAndLoadBaseRustExports@@YA?AVLOGGED_NTSTATUS@@PEAPEAUBaseRustExportsStorage@@@Z @ 0x1402F33B8 (-InitializeAndLoadBaseRustExports@@YA-AVLOGGED_NTSTATUS@@PEAPEAUBaseRustExportsStorage@@@Z.c)
 * Callees:
 *     ??0LOGGED_NTSTATUS@@QEAA@JW4RUST_INFRA_FAILURE@@@Z @ 0x1401F3C48 (--0LOGGED_NTSTATUS@@QEAA@JW4RUST_INFRA_FAILURE@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

int *__fastcall GetBaseRustExports(int *a1, __int64 a2)
{
  int v3; // edi
  __int64 (__fastcall *SystemRoutineAddress)(_QWORD *, char *); // rax
  __int64 v6; // r15
  char **v7; // rbx
  __int64 (__fastcall *v8)(_QWORD *, char *); // rbp
  char *v9; // rdx
  __int64 ExportedRoutineByName; // rax
  struct _UNICODE_STRING v12; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF

  v13[0] = 2359330LL;
  v13[1] = L"win32kbase_rs.sys";
  *(_QWORD *)&v12.Length = 3670070LL;
  v3 = 0;
  v12.Buffer = L"MmGetSystemRoutineAddressEx";
  SystemRoutineAddress = (__int64 (__fastcall *)(_QWORD *, char *))MmGetSystemRoutineAddress(&v12);
  v6 = *(_QWORD *)(a2 + 792);
  v7 = &off_140263F00;
  v8 = SystemRoutineAddress;
  do
  {
    v9 = *v7;
    if ( v8 )
      ExportedRoutineByName = v8(v13, v9);
    else
      ExportedRoutineByName = RtlFindExportedRoutineByName(v6, v9);
    if ( ExportedRoutineByName )
    {
      *(_QWORD *)(a2 + 8LL * (_QWORD)v7[1]) = ExportedRoutineByName;
    }
    else
    {
      DbgPrintEx(0x70u, 0, "failed to load win32kbase_rs.sys, because import %s is not found\n", *v7);
      v3 = -1073741702;
    }
    v7 += 2;
  }
  while ( v7 != (char **)&Feature_Capture_ExpandCapturableWindows__private_requiresFeatures );
  if ( v3 < 0 )
    DbgPrintEx(0x70u, 0, "failed to loaded win32kbase_rs.sys: %08x\n", v3);
  LOGGED_NTSTATUS::LOGGED_NTSTATUS(a1, v3, 1);
  return a1;
}
