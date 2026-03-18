/*
 * XREFs of Win32kBaseRustPatchCalloutHandler @ 0x1401C8B40
 * Callers:
 *     <none>
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?AllocateAndGetBaseRustExports@@YAJPEBU_SYSTEM_GDI_DRIVER_INFORMATION@@PEAPEAUBaseRustExportsStorage@@@Z @ 0x1401C8640 (-AllocateAndGetBaseRustExports@@YAJPEBU_SYSTEM_GDI_DRIVER_INFORMATION@@PEAPEAUBaseRustExportsSto.c)
 */

__int64 __fastcall Win32kBaseRustPatchCalloutHandler(
        const struct _SYSTEM_GDI_DRIVER_INFORMATION *a1,
        struct BaseRustExportsStorage **a2)
{
  __int64 v3; // rbx
  void *v4; // rcx

  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 == 1 )
    {
      W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)&qword_1402A10C0, 2u);
      v3 = _InterlockedExchange64((volatile __int64 *)&P, qword_1402A10C8);
      W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)&qword_1402A10C0, 2LL);
      v4 = (void *)v3;
    }
    else
    {
      if ( (_DWORD)a2 != 2 )
        return 3221225659LL;
      v4 = (void *)qword_1402A10C8;
      if ( !qword_1402A10C8 )
        return 0LL;
    }
    ExFreePoolWithTag(v4, 0);
    qword_1402A10C8 = 0LL;
    return 0LL;
  }
  if ( qword_1402A10C8 )
    return 3221266435LL;
  else
    return AllocateAndGetBaseRustExports(a1, a2);
}
