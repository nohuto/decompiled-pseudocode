/*
 * XREFs of ?AllocateAndGetBaseRustExports@@YAJPEBU_SYSTEM_GDI_DRIVER_INFORMATION@@PEAPECUBaseRustExportsStorage@@@Z @ 0x1401F3CB4
 * Callers:
 *     Win32kBaseRustPatchCalloutHandler @ 0x1401F4020 (Win32kBaseRustPatchCalloutHandler.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?GetBaseRustExports@@YA?AVLOGGED_NTSTATUS@@PEAUBaseRustExportsStorage@@@Z @ 0x1401F3DB4 (-GetBaseRustExports@@YA-AVLOGGED_NTSTATUS@@PEAUBaseRustExportsStorage@@@Z.c)
 */

__int64 __fastcall AllocateAndGetBaseRustExports(
        const struct _SYSTEM_GDI_DRIVER_INFORMATION *a1,
        volatile struct BaseRustExportsStorage **a2)
{
  __int64 v3; // rax
  char *v4; // rbx
  __int64 v6; // rdx
  int v7; // edi
  __int64 v8; // r8
  __int64 v9; // r9
  volatile struct BaseRustExportsStorage **v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v3 = Win32AllocPoolZInitImpl(256LL, 0x350uLL, 0x47747352u);
  v4 = (char *)v3;
  if ( !v3 )
    return 3221225495LL;
  *(UNICODE_STRING *)(v3 + 776) = a1->DriverName;
  *(_OWORD *)(v3 + 792) = *(_OWORD *)&a1->ImageAddress;
  *(_OWORD *)(v3 + 808) = *(_OWORD *)&a1->EntryPoint;
  v7 = *(_DWORD *)GetBaseRustExports(&v10, v3);
  if ( v7 < 0 )
    GreDeleteFastMutex(v4, v6, v8, v9);
  else
    Buffer = v4;
  return (unsigned int)v7;
}
