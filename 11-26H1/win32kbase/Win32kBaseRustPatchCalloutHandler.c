/*
 * XREFs of Win32kBaseRustPatchCalloutHandler @ 0x1401F4020
 * Callers:
 *     ?HotswapBaseRustBinary@@YAJPEBG@Z @ 0x1401F3EE0 (-HotswapBaseRustBinary@@YAJPEBG@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?AllocateAndGetBaseRustExports@@YAJPEBU_SYSTEM_GDI_DRIVER_INFORMATION@@PEAPECUBaseRustExportsStorage@@@Z @ 0x1401F3CB4 (-AllocateAndGetBaseRustExports@@YAJPEBU_SYSTEM_GDI_DRIVER_INFORMATION@@PEAPECUBaseRustExportsSto.c)
 */

__int64 __fastcall Win32kBaseRustPatchCalloutHandler(
        const struct _SYSTEM_GDI_DRIVER_INFORMATION *a1,
        int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx

  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v5 = _InterlockedExchange64((volatile __int64 *)&WPP_MAIN_CB.Dpc.SystemArgument1, (__int64)Buffer);
      if ( (PSECURITY_DESCRIPTOR *)v5 != &WPP_MAIN_CB.SecurityDescriptor )
        ExpInterlockedPushEntrySList((PSLIST_HEADER)&WPP_MAIN_CB.Dpc.DpcData, (PSLIST_ENTRY)(v5 + 832));
    }
    else
    {
      if ( a2 != 2 )
        return 3221225659LL;
      if ( !Buffer )
        return 0LL;
      if ( Buffer != (PVOID)1 )
        GreDeleteFastMutex((char *)Buffer, 1LL, a3, a4);
    }
    Buffer = 0LL;
    return 0LL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Buffer, 1LL, 0LL) )
    return 3221266435LL;
  else
    return AllocateAndGetBaseRustExports(a1, (volatile struct BaseRustExportsStorage **)1);
}
