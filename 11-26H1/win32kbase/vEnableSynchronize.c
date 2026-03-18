/*
 * XREFs of vEnableSynchronize @ 0x1400C98B4
 * Callers:
 *     bDynamicModeChange @ 0x140030E68 (bDynamicModeChange.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1400C8390 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1401F4F1C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall vEnableSynchronize(__int64 a1))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 936LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a1);
  return result;
}
