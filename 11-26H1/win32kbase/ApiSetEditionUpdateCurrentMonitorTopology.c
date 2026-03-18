/*
 * XREFs of ApiSetEditionUpdateCurrentMonitorTopology @ 0x1400804F4
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x14007FA6C (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionUpdateCurrentMonitorTopology(__int64 a1)
{
  unsigned int v1; // ebx
  int (*v2)(void); // rax
  __int64 v3; // rcx
  unsigned int (*v4)(void); // rax

  v1 = 0;
  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 7088LL);
  if ( !v2 || v2() < 0 )
    return 1LL;
  v4 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 48) + 7096LL);
  if ( v4 )
    return v4();
  return v1;
}
