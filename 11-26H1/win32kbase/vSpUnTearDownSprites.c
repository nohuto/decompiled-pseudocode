/*
 * XREFs of vSpUnTearDownSprites @ 0x140248D5C
 * Callers:
 *     ?DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z @ 0x140157FD0 (-DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXAEAVPDEVOBJ@@@Z @ 0x1401B6D9C (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXAEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall vSpUnTearDownSprites(__int64 a1, __int64 a2))(__int64, __int64, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 56LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, __int64))result(a1, a2, 1LL);
  return result;
}
