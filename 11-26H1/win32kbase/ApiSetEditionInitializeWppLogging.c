/*
 * XREFs of ApiSetEditionInitializeWppLogging @ 0x140227724
 * Callers:
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x140142028 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionInitializeWppLogging(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  int (*v5)(void); // rax
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(__int64, __int64); // rax

  v4 = 0;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 6776LL);
  if ( v5 && v5() >= 0 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48) + 6784LL);
    if ( v7 )
      return (unsigned int)v7(a1, a2);
    else
      return (unsigned int)-1073741637;
  }
  return v4;
}
