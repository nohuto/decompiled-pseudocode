/*
 * XREFs of ApiSetEditionInitializeWppLogging @ 0x140101524
 * Callers:
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x140101280 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     EditionInitializeWppLogging @ 0x14023E884 (EditionInitializeWppLogging.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionInitializeWppLogging(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  int (*v5)(void); // rax

  v4 = 0;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 7216LL);
  if ( v5 && v5() >= 0 )
    return (unsigned int)EditionInitializeWppLogging(a1, a2);
  return v4;
}
